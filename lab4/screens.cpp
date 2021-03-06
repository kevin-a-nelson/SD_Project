#include"../react.h"

int main() {
  init();
  char state = get_char_at(2);
  print_at(5, "hello world!");
  add_yaml("text.yaml");
  const int index_1 = 10;
    if (just_starting()) {
      print_at(index_1, "");
  }

      add_yaml("input.yaml", {{"index", index_1}});

  print_at(5, "hello");
  if (just_starting()) {
    state = 'H';
    put_char_at(2, state);
  } else if (received_event()) {
    if (event_id_is("to_screen_two")) {
      state = 'T';
      put_char_at(2, state);
    } else if (event_id_is("button_1")) {
      cerr << "ok!";
    } else if (event_id_is("to_home_screen")) {
      state = 'H';
      put_char_at(2, state);
    }
  }
  if ('H' == state) add_yaml("home.yaml");
  else add_yaml("screen1.yaml");
  quit();
}
