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
//#include "WordData.h"
#include "utilities.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>
#include <cctype>
#include <iomanip>
#include <vector>
#include <locale>
#include <iomanip>


using std::ifstream;
using std::string;
using std::istringstream;
using std::endl;
using std::setw;
using std::list;
using std::vector;
using std::ostream;


class WordList
{
    class WordData{
    private:
        string word;
        int frequency;
        vector<int> lines;
    public:
        WordData()=delete;
        WordData(string word,int line)
        {
            frequency = 0;
            this->word=word;
            addLine(line);
        };
        void addLine(int line)
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
        };
        int getFrequency()
        {
            return frequency;
        };
        const string& getWord()
        {
            return word;
        };
        const char getFirstLetter()
        {
            string upperThisWord = toUpper(word);
            char firstLetter = upperThisWord[0];
            return firstLetter;
        };
        int compare(string outerWord)
        {
            string lowCWord = toLower(word);
            string lowWOuterWord = toLower(outerWord);
            return (lowCWord.compare(lowWOuterWord));
        };
        const vector<int>& getLines()
        {
            return lines;
        };
        void printWord()
        {
            std::cout<<setw(20)<<word << " ";
            std::cout << "("<< frequency << ")" <<" ";
            for (auto c : lines)
                std::cout << c << " ";
            std::cout<< endl;
            
        };
        void printWord(string subWord)
        {
            if(word.find(subWord)!=-1)
            {
                printWord();
            }
            else return;
        }

    };
public:
    WordList(string);
    unsigned long getListSize();
    void loadInputFile(string);
    void print();
    void print(string);
    
private:
    list<WordData> myWordList;
    string fileName;
    void addWord(string,int);
};

#endif
