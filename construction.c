#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

struct book { int pages; char title[25];};
struct book pick();

int main() {
  struct book examples[5];
  (examples[0]).pages = 281;
  strcpy( examples[0].title, "To Kill a Mockingbird");
  (examples[1]).pages = 277;
  strcpy( examples[1].title, "The Catcher in the Rye");
  /* examples[2] = { 4224; "Harry Potter Series";}; */
  /* examples[3] = { 180; "The Great Gatsby";}; */
  /* examples[4] = { 1200; "The Bible";}; */
  pick();
}

struct book pick() {
  srand( time(NULL) );
  struct book* pointer = examples;
  pointer += rand % 5;
  struct book s = pointer;
  printf( "Title/Page Number: %s: %d\n", s.title, s.pages);
}
  
