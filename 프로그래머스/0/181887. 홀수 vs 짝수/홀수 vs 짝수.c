#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int even_sum = 0;
    int odd_sum = 0;
    
    for(int i = 0; i < num_list_len; i++)
    {
        if(i % 2 == 0)
        {
            even_sum += num_list[i];
        }
        else
        {
            odd_sum += num_list[i];
        }        
    }
    
    if(even_sum >= odd_sum) return even_sum;
    else return odd_sum;
}