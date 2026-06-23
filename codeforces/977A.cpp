#include <iostream>

int main()
{
    int num, times;
    std::cin >> num >> times;
    while(times--) {
        if((num%10) == 0) {
            num /= 10;
        }
        else {
            num--;
        }
    }
    std::cout << num << std::endl;
    return 0;
}