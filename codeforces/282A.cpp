#include <iostream>
#include <string>
int main()
{
    int num, result = 0;
    std::cin >> num;
    std::string cmd;
    while(num--) {
        std::cin >> cmd;
        if(cmd[1] == '+') result++;
        else if(cmd[1] == '-') result--;
    }
    std::cout << result << std::endl;
    return 0;
}