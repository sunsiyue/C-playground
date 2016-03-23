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
    string s1 = "acbd";
    string s2 = "dcba";
    
    
    
    unordered_map<char, int> map1;
    unordered_map<char, int> map2;
    
    for (auto c:s1) {
        map1[c] += 1;
    }
    
    for (auto c:s2) {
        map2[c] += 1;
    }
    
    if (map1 == map2) {
        cout << "equal\n";
    } else {
        cout << "no\n";
    }
    
  
}
