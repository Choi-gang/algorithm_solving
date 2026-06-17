#include <iostream>
#include <vector>
int main()
{
    int p_num, pivot, result = 0;
    std::cin >> p_num >> pivot;
    std::vector<int>arr(p_num, 0);
    for(auto &c : arr) {
        std::cin >> c;    
    }
    for(auto &c : arr) {
        if(c >= arr[pivot - 1] && c > 0) result++;
    }
    std::cout << result << std::endl;
    return 0;
}