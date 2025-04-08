#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char* solution(const char* myString, const char* pat) {
    int n = strlen(myString);
    int m = strlen(pat);
    
    // 만약 pat가 빈 문자열이라면, 모든 문자열이 빈 문자열로 끝나므로 myString 전체를 반환합니다.
    if (m == 0) {
        char* ans = (char*)malloc(n + 1);
        strcpy(ans, myString);
        return ans;
    }
    
    int pos = -1;  // pat로 끝나는 부분 문자열의 마지막 인덱스를 저장할 변수

    // myString의 각 인덱스 i에 대해, i-m+1부터 i까지의 부분 문자열이 pat와 같은지 검사합니다.
    for (int i = m - 1; i < n; i++) {
        bool match = true;
        for (int j = 0; j < m; j++) {
            if (myString[i - m + 1 + j] != pat[j]) {
                match = false;
                break;
            }
        }
        // pat와 일치하면 pos를 갱신합니다. (오른쪽에 있을수록 부분 문자열의 길이가 길어집니다.)
        if (match) {
            pos = i;
        }
    }
    
    // pat로 끝나는 부분 문자열이 없는 경우, 빈 문자열을 반환합니다.
    if (pos == -1) {
        char* ans = (char*)malloc(1);
        ans[0] = '\0';
        return ans;
    }
    
    // myString의 0번부터 pos번까지의 부분 문자열이 pat로 끝나는 가장 긴 부분 문자열입니다.
    char* ans = (char*)malloc(pos + 2); // pos+1개의 문자와 널 종료문자('\0') 공간
    for (int i = 0; i <= pos; i++) {
        ans[i] = myString[i];
    }
    ans[pos+1] = '\0';
    return ans;
}
