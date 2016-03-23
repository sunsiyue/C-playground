//
//  main.cpp
//  play
//
//  Created by Siyue Sun on 3/3/16.
//  Copyright © 2016 Siyue Sun. All rights reserved.
//

#include <iostream>
#include <unordered_map>
#include <vector>
#include <stack>
#include <string>
//#include <ctype.h>
using namespace std;


int main() {
    // insert code here...
    string s = "acbd";
    int one=0, two=s.size()-1;
    
    while (one < two) {
        swap(s[one], s[two]);
        one++;
        two--;
    }
    
    cout << s;
}
