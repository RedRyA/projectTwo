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
#define ISBN_MIN 1000000000000
#define ISBN_MAX 9999999999999

#define MAX_COUNTER 3

// HEADERS //
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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






// String Check Function

int stringCheck(char str[ERROR_TRAP_BUFFER], size_t maxSize);
void getFName(char* nameEnter);
void getLName(char* nameEnter);
void getBookName(char* nameEnter);
void getBookEdit(unsigned int* val);
void getPubComp(char* nameEnter);
void getPubYear(unsigned int* val);
void getPubCity(char* nameEnter);
void getISBN(unsigned long* val);

int main() {
int counter=0;
int idx =0;

char buffer[ERROR_TRAP_BUFFER];
const size_t len=strlen(buffer + 1);

// This is for the max size of an array (10)
 char* authorFName[MAX_COUNTER];
// Author Last Name //
char* authorLName[MAX_COUNTER];
//Book Title //
 char* bookTitle[MAX_COUNTER];
 // Book Edition //
 unsigned int bookEdition[MAX_COUNTER];
// Publication Company //
 char* pubCompany[MAX_COUNTER];
//Publicatiuon Year //
unsigned int pubYear[MAX_COUNTER];
// Publication City //
char* pubCity[MAX_COUNTER];
// ISBN-13 Number //
 unsigned long isbn[MAX_COUNTER];



  for (int idx=0;idx<MAX_COUNTER;idx++)
  {

       /////////// AUTHOR FIRST NAME  /////////////////
       
getFName(buffer);
authorFName[idx]=(char*)malloc(len * sizeof(char));
strcpy(authorFName[idx], buffer);
memset(buffer, '\0', ERROR_TRAP_BUFFER);

////////////// AUTHOR LAST NAME  ////////////////////////

getLName(buffer);
authorLName[idx]=(char*)malloc(len * sizeof(char));
strcpy(authorLName[idx], buffer);
memset(buffer, '\0', ERROR_TRAP_BUFFER);

   /////////////  BOOK TITILE  ////////////////////////
  
 getBookName(buffer);
  bookTitle[idx]=(char*)malloc(len * sizeof(char));
   strcpy(bookTitle[idx], buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

/////////////// BOOK EDITION  ////////////////////////
 getBookEdit(&bookEdition[idx]);

    //////////////// PUBLICATION COMPANY  ////////////////
    
 getPubComp(buffer);
 pubCompany[idx]=(char*)malloc(len * sizeof(char));
strcpy(pubCompany[idx], buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);

      ///////////// PUBLICATION YEAR  //////////////////////
  
 getPubYear(&pubYear[idx]);

      /////////// PUBLICATION CITY  //////////////////////
      
 getPubCity(buffer);
 pubCity[idx]=(char*)malloc(len * sizeof(char));
strcpy(pubCity[idx], buffer);
      memset(buffer, '\0', ERROR_TRAP_BUFFER);


      //////////////// ISBN  ////////////////////////  
 getISBN(&isbn[idx]);


    counter++;
    
      if (counter <MAX_COUNTER){
	
      printf ("Would you like to continue?\n Y/N\n");
      scanf ("%s", buffer);
      getchar ();
      char ans = toupper (buffer[0]);
      memset(buffer,'\0',ERROR_TRAP_BUFFER);
      if (ans != 'Y')
	{
	  break;
	}
  
  }
  }

 for (int idx = 0; idx < counter; idx++)
    {
      
      printf("\nAuthor's First Name: %s", authorFName[idx]);
      printf("\nAuthor's Last Name: %s",authorLName[idx]);
      printf("\nBook Title: %s",bookTitle[idx]);
      printf("\nBook Edition: %d",bookEdition[idx]);
      printf("\nPublication Company: %s",pubCompany[idx]);
      printf("\nPublication Year: %d",pubYear[idx]);
      printf("\nPublication City %s",pubCity[idx]);
      printf ("\nISBN: %lu \n",isbn[idx]);

      free(authorFName[idx]);
      free(authorLName[idx]);
      free(bookTitle[idx]);
      free(pubCompany[idx]);
      free(pubCity[idx]);
    }
    int clear;
    for (clear =0 ;clear < 1; clear++){
     free(authorFName[MAX_COUNTER]);
      free(authorLName[MAX_COUNTER]);
      free(bookTitle[MAX_COUNTER]);
      free(pubCompany[MAX_COUNTER]);
      free(pubCity[MAX_COUNTER]);
    }
      
  return 0;
}

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

