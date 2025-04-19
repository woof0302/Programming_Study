#include <string>
#include <iostream>
#include <cctype>
using namespace std;

bool solution(string s)
{
    int pCount = 0;
    int yCount = 0;
    
    for(char ch : s)
    {
        ch = tolower(ch);
        if(ch == 'p') pCount++;
        else if(ch == 'y') yCount++;
    }


    return pCount == yCount;
}