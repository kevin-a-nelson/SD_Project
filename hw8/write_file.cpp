#include<fstream>
#include<string.h>
using namespace std;

int main() {
  char greeting[] = "hello everybody!\n";
  int n = strlen(greeting);

  ofstream f("a.txt");  // create file stream object
  f.write(greeting, n);  
  f.close();
}
