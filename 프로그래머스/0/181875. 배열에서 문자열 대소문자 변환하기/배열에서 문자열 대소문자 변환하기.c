#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// strArr_len은 배열 strArr의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* strArr[], size_t strArr_len) {

    char** answer = (char**)malloc(strArr_len * sizeof(char*));
    
    for (size_t i = 0; i < strArr_len; i++) {      
        size_t len = strlen(strArr[i]);
        answer[i] = (char*)malloc((len + 1) * sizeof(char));
        
        for (size_t j = 0; j < len; j++) {
            if (i % 2 == 0) {
                answer[i][j] = tolower(strArr[i][j]); 
            } else {
                answer[i][j] = toupper(strArr[i][j]);
            }
        }
                
        answer[i][len] = '\0';
    }

    return answer;
}
