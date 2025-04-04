#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* letter) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string);
    int letter_count = 0;
    int i;
    
    for(i = 0; i < len; i++)
    {
        if(my_string[i] == *letter) letter_count++;
    }
    
    int all_len = len - letter_count;
    char* answer = (char*)malloc(sizeof(char) * (all_len + 1));
    
    int j = 0;
    for(int i = 0; i < len; i++)
    {
        if(my_string[i] != *letter) 
        {
            answer[j++] = my_string[i];
        }
    }
    answer[j] = '\0';    
    
    return answer;
}