#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::string input;
    std::vector<char>v;
    std::cin >> input;

    int len1 = input.length();
    for(auto &c : input) {
        if(c != '+') {
            v.push_back(c);
        }
    }

    std::sort(v.begin(), v.end());
    int len2 = v.size();
    for(int i = 0; i < len2; i++) {
        if(i != 0) std::cout << '+';
        std::cout << v[i];
    }
    std::cout << std::endl;
    return 0;
}