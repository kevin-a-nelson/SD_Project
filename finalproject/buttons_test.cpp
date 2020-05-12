#include"../react.h"

int main() {
  init();
  char state = get_char_at(2);
  if (just_starting()) {
    state = 'H';  
    put_char_at(2, state);
  } else if (received_event()) {
    if (event_id_is("to_screen_two")) {
      state = 'T';
      put_char_at(2, state);
    } else if (event_id_is("button_1")) {
      cerr << "ok!" << endl;
    } else if (event_id_is("to_home_screen")) {
      state = 'h';
      put_char_at(2, state);
    }
  }
  if ('H' == state) add_yaml("buttons_test.yaml");
  else add_yaml("buttns_screen1_test.yaml");
  quit();
}

