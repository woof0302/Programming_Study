#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// intervals_rows는 2차원 배열 intervals의 행 길이, intervals_cols는 2차원 배열 intervals의 열 길이입니다.
int* solution(int arr[], size_t arr_len, int** intervals, size_t intervals_rows, size_t intervals_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int first_len = intervals[0][1] - intervals[0][0] + 1;
    int second_len = intervals[1][1] -intervals[1][0] + 1;
    int ans_len = first_len + second_len;
    int* answer = (int*)malloc(sizeof(int) * ans_len);
    
    int idx = 0;
    
    for(int i = intervals[0][0]; i <= intervals[0][1]; i++)
    {
        answer[idx++] = arr[i];
    }
    for(int i = intervals[1][0]; i <= intervals[1][1]; i++)
    {
        answer[idx++] = arr[i];
    }
        
    return answer;
}