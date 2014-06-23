//
//  WordList.h
//  A2
//
//  Created by AMIR HAKIM on 2014-06-22.
//  Copyright (c) 2014 AMIR HAKIM. All rights reserved.
//

#ifndef A2_WordList_h
#define A2_WordList_h

#include <list>
#include <string>
#include "WordData.h"
#include "utilities.h"

using std::list;
using std::string;

class WordList
{
public:
    WordList(string);
    int getSize();
    void print(ostream&);
    void print(ostream&,string);
    
private:
    list<WordData> myList;
    void load(string);
    void reflect(string,int);
};

#endif
