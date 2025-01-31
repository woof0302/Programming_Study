#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
    int my_idx = 0;
    int word_count = 0;
    
    while(my_string[my_idx] != '\0')
    {        
        while(my_string[my_idx] == ' ')
        {
            my_idx++;
        }
        
        if(my_string[my_idx] != '\0')
        {
            word_count++;
            while(my_string[my_idx] != ' ' && my_string[my_idx] != '\0')
            {
                my_idx++;         
            }
                
        }
        
    }
        
    
    char** answer = (char**)malloc(sizeof(char*) * (word_count + 1));
    
    my_idx = 0;                                   
    int word_idx = 0;                                   
                                   
    while(my_string[my_idx] != '\0')
    {
        while(my_string[my_idx] == ' ')
        {
            my_idx++;
        }
        
        if(my_string[my_idx] != '\0')
        {
            int start = my_idx;
            
            while(my_string[my_idx] != ' ' && my_string[my_idx] != '\0')
            {
                my_idx++;
            }
            int word_length = my_idx - start;
            
            answer[word_idx] = (char*)malloc(sizeof(char) * (word_length + 1));
            strncpy(answer[word_idx], &my_string[start], word_length);
            answer[word_idx][word_length] = '\0';
            word_idx++;
        }
                               
        
    }
       
     answer[word_count] = NULL;
    
    return answer;
}