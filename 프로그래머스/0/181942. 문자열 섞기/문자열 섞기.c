#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* str1, const char* str2) {
   
    int len = strlen(str1); 
    char* answer = (char*)malloc((len * 2 + 1) * sizeof(char));
    
    int index;          
    for(int i = 0; i < len ; i++) 
    {
        answer[index++] = str1[i];
        answer[index++] = str2[i];
    }
    answer[index] = '\0';
    return answer;
}