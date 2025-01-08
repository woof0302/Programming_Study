#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c) {
    
    if(a == b && b == c)
    {
        return (a + b + c) * (a * a + b * b + c * c ) * (a * a * a + b * b * b + c * c * c );
    }
    
    else if((a == b && b!= c) | (a == c && b != c) | (c == b && b != a))
    {
        return  (a + b + c) * (a * a + b * b + c * c );
    }
    
    else if((a != b)&&(a != c)&&(c != b))
    {
        return a + b + c;
    }
}