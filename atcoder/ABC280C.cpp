#include <iostream>
#include <string>

int main()
{
    std::string S, T;
    std::cin >> S >> T;
    int len = S.length();
    for(int i = 0; i < len; i++) {
        if(S[i] != T[i]) {
            std::cout << i+1 << std::endl;
            return 0;
        }
    }
    std::cout << T.length() << std::endl;
    return 0;
}