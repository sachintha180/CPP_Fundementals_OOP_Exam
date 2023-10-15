// AudioBook.cpp
// used to initialize all methods of AudioBook class from "AudioBook.h"

#include "AudioBook.h"

// default constructor
AudioBook::AudioBook(){};

// getter methods
string AudioBook::getVoiceActor()
{
    return voiceActor;
}

// setter methods
void AudioBook::setVoiceActor(string voiceActor)
{
    this->voiceActor = voiceActor;
}

// (overridden) printDescription method
// to print out attributes of AudioBook
void AudioBook::printDescription()
{
    cout << "AudioBook Details" << endl;
    cout << "Title: " << title << " | Author: " << authorName << endl;
    cout << "Author Book VA: " << voiceActor << endl;
}

// default destructor
AudioBook::~AudioBook(){};
