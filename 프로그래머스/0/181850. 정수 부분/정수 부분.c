#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(double flo) {
    if((int)flo - flo > 0)
    {
        return (int)flo - 1;
    }
    return (int)flo;
}