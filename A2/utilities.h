//
//  utilities.h
//  A2
//
//  Created by AMIR HAKIM on 2014-06-12.
//  Copyright (c) 2014 AMIR HAKIM. All rights reserved.
//

#ifndef A2_utilities_h
#define A2_utilities_h

#include <string>
#include <stdio.h>
#include <ctype.h>
using std::tolower;
using std::string;

static string toLower(std::string& word)
{
    char wordcopy[word.length()];
    for (int i=0; i<word.length(); ++i)
    {
        wordcopy[i] =tolower(word[i]);
    }
    string wordLower=wordcopy;
    return wordLower;
}

static string toUpper(std::string& word)
{
    char wordcopy[word.length()];
    for (int i=0; i<word.length(); ++i)
    {
        wordcopy[i] =toupper(word[i]);
    }
    string wordUpper=wordcopy;
    return wordUpper;
}


static bool removeNonAlpha(std::string & word)
{
    for (int i = 0; i < word.length(); ++i)
    {
        if (!isalpha(word[i]))
        {
            word.erase(i, 1);//remove non alphabitical char
            i = 0;
        }
    }
    if ((!isalpha(word[0]))&&(word.length()==1))
    {
        return false;
    }
    return true;
}

#endif
