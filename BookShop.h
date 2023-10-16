#ifndef BOOKSHOP_H
#define BOOKSHOP_H

// BookShop.h
// used to define all class attributes and methods (including constructor and destructor)
// of BookShop class

#include "Book.h"
#include "AudioBook.h"

class BookShop
{
public:
    Book **bookCollection;
    static int noOfBooksAdded;

    // default BookShop constructor
    BookShop();

    // other methods
    void addBook(Book *book);
    void addBook(AudioBook *audioBook);

    // default BookShop destructor
    ~BookShop();
};

#endif