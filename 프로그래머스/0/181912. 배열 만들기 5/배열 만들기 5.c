#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// intStrs_len은 배열 intStrs의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* intStrs[], size_t intStrs_len, int k, int s, int l) {
    // 최대 intStrs_len개의 값이 저장될 수 있으므로 임시 배열을 할당합니다.
    int* tempArr = (int*)malloc(sizeof(int) * intStrs_len);
    int count = 0; // 결과에 포함된 값의 개수

    for (size_t i = 0; i < intStrs_len; i++) {
        // 각 문자열에서 s번 인덱스부터 l개의 문자 복사
        char* substr = (char*)malloc(sizeof(char) * (l + 1));
        strncpy(substr, intStrs[i] + s, l);
        substr[l] = '\0';  // 널 종료문자 추가

        // 부분 문자열을 정수로 변환
        int num = atoi(substr);
        free(substr);

        // 변환된 정수가 k보다 크면 결과 배열에 추가
        if(num > k) {
            tempArr[count++] = num;
        }
    }
    
    // 결과 배열의 크기만큼 정확히 동적 할당
    int* answer = (int*)malloc(sizeof(int) * count);
    for (int i = 0; i < count; i++) {
        answer[i] = tempArr[i];
    }
    free(tempArr);
    
    return answer;
}
