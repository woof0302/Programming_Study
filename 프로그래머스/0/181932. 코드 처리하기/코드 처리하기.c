#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.

char* solution(const char* code) {
    int mode = 0;  
    int len = strlen(code);
    int index = 0;
    char* ret = (char*)malloc((len + 1) * sizeof(char)); 

    for (int i = 0; i < len; i++) 
    {
        if (mode == 0) 
        {  
            if (code[i] != '1' && i % 2 == 0) 
            {
                ret[index++] = code[i];  
            }
            if (code[i] == '1')
            {
                mode = 1; 
            }
        }   
        else if (mode == 1) 
        {           
            if (code[i] != '1' && i % 2 == 1) 
            {
                ret[index++] = code[i];  
            }
            if (code[i] == '1') 
            {
                mode = 0;  
            }
        }
    }

    ret[index] = '\0';  

    
    if (index == 0) 
    {
        free(ret);  
        return "EMPTY";  
    }

    return ret;  
}

