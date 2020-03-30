#include<iostream>
#include<fstream>
using namespace std;
const int mem_size = 10000;
char global_mem[mem_size];


void server(bool first_time, char fname) {
    bool first_time=true;
    if (first_time) {
        cout << "What file would you like?";
    } else {
        read_file(fname, global_mem,  mem_size);
    }
}

void client(bool first_name, char fname) {
    bool first_time=false;
    if (first_time) {
        cout << global_mem;

    }
    cin.getline(fname, 20);

}
void read_stream(istream &f, char array[], int max_size) {
  int num_bytes;
  if (f.good()) {
    f.read(array, max_size);
    if (f) {
      cerr << "Warning in read_stream:  did not reach end of stream after " << max_size << " characters.";
      num_bytes = max_size - 1;
    } else {
      num_bytes = f.gcount();
      if (num_bytes >= max_size) num_bytes = max_size - 1;
    }
  } else {
    cerr << "Warning in read_stream: unable to read anything\n";
    num_bytes = 0;
  }
  array[num_bytes] = 0;  // assign null at end
}

void read_file(const char fname[], char array[], int max_size) {
  ifstream f(fname);
  read_stream(f, array, max_size);
  f.close();
}

int main() {
  char fname[20];
  char content[1000];
  int i;
  for (i = 0; i<(mem_size-1); i++) {
      global_mem[i] = '~';
  }


  //bool first_time = true;
  //while(1) {
    //if (first_time) {
      //cout << "What file would you like? ";
    //} else {
      //read_file(fname, content,1000);
      //cout << "Ok, " << content << "\n";
    //}
    //first_time = false;
    //cin.getline(fname, 20);
  //}
//}
 bool first_time = true;
 char fname[20];
 while(1) {
     server(first_time, fname);
     client(first_time, fname);
     first_time=false;
} 