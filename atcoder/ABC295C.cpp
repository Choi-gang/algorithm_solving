#include <iostream>
#include <unordered_map>
int main()
{
    int N;
    int result = 0;
    std::cin >> N;
    std::unordered_map<long long, int> pairs;
    // 색의 종류가 많아서 vector 보다는 map, long long

    for(int i = 0; i < N; i++) {
        int color;
        std::cin >> color;
        pairs[color]++; // 색 종류 개수구하기
    }

    for(auto &c : pairs) {
        result += c.second/2;
    }

    std::cout << result << std::endl;
    return 0;
}