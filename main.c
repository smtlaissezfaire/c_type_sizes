#include <stdio.h>

#define print_size(name, type) printf("size of %s: %li\n", (name), sizeof(type))

struct one_element_char {
  char foo;
};

struct two_element_char_and_int {
  char one;
  int  two;
};

int main() {
  print_size("char",                                 char);
  print_size("int",                                  int);
  print_size("long int",                             long int);
  print_size("float",                                float);
  print_size("double",                               double);
  print_size("struct with one element: char",        struct one_element_char);
  print_size("struct with two elements: char + int", struct two_element_char_and_int);
  puts("");

  print_size("pointer to char",   char *);
  print_size("pointer to int",    int *);
  print_size("pointer to float",  float *);
  print_size("pointer to double", double *);
  print_size("pointer of struct with one element: char",       struct one_element_char *);
  print_size("pointer of struct with two elements char + int", struct two_element_char_and_int *);

  return 0;
}