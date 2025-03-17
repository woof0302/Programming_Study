#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    return strcmp(*(const char**)a, *(const char**)b);
}
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* myString) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int cnt = 0;
    const char* temp = myString;
    
    while(*temp)
    {
        if(*temp != 'x' && (temp == myString||*(temp-1)=='x'))
        {
            cnt++;
        }
        temp++;
    }
    char** answer = (char**)malloc(sizeof(char*) * cnt);
    int idx = 0;
    temp = myString;
    
    while(*temp)
    {
        if(*temp != 'x')
        {
            const char* start = temp;
            int len = 0;
            
            while(*temp && *temp != 'x')
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
        }
        temp++;
    }
    
    qsort(answer, cnt, sizeof(char*), compare);            
    return answer;
}