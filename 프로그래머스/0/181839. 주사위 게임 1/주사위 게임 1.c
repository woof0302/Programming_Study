#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    if(a % 2 == 1 && b % 2 == 1) return a*a + b*b;
    else if(a % 2 == 1 || b % 2 == 1) return 2 * (a + b);
    else  
    {
        int result = a - b;
        if(result >= 0) return result;
        else return result * -1;
    }    
}