#if 0
#define B_LIB_H 0
#define B_GITHUB_LIB_H 0
#define STD_LIB_H 1 
#endif


// #define B_LIB_H 
// #define B_GITHUB_LIB_H 
#define STD_LIB_H 

// #if B_LIB_H
#ifdef B_LIB_H
#include "../lib/std_lib_facilities.h"
#endif

// #if B_GITHUB_LIB_H
#ifdef B_GITHUB_LIB_H
#include "../github.com/BjarneStroustrup/Programming-_Principles_and_Practice_Using_Cpp/std_lib_facilities.h"
#endif

// #if STD_LIB_H
#ifdef STD_LIB_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
inline void keep_window_open() {char ch; cin>>ch;}
#endif

int main()
{
    cout << "Hello, World!\n";
    keep_window_open();
    return 0;
}