#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, const char* overwrite_string, int s) {

  int length = strlen(my_string);
  int change_index = strlen(overwrite_string);
  char *answer = (char *)malloc(sizeof(char) * (length+1)); // 동적할당

  for (int i = 0; i < length; i++) 
    answer[i] = my_string[i];       // answer 문자열에 my_string 대입
  
  for (int i = s; i < s + change_index; i++) 
    answer[i] = overwrite_string[i - s];    // answer 문자열 뒤에 overwrite_string 덧붙임
  
  answer[length] = '\0'; // 마지막 null 문자 추가

  return answer;

}