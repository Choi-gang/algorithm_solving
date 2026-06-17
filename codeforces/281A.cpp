#include <iostream>
#include <cctype>
#include <string>
int main()
{
    std::string word;
    std::cin >> word;
    if(islower(word[0])) word[0] -= 32;
    std::cout << word << std::endl;
    return 0;
}