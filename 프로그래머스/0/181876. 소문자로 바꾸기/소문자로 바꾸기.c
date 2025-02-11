#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* solution(const char* myString) {
    char* answer = (char*)malloc(sizeof(char)*(strlen(myString)+1));
    for(int i=0; i<strlen(myString); i++) answer[i]=tolower(myString[i]);
    answer[strlen(myString)]='\0';
    return answer;
}