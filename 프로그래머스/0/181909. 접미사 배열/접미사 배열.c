#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}


char** solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string);
    char** answer = (char**)malloc(sizeof(char*) * len);
    
    for(int i = 0; i < len; i++)
    {
        answer[i] = strdup(my_string + i);
    }
    
    qsort(answer, len, sizeof(char*), compare);
    
    return answer;
}