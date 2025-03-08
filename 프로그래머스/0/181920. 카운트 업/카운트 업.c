#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int start_num, int end_num) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int ans_len = end_num - start_num + 1;
    int* answer = (int*)malloc(sizeof(int) * ans_len);
    
    int num = start_num;
    for(int i = 0; i < ans_len; i++)
    {
        answer[i] = num++; 
    }
    return answer;
}