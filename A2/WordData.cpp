//
//  WordData.cpp
//  A2
//
//  Created by AMIR HAKIM on 2014-06-10.
//  Copyright (c) 2014 AMIR HAKIM. All rights reserved.
//

#include "WordData.h"


WordData::WordData()
{
    
}

WordData::WordData(string word,int line)
{
    this->word=word;
    addLine(line);
}

void WordData::addLine(int line)
{
    for(auto it: lines)
    {
        if (it==line)
        {
            (this->frequency)++;
            return;
        }
    }
    lines.push_back(line);
    (this->frequency)++;
}

int WordData::getFrequency()
{
    return frequency;
}

const string& WordData::getWord()
{
    return word;
}

const vector<int>& WordData::getLines()
{
    return lines;
}

ostream& operator<<(ostream& sout,const WordData& object)
{
    sout<<object.word << " ";
    for (auto c : object.lines)
        sout << c << " ";

    return sout;
}

int WordData::compare(string word)
{
    toLower(word);
    string temp = word;
    toLower(temp);
    cout << word << endl;
    return (temp.compare(word));
}

