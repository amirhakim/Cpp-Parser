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
    frequency = 0;
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
    sout<<setw(20)<<object.word << " ";
    sout << "("<< object.frequency<< ")" <<" ";
    for (auto c : object.lines)
        sout << c << " ";

    return sout;
}

int WordData::compare(string outerWord)
{
    string lowCWord = toLower(word);
    string lowWOuterWord = toLower(outerWord);
    return (lowCWord.compare(lowWOuterWord));
}

