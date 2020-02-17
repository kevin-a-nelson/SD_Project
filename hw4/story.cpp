#include<iostream>
using namespace std;

int main() {
  cerr << "Once upon a time there was an aviator named Lena Johansen whose ancestors came from the Husker Du Islands...";
  cerr << "Please choose one of the following options:\n";
  cerr << "\n 1) go to the island 55057; \n 2) stay on the island 94305 to explore more; \n What is your choice?";
  
  int n;
  cin >> n;  // get a number from the user, and store it in n

  if (n == 1) {
    cerr << "You have chosen option 1, and have traveled to island 55057 \n";
    cerr << "On island 55057 you meet a Norwegian friend named Harald the Bold, who somehow managed to lose his handkierchief during a typical Norwegian hike. But you found it. Also Helga (your companion that hasn't been mentioned before) randomly started crying. What will you do? \n";
    cerr << "Please choose one of the following options: \n";
    cerr << "3) return the handkerchief \n";
    cerr << "4) give it to Helga \n";
    int b;
    cin >> b;
    if (b == 3) {
        cerr << "Harald the Bold gently kissed you on the cheek \n";
    } else if (b == 4) {
        cerr << "You chose option 4 and gave the handkerchief to Helga. \n";
        cerr << "Helga was so overwhelmed by the story that she witnessed with her own eyes. \n";
    }
    
  } else if (n == 2) {
    cerr << "'Ay LMAO!', said Lena, 'I haven't finished my beer yet!  \n";
   } 

}