#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int n) {
    // n이 0일 때 처리
    if (n == 0) {
        char* answer = (char*)malloc(sizeof(char) * 2); // "0"을 저장
        answer[0] = '0';
        answer[1] = '\0';
        return answer;
    }

    // 자릿수를 계산하여 메모리 크기 결정
    int temp = n;
    int count = 0;
    while (temp > 0) {
        temp /= 10;
        count++;
    }

    // 문자열을 저장할 메모리 할당
    char* answer = (char*)malloc(sizeof(char) * (count + 1));

    // 자릿수를 하나씩 추출하여 문자로 변환
    int i;
    for (i = count - 1; i >= 0; i--) {
        answer[i] = (n % 10) + '0';  // 숫자를 문자로 변환 ('0'을 더함)
        n /= 10;  // 마지막 자릿수를 제외
    }

    // 끝에 null 문자 추가
    answer[count] = '\0';

    return answer;
}