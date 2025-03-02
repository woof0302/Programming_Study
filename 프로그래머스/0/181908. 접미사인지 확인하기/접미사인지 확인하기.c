#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_suffix) {
    
    int len = strlen(is_suffix);
    char* cmp_string = (char*)malloc(sizeof(char) * (len + 1));
    
    strncpy(cmp_string, my_string + strlen(my_string) - len ,len);
    cmp_string[len] = '\0';
    
    if(!strncmp(is_suffix, cmp_string, len)) return 1;
    return 0;
}