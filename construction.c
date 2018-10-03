#include <stdlib.h>
#include <stdio.h>
#include <time.h>

struct num_pages { char[] title; int pages;};

struct num_pages[5] examples;
examples[0] = { "To Kill a Mockingbird"; 281;};
examples[1] = { "Catcher in the Rye"; 277;};
examples[2] = { "Harry Potter Series"; 4224;};
examples[3] = { "The Great Gatsby"; 180;};
examples[4] = { "The Bible"; 1200;};


struct num_pages pick() {
  srand( time(NULL) );
  struct num_pages* pointer = examples;
  pointer += rand % 5;
  struct num_pages s 
  printf( "Title/Page Number: %s: %d\n", 
  
