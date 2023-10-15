#ifndef AUDIOBOOK_H
#define AUDIOBOOK_H

// AudioBook.h
// used to define all class attributes and methods (including constructor and destructor)
// of AudioBook class

#include "Book.h"

class AudioBook: public Book
{
private:
    string voiceActor;

public:
    // default AudioBook constructor
    AudioBook();

    // getter methods
    string getVoiceActor();

    // setter methods
    void setVoiceActor(string voiceActor);

    // other methods
    void printDescription();
    
    // default AudioBook destructor
    ~AudioBook();
};

#endif