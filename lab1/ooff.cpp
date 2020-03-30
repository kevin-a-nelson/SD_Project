#include<iostream>
using namespace std;
#include"../show_mem.h"

int main() {
    init();

    read_image("small.ppm");

    int width, height;
    get_image_dimensions(width, height);
   
    unsigned char g = 0, r = 255, b = 255;
    for (int i = 0; i<(3*width/4); i+=3) {
        for(int j = 0; j<(height/4); j++) {
         put_uchar_at(j*width*3+i-3, r); 
         put_uchar_at(j*width*3+i+1-2, g);
         put_uchar_at(j*width*3+i+2-1, b);
    
        }
    
    }
    

     
    

    write_image("output.ppm");

    quit();
}