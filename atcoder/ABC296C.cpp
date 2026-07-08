#include <iostream>
#include <set>
#include <vector>

int main()
{
    int N, X;
    std::cin >> N >> X;
    std::vector<int> arr(N);
    std::set<int> nums;
    for(int i = 0; i < N; i++) {
        std::cin >> arr[i];
        nums.insert(arr[i]);
    }

    // a-b = X   ->   a = b+X
    for(int i = 0; i < N; i++) {
        if(nums.count(arr[i]+X)) {
            std::cout << "Yes" << std::endl;
            return 0;
        }
    }
    std::cout << "No" << std::endl;
    return 0;
}