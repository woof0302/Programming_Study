#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {   
    
    char*  newString = strdup(myString);
    
    int i = 0;
    while(myString[i])
    {
        if(newString[i] == 'A')
        {
            newString[i] = 'B';
        }
        else if(newString[i] == 'B')
        {
            newString[i] = 'A';
        }
        i++;
    }
    
    if(strstr(newString, pat) != NULL)
    {
        return 1;
    }
    free(newString);
    return 0;
       
}