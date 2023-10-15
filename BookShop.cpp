// BookShop.cpp
// used to initialize all methods of BookShop class from "BookShop.h"

#include "BookShop.h"

// static BookShop member initialization
int BookShop::noOfBooksAdded = 0;

// constructor
BookShop::BookShop()
{
    Book *bookCollection = new Book[MAX_BOOKS];
};

// (overloaded) addBook method
// to add an object of Book class into bookCollection
void BookShop::addBook(Book &book)
{
    (&bookCollection)[BookShop::noOfBooksAdded] = &book;
    BookShop::noOfBooksAdded++;
}

// (overloaded) addBook method
// to add an object of AudioBook class into bookCollection
void BookShop::addBook(AudioBook &audioBook)
{
    (&bookCollection)[BookShop::noOfBooksAdded] = &audioBook;
    BookShop::noOfBooksAdded++;
}

// destructor
BookShop::~BookShop()
{
    delete[] bookCollection;
};
