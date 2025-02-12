#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* solution(const char* myString) {
    char* answer = (char*)malloc(sizeof(char) * (strlen(myString) + 1));
    if (!answer) return NULL; 

    for (int i = 0; i < strlen(myString); i++) {
        if (myString[i] >= 'a' && myString[i] <= 'z') {
            answer[i] = myString[i] - 32;
        } else {
            answer[i] = myString[i];
        }
    }
    answer[strlen(myString)] = '\0';
    return answer;
}
