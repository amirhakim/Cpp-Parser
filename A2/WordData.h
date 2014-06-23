//
//  WordData.h
//  A2
//
//  Created by AMIR HAKIM on 2014-06-10.
//  Copyright (c) 2014 AMIR HAKIM. All rights reserved.
//

#ifndef A2_WordData_h
#define A2_WordData_h
#include <vector>
#include <iostream>
#include <string>
#include <locale>
#include "utilities.h"

using std::string;
using std::vector;
using std::ostream;
using std::cout;

class WordData{
public:
    WordData();
    WordData(string,int);
    void addLine(int);
    int getFrequency();
    const string& getWord();
    int compare(string);
    const vector<int>& getLines();
    friend ostream& operator<<(ostream&,const WordData&);
private:
    string word;
    int frequency;
    vector<int> lines;
};


#endif
