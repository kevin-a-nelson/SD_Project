#include<iostream>
using namespace std;
#include"../show_mem.h"

int main() {
  init();

  fetch("https://api.weather.gov/gridpoints/MPX/111,47/forecast", -2000);

  char c = get_char_at(48);
  cerr << "Byte [48] contains: " << c;


  quit();
}

