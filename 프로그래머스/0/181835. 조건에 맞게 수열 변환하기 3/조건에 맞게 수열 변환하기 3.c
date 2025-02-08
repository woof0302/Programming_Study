#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
    int i;
    
    if(k % 2 == 1)
    {
        for(i = 0; i < arr_len; i++)
        {
            arr[i]*= k;
        }
    }
    if(k % 2 == 0)
    {
        for(i = 0; i < arr_len; i++)
        {
            arr[i]+= k;
        }
    }
    
    return arr;
}