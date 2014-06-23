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
using std::cout;
using std::endl;
using std::tolower;

static void toLower(std::string& word)
{
    for (int i=0; i<word.length(); ++i)
    {
        word[i]=tolower(word[i]);
    }
}

#endif
