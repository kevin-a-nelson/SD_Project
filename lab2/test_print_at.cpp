#include<iostream>
using namespace std;
const int mem_size = 10000;
char global_mem[mem_size];

void print_at(int index, const char s[]) {
    ;

}

int main() {
  for (int i = 0; i < mem_size - 1; ++i) {
    global_mem[i] = '~';
  }
  global_mem[mem_size - 1] = 0; 
    
  print_at(5, "hello\n");
  cout << (global_mem + 3) << endl;  // output should be ~~hello
}
