#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr1_len은 배열 arr1의 길이입니다.
// arr2_len은 배열 arr2의 길이입니다.
int solution(int arr1[], size_t arr1_len, int arr2[], size_t arr2_len) {
   if(arr1_len > arr2_len)
   {
       return 1;
   }
    else if(arr1_len < arr2_len)
    {
        return -1;
    }    
    else
    {
        int arr1_sum = 0, arr2_sum = 0;
        
        for(int i = 0; i < arr1_len; i++)
        {
            arr1_sum += arr1[i];
            arr2_sum += arr2[i];
        }
        if(arr1_sum == arr2_sum) return 0;
        else if (arr1_sum > arr2_sum) return 1;
        else return -1;
    }
}  