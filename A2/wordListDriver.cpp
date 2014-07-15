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
#include "WordList.h"

using std::endl;

int main(int argc, const char * argv[])
{
    WordList list("/Users/Amir/Dropbox/Xcode/A2/A2/Seuss.txt");
    list.print();
    list.print("wh");
    list.print("th");

    return 0;
}

