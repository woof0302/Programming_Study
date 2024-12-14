#include <stdio.h>
#define LEN_INPUT 10

int main(void) {
    char s1[LEN_INPUT] = {0};
    scanf("%s", s1);

    for(int i = 0; s1[i] != 0 ; i++)
    {
        if((s1[i] <= 90) && (s1[i] >64))   // ASCII    0 -> 48  a -> 65  A -> 97 
        {
            s1[i] = s1[i] + 32;
        }
        
        else 
        {
            s1[i] = s1[i] - 32;
        }
    }
    
    printf("%s", s1);
    
    return 0;
}
