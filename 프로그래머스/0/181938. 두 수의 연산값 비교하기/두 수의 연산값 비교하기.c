#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int get_Max(int a, int b){
    return (a > b)? a: b;
}

int concatenate(int a, int b){
    int power = 1;
    while(power <= b){
        power = power * 10;
    }
    return a * power + b;
    
}

int solution(int a, int b) {
    int answer = get_Max(concatenate(a, b), 2 * a * b);
    return answer;
}