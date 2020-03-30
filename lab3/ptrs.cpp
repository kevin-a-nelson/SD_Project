#include"../react.h"

struct Pixel {
  unsigned char red;
  unsigned char green;
  unsigned char blue;

} ; // struct from above

int main() {
   Pixel **image;  // declare a variable 'image' of the correct type
    image=new Pixel*[2]; // dynamically allocate memory for the pointers to scanlines

  for (int i=0; i<2; ++i) {
    image[i]=new Pixel[3];
  }   // dynamically allocate memory for each of the scanlines, 
            //   using a loop
  image[0][1].red = 100;  // set some pixel value manually
  cerr << image[0][1].green << "\n";  // print it out, should be 'a'
  
  write_image("output.ppm", reinterpret_cast<char **>(image), 16, 16);

  for (int i=0; i<2; ++i) {
    delete image[i];
  }   // de-allocate the memory for each of the scanlines, 
            //    using a loop
  delete [] image;   //  de-allocate the memory for the pointers to the scanlines
}
