#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int get_Max(int a, int b)
{
    return (a > b)? a : b;
}

int concatenate(int a, int b)
{
    int power = 1;
    while(b / power > 0)
    {
        power *= 10;
    }
    return a * power + b;
    
}

int solution(int a, int b) {
    int answer = 0;
    int ab, ba;
    ab = concatenate(a, b);
    ba = concatenate(b, a);
    answer = get_Max(ab, ba);
    return answer;
}