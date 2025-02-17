#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// todo_list_len은 배열 todo_list의 길이입니다.
// finished_len은 배열 finished의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* todo_list[], size_t todo_list_len, bool finished[], size_t finished_len) {
 
    int cnt = 0;
    for (size_t i = 0; i < finished_len; i++) {
        if (!finished[i]) cnt++; 
    }
    
    char** answer = (char**)malloc(sizeof(char*) * cnt);
    
    if (!answer) return NULL;
    
    int index = 0;
    for (size_t i = 0; i < finished_len; i++) {
        if (!finished[i]) {
            answer[index] = (char*)malloc(strlen(todo_list[i]) + 1); 
            if (!answer[index]) { 
                for (int j = 0; j < index; j++) {
                    free(answer[j]);
                }
                free(answer);
                return NULL;
            }
            strcpy(answer[index], todo_list[i]); 
            index++;
        }
    }
    
    return answer;
}



  

