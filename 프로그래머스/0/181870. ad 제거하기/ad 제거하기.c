#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// strArr_len은 배열 strArr의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* strArr[], size_t strArr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** answer = (char**)malloc(sizeof(char*) * (strArr_len + 1));
    
    int arr_idx = 0;
    
    for(int i = 0; i < strArr_len; i++)
    {
        if(strstr(strArr[i], "ad"))
        {           
            continue;
        }
        
        int word_length = strlen(strArr[i]) + 1;
        answer[arr_idx] = (char*)malloc(sizeof(char) * word_length);
        strcpy(answer[arr_idx], strArr[i]);
        arr_idx++;
    }
     
    answer[arr_idx] = NULL;
    
    return answer;
}

void free_answer(char** answer)
{
    int idx = 0;
    while(answer[idx] != NULL)
    {
        free(answer[idx]);
        idx++;        
    }
    free(answer);
}