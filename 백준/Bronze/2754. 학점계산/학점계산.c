#include <stdio.h>

int main()
{
    char score[3];
    scanf("%s", score);
    
    double grade = 0.0;
    
    if( score[0] == 'A')
    {
        if(score[1] == '+') grade = 4.3;
        else if(score[1] == '0') grade = 4.0;
        else if(score[1] == '-') grade = 3.7;
    }
    
    else if( score[0] == 'B')
    {
        if(score[1] == '+') grade = 3.3;
        else if(score[1] == '0') grade = 3.0;
        else if(score[1] == '-') grade = 2.7;
    }

    else if( score[0] == 'C')
    {
        if(score[1] == '+') grade = 2.3;
        else if(score[1] == '0') grade = 2.0;
        else if(score[1] == '-') grade = 1.7;
    }
    
    else if( score[0] == 'D')
    {
        if(score[1] == '+') grade = 1.3;
        else if(score[1] == '0') grade = 1.0;
        else if(score[1] == '-') grade = 0.7;
    }
    
    else if (score[0] == 'F') grade = 0.0; 
    
    printf("%.1f", grade);
    return 0;
}