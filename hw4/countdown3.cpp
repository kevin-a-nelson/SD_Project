#include<iostream>
using namespace std;

int main() {
  cerr << "Countdown:\n10\n";
  for (int i = 9; i > 0; --i) {
    if (i == 3) {
      continue;
    }
    cerr << i << "\n";
    {
    cerr << "Blastoff!!!\n";
    }
  }
}
