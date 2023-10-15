#ifndef BOOK_H
#define BOOK_H

// Book.h
// used to define all class attributes and methods (including constructor and destructor)
// of Book class

#include "libraries.h"

class Book
{
protected:
    string title;
    string authorName;

public:
    // default Book constructor
    Book();

    // getter methods
    string getTitle();
    string getAuthorName();

    // setter methods
    void setTitle(string title);
    void setAuthorName(string authorName);

    // other methods
    void virtual printDescription();

    // default Book destructor
    ~Book();
};

#endif