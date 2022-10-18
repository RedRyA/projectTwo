/* Ryan Reddoch
   CS-1714-B1
   Project Two
   Header.h  */

#ifndef HEADER_H
#define HEADER_H

// needed to include this for size_t //
#include<stddef.h>

#define ERROR_TRAP_BUFFER 1024
#define MAX_YEAR 2022
#define MIN_YEAR 1475
#define MIN_EDITION 1
#define MAX_EDITION 10
#define AUTHOR_CHAR_LIMIT 32
#define BOOK_TITLE_LIMIT 128
#define CITY_AND_PUB_LIMIT 64
#define ISBN_MIN 1000000000000
#define ISBN_MAX 9999999999999
#define MAX_COUNTER 10

int stringCheck(char str[ERROR_TRAP_BUFFER], size_t maxSize);
void getFName(char* nameEnter);
void getLName(char* nameEnter);
void getBookName(char* nameEnter);
void getBookEdit(unsigned int* val);
void getPubComp(char* nameEnter);
void getPubYear(unsigned int* val);
void getPubCity(char* nameEnter);
void getISBN(unsigned long* val);
int printFinal();
int freeAndClear();

#endif
