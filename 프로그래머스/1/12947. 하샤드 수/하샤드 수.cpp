#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int sum = 0;
    int check_num = x;
    
    while(check_num >= 1)
    {
        sum += check_num % 10;
        check_num = check_num / 10;
    }
    
    if (x % sum == 0) return true;
    else return false;
}