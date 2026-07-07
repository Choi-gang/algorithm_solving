#include <iostream>
#include <unordered_map>
int main()
{
    int N;
    int result = 0;
    std::cin >> N;
    std::unordered_map<long long, int> pairs;

    for(int i = 0; i < N; i++) {
        int color;
        std::cin >> color;
        pairs[color]++;
    }

    for(auto &c : pairs) {
        result += c.second/2;
    }

    std::cout << result << std::endl;
    return 0;
}