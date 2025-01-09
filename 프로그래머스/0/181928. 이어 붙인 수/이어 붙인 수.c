#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
   
    int oddsum = 0, evensum = 0;
    
   for(int i = 0; i < num_list_len; i++)
    {
        if(num_list[i] % 2 == 0)
        {
            evensum = evensum * 10 + num_list[i];
        }
        else
        {
            oddsum = oddsum * 10 + num_list[i];
        }    
    }
        
    answer = oddsum + evensum;
    
    return answer;
}