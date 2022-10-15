/* Ryan Reddoch
   CS-1714-B1
   Project Two */





// CONSTANTS //
#define ERROR_TRAP_BUFFER 1024

#define MAX_YEAR 2022
#define MIN_YEAR 1475
#define MIN_EDITION 1
#define MAX_EDITION 10
#define AUTHOR_CHAR_LIMIT 32
#define BOOK_TITLE_LIMIT 128
#define CITY_AND_PUB_LIMIT 64

#define MAX_COUNTER 10

// HEADERS //
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




// layout of variables //

 /* 

 FIRST NAME:
 LAST NAME:
 BOOK TITILE:
 EDITION:
 PUB COMPAMNY:
 PUB YEAR:
 PUB CITY:
 ISBN:

*/

// global variables: //
char buffer[ERROR_TRAP_BUFFER];

// Author First Name //

// This is for the max size of an array (10)
 char* authorFName[MAX_COUNTER];
// Author Last Name //
char* authorLName[MAX_COUNTER];
//Book Title //
 char* bookTitle[MAX_COUNTER];
 // Book Edition //
 unsigned int* bookEdition[MAX_COUNTER];
// Publication Company //
 char* pubCompany[MAX_COUNTER];
//Publicatiuon Year //
unsigned int* pubYear[MAX_COUNTER];
// Publication City //
char* pubCity[MAX_COUNTER];
// ISBN-13 Number //
 unsigned long* isbn[MAX_COUNTER];

  /* 

 FIRST NAME:
 LAST NAME:
 BOOK TITILE:
 EDITION:
 PUB COMPAMNY:
 PUB YEAR:
 PUB CITY:
 ISBN:

*/
const size_t len=strlen(buffer + 1);
char nameEnter[ERROR_TRAP_BUFFER];


char* aut  horFName[idx](char*)malloc(len * sizeof(char));

char* authorLName[idx](char*)malloc(len * sizeof(char));

char* bookTitle[idx](char*)malloc(len * sizeof(char));

unsigned int* bookEdition[idx](int*)malloc(len * sizeof(int));

char* pubCompany[idx](char*)malloc(len * sizeof(char));


// int needs a value rather than a string (duh)
unsigned int* pubYear[idx](int*)malloc(len * sizeof(int));

char* pubCity[idx](char*)malloc(len * sizeof(char));

unsigned int* isbn[idx](int*)malloc(len * sizeof(int));

// String Check Function
int stringCheck(char str[ERROR_TRAP_BUFFER], size_t maxSize) 
{
    int strReturnSize = (int)(strlen(str)-maxSize);

    (strReturnSize <= 0) ? strReturnSize = 0 : printf("Input size is too big, you are %d over, please try again \n", strReturnSize);
    
    return strReturnSize;

}


int getFName(char* nameEnter);
int getLName(char* nameEnter);
int getBookName(char* nameEnter);
int getBookEdit(unsigned int* val);
int getPubComp(char* nameEnter);
int getPubYear(unsigned int* val);
int getPubCity(char* nameEnter);
int getISBN(unsigned long* val);

int main() 
{


  int counter = 0;

  for (int idx=0;idx<MAX_COUNTER;idx++){
    
       /////////// AUTHOR FIRST NAME  /////////////////
int getFName(buffer);
strcpy(authorFName, buffer);
 memset(buffer, '\0', ERROR_TRAP_BUFFER);

////////////// AUTHOR LAST NAME  ////////////////////////
int getLName(char* nameEnter);
 strcpy(authorLName[idx], buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

   /////////////  BOOK TITILE  ////////////////////////
int getBookName(char* nameEnter);
   strcpy(bookTitle[idx], buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

/////////////// BOOK EDITION  ////////////////////////
int getBookEdit(unsigned int* val);

    //////////////// PUBLICATION COMPANY  ////////////////
int getPubComp(char* nameEnter);
strcpy(pubCompany[idx], buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

      ///////////// PUBLICATION YEAR  //////////////////////
  
int getPubYear(unsigned int* val);

      /////////// PUBLICATION CITY  //////////////////////
int getPubCity(char* nameEnter);
strcpy(pubCity[idx], buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);


      //////////////// ISBN  ////////////////////////  
int getISBN(unsigned long* val);


  }
  // initialize counter for switch statement //

  // main boolean variable for do while loop //
  bool isGood;
  // boolean to end main do while
      
 
     


    goNoGo=true;
       counter++;
    if (counter < MAX_COUNTER) {
      
      printf("Would you like to continue?\n Y/N\n");
      scanf("%s", buffer);
      getchar();
      char ans = toupper(buffer[0]);
      if (ans != 'Y'){
        goNoGo=false;

            
    
     
      
    }

  } while ((counter < MAX_COUNTER) && (goNoGo==true));


  return 0;
}
int getFName(char* nameEnter)
{
 do {

        isGood = false;

        printf("What is the author's first name? \n");
        scanf(" %[^\n]s", buffer);


      } while (stringCheck(buffer, AUTHOR_CHAR_LIMIT) > 0);
}

int getLName(char* nameEnter)
{
 do {

        isGood = false;

        printf("What is the author's last name? \n");
        scanf(" %[^\n]s", buffer);

      

      } while (stringCheck(buffer, AUTHOR_CHAR_LIMIT) > 0);
}

int getBookTitle(char* nameEnter)
{
 do {

        isGood = false;

        printf("What is the book's title? \n");
        scanf(" %[^\n]s", buffer);


      } while ((stringCheck(buffer,BOOK_TITLE_LIMIT ) > 0));

}

int getBookEdit(unsigned int* val)
{
do {
        isGood = false;

        printf("What is the book's edition? \nEnter 1 if NA\n");
        scanf("%u", &bookEdition0);
        getchar();

        if( bookEdition < MIN_EDITION || bookEdition0 > MAX_EDITION){
          printf("Book edition must be in between 1 and 10. "); 
          isGood = true; 
        }

      } while (isGood);
}

int getPubComp(char* nameEnter)
{
 do {

        isGood = false;

        printf("What is the publication company? \n");
        scanf(" %[^\n]s", buffer);

      } while ((stringCheck(buffer, CITY_AND_PUB_LIMIT) > 0));
}

int getPubYear(unsigned int* val)
{
 do {
        isGood = false;

        printf("What is the publication year?\n");
        scanf("%u", &pubYear0);
        getchar();

        if ((pubYear < MIN_YEAR) || (pubYear0 > MAX_YEAR)) {
          printf("Publication year must be between 1475 and 2022\n");
          isGood = true;
        }

      } while (isGood);
}

int getPubCity(char* nameEnter)
{
 do {
        isGood = false;

        printf("What is the publication city?\n");
        scanf(" %[^\n]s", buffer);

        if (strlen(buffer) >= CITY_AND_PUB_LIMIT) {
          printf("City name must be less than 64 characters.\n");
          isGood = true;
        }

      } while ((stringCheck(buffer, CITY_AND_PUB_LIMIT) > 0));
}

int getISBN(unsigned long* val)
{
 do {
        isGood = false;

        printf("What is the ISBN-13 number?\n");
        scanf("%lu", &isbn);
        getchar();
        if ((isbn0 < 1000000000000) || (isbn0 > 9999999999999)) {
          printf("ISBN-13 must be 13 digits long\n");
          isGood = true;
        }

      } while (isGood);

}