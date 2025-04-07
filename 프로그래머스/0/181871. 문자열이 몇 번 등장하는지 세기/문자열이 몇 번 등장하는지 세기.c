#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    
    int my_len = strlen(myString);
    int pat_len =strlen(pat);
    int cnt = 0;
    
    for(int i = 0; i <= my_len - pat_len; i++)
    {
        bool found = true;
        
        for(int j = 0; j < pat_len; j++)
        {
            if(myString[i + j] != pat[j])
            {
                found = false;
                break;
            }
        }
        
        if(found) cnt++;
    }
    
    return cnt;
}