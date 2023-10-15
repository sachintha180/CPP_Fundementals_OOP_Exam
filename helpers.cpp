// helpers.cpp
// contains custom functions to get user input

#include "libraries.h"

int get_int()
{
    // declare and get user input for string
    string user_string;
    getline(cin, user_string);

    // declare variable for user's integer
    int user_int = 0;

    // parse string for invalid integers
    for (int i = 0; i < user_string.length(); i++)
    {
        // if yes, return -1
        if (user_string.at(i) < '0' or user_string.at(i) > '9')
        {
            return -1;
        }
    }

    // otherwise, return parsed integer
    return stof(user_string);
}