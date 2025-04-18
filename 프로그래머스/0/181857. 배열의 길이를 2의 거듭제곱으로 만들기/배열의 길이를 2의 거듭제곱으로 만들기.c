#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int num = 1;
        
    while(num < arr_len)
    {
        num = num * 2;
    }
    
    int* answer = (int*)malloc(sizeof(int) * num);
    
    for(int i = 0; i < arr_len; i++)
    {
        answer[i] = arr[i];         
    }
    
    for(int i = arr_len; i < num; i++)
    {
        answer[i] = 0;
    }
    
    return answer;
}