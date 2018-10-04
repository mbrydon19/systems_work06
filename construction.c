#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

struct book { int pages; char title[25];};
// void return_example();

struct book r_example(int num; char name[25]){
	struct book s;
	s.pages= num;
	strcpy(s.title, name);
	return s; 
}
int main(){
  
  int n0= 281;
  char na0[]="To Kill a Mockingbird";
  struct book ex = r_example(n0, na0);
  printf("Example of Struct: %s: %d\n", ex.title, ex.pages);
 
  // struct book examples[5];
  // examples[0].pages = 281;
  // strcpy(examples[0].title, "To Kill a Mockingbird");
  
  // examples[1].pages = 277;
  // strcpy( examples[1].title, "The Catcher in the Rye");
  
  // examples[2].pages = 4224;
  // strcpy(examples[2].title, "Harry Potter Series");
  
  // examples[3].pages = 180; 
  // strcpy(examples[3].title, "The Great Gatsby");
  
  // examples[4].pages = 1200; 
  // strcpy(examples[4].title, "The Bible");
  
  // return_example(examples);
// }

// void return_example(struct book examples[]) {
  // srand( time(NULL) );
  // struct book* pointer = examples;
  // pointer += (rand % 5);
  // struct book s = *(pointer);
  // printf("Title/Page Number: %s: %d\n", s.title, s.pages);
// }
