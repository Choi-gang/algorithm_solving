#include <iostream>
#include <string>
int main()
{
    int num, result = 0;
    std::string color;
    std::cin >> num >> color;
    int len = color.length();
    for(int i = 0; i < len-1; i++) {
        if(color[i] == color[i+1]) result++;
    }
    std::cout << result << std::endl;
    return 0;
}