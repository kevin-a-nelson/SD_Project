#include"../react.h"

void  handle_button(int button) {
    for (button = 0; button<3; ++button){
    cerr << "Button "<<button<<" was pressed";
    // I haven't figured how to connect each button to a separate message
    }
}

int main() {
  const int counter_index = 5;
  const int text_index = 10;

  init();
  if (just_starting()) {
    const int zero = 0;
    put_int_at(5, zero);
  }
   else if (received_event()) {
    for (int n = 0; n<3; ++n){
      if (event_id_is("b", n)) { 
      handle_button(n);
    }
  }
  }
    for (int i=0; i < 3; ++i) {
        add_yaml("button.yaml", {{"id", i}});
    }
  
  int counter = get_int_at(counter_index);
  ++counter;
  put_int_at(counter_index, counter);
  cerr << "counter is "<< counter<<endl;
  add_yaml("one_text.yaml", {{"index_1", text_index}});
  print_at(text_index, "{}", {counter});
  quit();
}
