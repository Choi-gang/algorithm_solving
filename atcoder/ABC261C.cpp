#include <iostream>
#include <string>
#include <unordered_map>

// map은 해당 인덱스가 몇번 등장했는지 확인 가능

int main()
{
    int num;
    std::cin >> num;
    std::unordered_map<std::string, int>count;

    for(int i = 0; i < num; i++) {
        std::string input;
        std::cin >> input;

        if(count[input] == 0) std::cout << input << '\n';
        else std::cout << input << "(" << count[input] << ")" << '\n';
        count[input]++;
    }

    return 0;
}