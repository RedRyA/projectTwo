/* Ryan Reddoch
   CS-1714-B1
   Project Two */


#include <ctype.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"


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

