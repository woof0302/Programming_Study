#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    int* answer = (int*)malloc(queries_rows * sizeof(int));
    
    int i, j;
    
    for(i = 0; i < queries_rows; i++)
    {
        int find = 0;
        int smallest = 1000001;
        
        for(j = queries[i][0]; j <= queries[i][1] ; j++) // 쿼리
        {
            if(arr[j] > queries[i][2] )
            {
                find = 1;
                if(arr[j] < smallest)
                {
                    smallest = arr[j];
                }
                
            }
                
        }
        if(find == 1)
        {   
            answer[i] = smallest;
        }
        else answer[i] = -1;
        
    }
           
    return answer;
}