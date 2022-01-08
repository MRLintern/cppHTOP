#include "ncurses_display.hpp"
#include "system.hpp"

int main() {
  System system;
  NCursesDisplay::Display(system);
}