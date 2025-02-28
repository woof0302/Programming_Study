#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_prefix) {
    int answer = 0;
    int prefix_len = strlen(is_prefix);
    
    if(!strncmp(my_string, is_prefix, prefix_len)) return 1;
    return 0;
}