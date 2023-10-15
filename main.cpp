#include "BookShop.h"

int main(void)
{
    // display welcome message
    cout << "| Welcome to the Simple LibraryMS\n";

    // get number of (normal) books from user w/ validation
    cout << ">> Enter the number of normal books required: ";
    int bookCount = get_int();

    // get number of audio books from user
    cout << ">> Enter the number of audio books required: ";
    int audioBookCount = get_int();

    // initialize BookShop
    BookShop bookshop;

    // display message to begin (normal) book entries
    cout << "\n| Normal Book Entries" << endl;
    
    // add (normal) books to book shop
    for (int i = 0; i < bookCount; i++)
    {
        // initialize (normal) book input strings
        string bookTitle, bookAuthorName;

        // initialize new book
        Book newBook;

        // get book title and author from user
        cout << "\n[Book " << i + 1 << "]" << endl;
        
        cout << ">> Enter book title: ";
        getline(cin, bookTitle);

        cout << ">> Enter book author's name: ";
        getline(cin, bookAuthorName);

        // set input strings to book object
        newBook.setTitle(bookTitle);
        newBook.setAuthorName(bookAuthorName);

        // add book to bookshop
        bookshop.addBook(newBook);
    }

    // display message to begin audio book entries
    cout << "\n| Audio Book Entries" << endl;

    // add audio books to book shop
    for (int i = 0; i < audioBookCount; i++)
    {
        // initialize audio book input strings
        string audioBookTitle, audioBookAuthorName, audioBookVA;

        // initialize new audio book
        AudioBook newAudioBook;

        // get audio book title, author and voice actor from user
        cout << "\n[Audio Book " << i + 1 << "]" << endl;
        
        cout << "Enter audio book title: ";
        getline(cin, audioBookTitle);

        cout << "Enter audio book author's name: ";
        getline(cin, audioBookAuthorName);

        cout << "Enter audio book voice actor's name: ";
        getline(cin, audioBookVA);

        // set input strings to audio book object
        newAudioBook.setTitle(audioBookTitle);
        newAudioBook.setAuthorName(audioBookAuthorName);
        newAudioBook.setVoiceActor(audioBookVA);

        // add audio book to bookshop
        bookshop.addBook(newAudioBook);
    }

    cout << bookshop.noOfBooksAdded << endl;
    
    // display message to being book listing
    cout << "\n| All Book Listings" << endl;

    // display all books in bookshop
    for (int i = 0; i < BookShop::noOfBooksAdded; i++)
    {
        (&bookshop.bookCollection)[i]->printDescription();
    }
}