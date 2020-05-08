#include<iostream>
using namespace std;

class Note {
  char *sender;
  char *message;

public:
  Note() {  // this constructor is called a default constructor
    sender = new char[3];
    sender[0] = 'A';  
    sender[1] = 'B';  
    sender[2] = 0;
    
    message = new char[3];
    message[0] = 'h';  
    message[1] = 'i';  
    message[2] = 0;
  }
  Note(const Note &q){
    sender = new char[3];
    sender[0] = q.sender[0];
    sender[1] = q.sender[1];
    sender[2] = q.sender[2];

    message = new char[3];
    message[0] = q.message[0];
    message[1] = q.message[1];
    message[2] = q.message[2];

    cout << "Yay" << endl;
  }

  ~Note() { 
    delete [] sender; delete [] message; 
  }

  void display(ostream &os) {
    os << "sender: " << sender << " ";
    os << "message: " << message << "\n";
  }
};

int main() {
  Note n1, n2;
  n1.display(cout);  // output:  sender: AB message: hi
  Note n3(n1);
  n3.display(cout);
}
