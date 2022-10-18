/* Ryan Reddoch
   CS-1714-B1
   Project Two
   Header.c */

#include <ctype.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


// check string //
int stringCheck(char str[ERROR_TRAP_BUFFER], size_t maxSize) 
{
    int strReturnSize = (int)(strlen(str)-maxSize);

    (strReturnSize <= 0) ? strReturnSize = 0 : printf("Input size is too big, you are %d over, please try again \n", strReturnSize);
    
    return strReturnSize;

}

/// F name
void getFName(char nameEnter[ERROR_TRAP_BUFFER])
{
 do {

        printf("What is the author's first name? \n");
        scanf(" %[^\n]s", nameEnter);

      } while (stringCheck(nameEnter, AUTHOR_CHAR_LIMIT) > 0);
}

// L name //
void getLName(char nameEnter[ERROR_TRAP_BUFFER])
{

 do {
        printf("What is the author's last name? \n");
        scanf(" %[^\n]s", nameEnter);

      } while (stringCheck(nameEnter, AUTHOR_CHAR_LIMIT) > 0);

}
// Book Title
void getBookName(char nameEnter[ERROR_TRAP_BUFFER])
{

 do {
        printf("What is the book's title? \n");
        scanf(" %[^\n]s", nameEnter);

      } while ((stringCheck(nameEnter,BOOK_TITLE_LIMIT ) > 0));

}
// edition //
void getBookEdit(unsigned int* val)
{
  bool isGood;
do {
        isGood = false;

        printf("What is the book's edition? \nEnter 1 if NA\n");
        scanf("%u", val);
        getchar();

        if( *val < MIN_EDITION || *val > MAX_EDITION){
          printf("Book edition must be in between 1 and 10. "); 
          isGood = true; 
        }

      } while (isGood);
}

// Pub company
void getPubComp(char nameEnter[ERROR_TRAP_BUFFER])
{
 do {
        printf("What is the publication company? \n");
        scanf(" %[^\n]s", nameEnter);

      } while ((stringCheck(nameEnter, CITY_AND_PUB_LIMIT) > 0));
}

// pub year
void getPubYear(unsigned int* val)
{
  bool isGood;
 do {
        isGood = false;

        printf("What is the publication year?\n");
        scanf("%u", val);
        getchar();

        if ((*val < MIN_YEAR) || (*val > MAX_YEAR)) {
          printf("Publication year must be between 1475 and 2022\n");
          isGood = true;
        }

      } while (isGood);
}

// pub city
void getPubCity(char nameEnter[ERROR_TRAP_BUFFER])
{
 do {
  
        printf("What is the publication city?\n");
        scanf(" %[^\n]s", nameEnter);

       

      } while ((stringCheck(nameEnter, CITY_AND_PUB_LIMIT) > 0));
}

// ISBN //
void getISBN(unsigned long* val)
{
  bool isGood;
 do {
        isGood = false;

        printf("What is the ISBN-13 number?\n");
        scanf("%lu", val);
        getchar();
        if ((*val < ISBN_MIN) || (*val > ISBN_MAX)) {
          printf("ISBN-13 must be 13 digits long\n");
          isGood = true;
        }

      } while (isGood);

}

