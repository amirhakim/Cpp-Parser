//
//  WordList.cpp
//  A2
//
//  Created by AMIR HAKIM on 2014-06-22.
//  Copyright (c) 2014 AMIR HAKIM. All rights reserved.
//

#include "WordList.h"

WordList::WordList(string fileName)
{
    this->fileName=fileName;
    loadInputFile(fileName);
}

unsigned long WordList::getListSize()
{
    return this->myWordList.size();
}


void WordList::loadInputFile(string file)
{
    string line;
    string word;
    ifstream ifin(file);
    int lineNumber = 0;
    if (!ifin.is_open())
    {
        printf ("Error opening file");
        exit (EXIT_FAILURE);
    }
    while (!ifin.eof())
    {
        lineNumber++;
        getline(ifin,line);
        istringstream sen(line);
        while(sen>>word)
        {
            if(!removeNonAlpha(word)) continue;
            addWord(word, lineNumber);
        }
    }
}

void WordList::addWord(string word, int line)
{
    if (getListSize()==0)
    {
        myWordList.emplace_front(word, line);
    }
    else
    {
        auto it = myWordList.begin();
        while( true)
        {
            if (it->compare(word)==0)
            {
                it->addLine(line);
                return;
            }
            else if (it->compare(word)>0)
            {
                myWordList.insert( it, WordData(word,line) );
                return;
            }
            else if (it->compare(word)<0)
            {
                ++it;
                if ( it == myWordList.end() )
                {
                    myWordList.push_back( WordData( word, line ) );
                    return;
                }
            }
        }

    }
}

void WordList::print()
{
    std::cout << "WORD LIST SOURCE FILE: " << fileName<<endl;
    std::cout <<"================================="<<endl;
    char header = '@';
    for (auto s:myWordList)
    {
        if(header!=(s.getFirstLetter()))
        {
            header=s.getFirstLetter();
            std::cout <<"<"<<header<<">"<<endl;
        }
        
        s.printWord();
    }
    std::cout <<"================================="<<endl;
}

void WordList::print(string subWord)
{
    std::cout << "WORD LIST SOURCE FILE: " << fileName<<endl;
    std::cout << "words that begin with: " << subWord<<endl;
    std::cout <<"================================="<<endl;
    for (auto s:myWordList)
    {
        s.printWord(subWord);
    }
    std::cout <<"================================="<<endl;
}

