#include "makefile.h"

void return_example( struct book book_pages){
  printf("\"%s\" has %d pages\n", book_pages.title, book_pages.pages);
}

struct book r_example( int num, char name[25]){
	struct book s;
	s.pages = num;
	strcpy( s.title, name);
	return s; 
}

struct book add_pages( struct book book_pages, int new_num){
  //has to return a new struct book because function recieves a deep copy
  return r_example( book_pages.pages + new_num, book_pages.title);
}

int main(){

  printf("returning and printing examples:\n");
  
  int n0= 281;
  char na0[]="To Kill a Mockingbird";
  struct book ex0 = r_example(n0, na0);
  return_example( ex0);

  int n1= 248;
  char na1[]="the sun and her flowers";
  struct book ex1 = r_example(n1, na1);
  return_example( ex1);

  printf("adding 1000 pages to \"To Kill a Mockingbird\":\n");
  ex0 = add_pages( ex0, 1000);
  return_example( ex0);
  printf("subtracting 20 pages from \"the sun and her flowers\":\n");
  ex1 = add_pages( ex1, -20);
  return_example( ex1);

}
