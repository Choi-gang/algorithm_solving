#include <iostream>
#include <string>
int main()
{
    int num;
    std::cin >> num;
    std::string word;
    int i;
    for(i = num - 1; i >= 0; i--) {
        std::cin >> word;
        int len = word.length();
        if(len > 10) {
            std::cout << word[0] << len - 2 << word[len - 1] << '\n';
        }
        else std::cout << word << '\n';
    }
    return 0;
}