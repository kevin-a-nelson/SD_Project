#include"../react.h"

struct Pixel {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
};
int main(){
    int width, height;
    Pixel **image;
    image=new Pixel*[2]; // dynamically allocate memory for the pointers to scanlines

  for (int i=0; i<2; ++i) {
    image[i]=new Pixel[3];
  }   // dynamically allocate memory for each of the scanlines, 
            //   using a loop
  image[0][1].red = 100;  // set some pixel value manually
  cerr << image[0][1].green << "\n";  // print it out, should be 'a'
    get_image_dimensions("small.ppm", width, height);
    read_image("small.ppm", reinterpret_cast<char **>(image), width, height);
    
     
}

