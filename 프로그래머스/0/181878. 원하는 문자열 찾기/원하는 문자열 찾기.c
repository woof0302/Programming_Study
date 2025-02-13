#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    
    int len1 = strlen(myString);
    int len2 = strlen(pat);
    
    for(int i = 0; i <= len1 - len2; i++)
    {
        int found = 1;
        for(int j = 0; j < len2; j++)
        {
            if(tolower(myString[i + j]) != tolower(pat[j]))
            {
                found = 0;
                break;
            }
        }
        if(found) return 1;
    }
    
    return 0;
}