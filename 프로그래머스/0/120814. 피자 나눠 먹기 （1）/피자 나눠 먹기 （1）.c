#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 1;
    answer += (n - 1) / 7;
    return answer;
}