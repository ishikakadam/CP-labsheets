#include "book_def.h"

BOOK newBook(int ID, SHELF shelfNum, float price)
{
   BOOK newBook; // implement this function as per specification in books_def.h
   newBook.ID = ID;
   newBook.shelfNum = shelfNum;
   newBook.price = price;
   return(newBook);
}

void printBook(BOOK book1)
{
   printf("The ID of the book is : %d \n", book1.ID);// implement this function as per specification in books_def.h
   printf("The ShelfNumber of this book is : %d \n", book1.shelfNum);
   printf("The price of this book is : %f \n", book1.price);

   return;
}