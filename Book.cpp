// Book.cpp
// used to initialize all methods of Book class from "Book.h"

#include "Book.h"

// default constructor
Book::Book(){};

// getter methods
string Book::getTitle()
{
    return title;
}

string Book::getAuthorName()
{
    return authorName;
}

// setter methods
void Book::setTitle(string title)
{
    this->title = title;
}

void Book::setAuthorName(string authorName)
{
    this->authorName = authorName;
}

// printDescription method
// to print out attributes of Book
void Book::printDescription()
{
    cout << "Book Details" << endl;
    cout << "Title: " << title << " | Author: " << authorName << endl;
}

// default destructor
Book::~Book(){};
