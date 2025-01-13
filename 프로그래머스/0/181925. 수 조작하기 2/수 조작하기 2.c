#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numLog_len은 배열 numLog의 길이입니다.
char* solution(int numLog[], size_t numLog_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(numLog_len);
    
    int i;
    
    for(i = 0; i < numLog_len - 1; i++)
    {
        int dif = numLog[i + 1] - numLog[i];
        
        if(dif == 1)
        {
            answer[i] = 'w';
        }
        else if(dif == -1)
        {
            answer[i] = 's';
        }
        if(dif == 10)
        {
            answer[i] = 'd';
        }
        if(dif == -10)
        {
            answer[i] = 'a';
        }
    }
    
    answer[i] = '\0';
        
    return answer;
}