#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

struct book { int pages; char title[25];};


void return_example( struct book book_pages);
struct book r_example( int num, char name[25]);
struct book add_pages( struct book book_pages, int new_num);
