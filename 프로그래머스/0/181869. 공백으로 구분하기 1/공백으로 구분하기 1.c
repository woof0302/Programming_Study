#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int cnt = 1;
    const char* temp = my_string;
    
    while(*temp)
    {
        if(*temp == ' ') cnt++;
        temp++;
    }        
    char** answer = (char**)malloc(sizeof(char*) * cnt);
    
    int idx = 0;
    temp = my_string;
    
    while(*temp)
    {
        const char* start = temp;
        int len = 0;
        
        while(*temp && *temp != ' ')
        {
            len++;
            temp++;
        }
        
        answer[idx] = (char*)malloc(sizeof(char) * (len + 1));
        
        for(int i = 0; i < len; i++)
        {
            answer[idx][i] = start[i];
        }
        answer[idx][len] = '\0';
        idx++;
        
        if(*temp == ' ') temp++;
    }
    return answer;
}