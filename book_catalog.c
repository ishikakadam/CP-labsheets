#include "books_catalog.h"


void addBookToCatalog(BOOK book1)
{
    // implement this function as per specification in books_catalog.h
   
   
   	booksCatalog[count].ID = book1.ID;
   	booksCatalog[count].shelfNum = book1.shelfNum;
   	booksCatalog[count].price = book1.price;
   	count++;

    return;
    
}

void printBookCatalog()
{
    // implement this function as per specification in books_catalog.h
    for(int i = 0; i < count; i ++)
    {
    	printBook(booksCatalog[i]);
    }

    return;
}

void sortBookCatalogOnID()
{
	int check = 1;
	BOOK tmpbook;
    // implement this function as per specification in books_catalog.h
    while(check == 1)
    {
    	check = 0;
	    for(int j = 0; j + 1 < count; j++)
	    {
	    	
	    	if(booksCatalog[j].ID > booksCatalog[j+1].ID)
	    	{
	    		check = 1;

	    		tmpbook.ID = booksCatalog[j].ID;
	    		tmpbook.shelfNum = booksCatalog[j].shelfNum;
	    		tmpbook.price = booksCatalog[j].price;


	    		booksCatalog[j].ID = booksCatalog[j + 1].ID;
	    		booksCatalog[j].shelfNum = booksCatalog[j + 1].shelfNum;
	    		booksCatalog[j].price = booksCatalog[j + 1].price;

	    		booksCatalog[j + 1].ID = tmpbook.ID;
	    		booksCatalog[j + 1].shelfNum = tmpbook.shelfNum;
	    		booksCatalog[j + 1].price = tmpbook.price;
	    	}
	    }
	}
    return;
}