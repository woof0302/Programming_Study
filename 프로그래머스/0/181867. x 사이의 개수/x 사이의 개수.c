#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* myString) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
    int count = 1;
    
    for(int i = 0; myString[i] != '\0'; i++)
    {
        if(myString[i] == 'x')
        {
            count++;
        }
    }
    
    int* answer = (int*)malloc(sizeof(int) * count);
    
    int idx = 0;
    int part_idx = 0;
    
    while(myString[idx] != '\0')
    {
        int length = 0;
        
        while(myString[idx] != 'x' && myString[idx] != '\0')
        {
            length++;
            idx++;
        }
        
        answer[part_idx++] = length;
        
        if(myString[idx] == 'x')
        {
            idx++;
        }
    }
    return answer;
}