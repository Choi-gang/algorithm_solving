#include <iostream>
#include <string>
int main()
{
    std::string str1, str2;
    std::cin >> str1 >> str2;
    int len = str1.length();
    for(int i = 0; i < len; i++) {
        str1[i] = std::tolower(str1[i]);
        str2[i] = std::tolower(str2[i]);
        if(str1[i] > str2[i])  {
            std::cout << 1 << std::endl;
            return 0;
        }
        else if(str1[i] < str2[i]) {
            std::cout << -1 << std::endl;
            return 0;
        }
    }
    std::cout << 0 << std::endl;
    return 0;
}