#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
    int size = 10;
    int* answer = (int*)malloc(sizeof(int) * size);
    if(!answer) return NULL;
    
    int idx = 0;
    
    while( n != 1)
    {
        if(idx >= size)
        {
            size *= 2;
            answer = (int*)realloc(answer, size * sizeof(int));
            if(!answer) return NULL;
        }
        answer[idx++] = n;
        
        if(n % 2 == 0)
        {
            n /= 2;
        }
        else n = 3 * n + 1;
        
    }
    
    answer[idx] = 1;        
    
    return answer;
}