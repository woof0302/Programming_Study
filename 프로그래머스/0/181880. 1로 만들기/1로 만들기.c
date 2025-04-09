#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    for(int i = 0; i < num_list_len; i++)
    {
        while(num_list[i] != 1)
        {
            if(num_list[i] % 2 == 0) 
            {
                num_list[i] /= 2;
                answer++;
            }
            else 
            {
                num_list[i] = (num_list[i] - 1) / 2;
                answer++;
            }    
        }
    }
    
    return answer;
}