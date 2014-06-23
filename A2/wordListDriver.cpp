//
//  main.cpp
//  A2
//
//  Created by AMIR HAKIM on 2014-06-05.
//  Copyright (c) 2014 AMIR HAKIM. All rights reserved.
//

#include <vector>
#include <iostream>
#include "WordData.h"
#include "utilities.h"

using std::endl;

int main(int argc, const char * argv[])
{
    string w1 = "Smir";
    string w2 = "wOrLd";
    string w3 = "AMIR";
    WordData wd1(w1,4);
    //cout << wd1<<endl;
    cout << wd1.compare(w1)<<endl;
    //cout << wd1.compare(w2)<<endl;
    //cout << wd1.compare(w3)<<endl;

    return 0;
}

