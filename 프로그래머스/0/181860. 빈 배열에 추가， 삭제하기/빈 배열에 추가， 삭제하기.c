#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* solution(int arr[], size_t arr_len, bool flag[], size_t flag_len) {
    // 동적 배열 X를 위한 초기 capacity와 길이
    int capacity = 4;
    int *X = (int*)malloc(sizeof(int) * capacity);
    int X_len = 0;  // 현재 X에 들어있는 원소 개수

    // arr와 flag를 순회
    for (int i = 0; i < arr_len; i++) {
        if (flag[i]) { 
            // flag[i]가 true이면, arr[i]를 arr[i] * 2 번 추가
            int times = arr[i] * 2;
            for (int j = 0; j < times; j++) {
                // 동적 배열 X의 공간이 부족하면 재할당
                if (X_len >= capacity) {
                    capacity *= 2;
                    X = (int*)realloc(X, sizeof(int) * capacity);
                }
                X[X_len++] = arr[i];
            }
        } else {  
            // flag[i]가 false이면, X의 마지막 arr[i]개의 원소 제거
            int removeCount = arr[i];
            if (removeCount > X_len)
                X_len = 0;
            else
                X_len -= removeCount;
            // false인 경우에도 break하지 않고 계속 진행!
        }
    }
    
    // 최종 결과의 크기만큼 메모리를 할당하여 복사
    int* answer = (int*)malloc(sizeof(int) * (X_len > 0 ? X_len : 1));
    for (int i = 0; i < X_len; i++) {
        answer[i] = X[i];
    }
    free(X);
    return answer;
}
