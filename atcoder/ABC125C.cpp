/*
숫자 하나를 바꿨을 때 최대공약수가 가장 커지게 할 수 있는것
바꿔서 생각하면 어떤 숫자만 뺐을 때 가장 큰 최대공약수가 나오는 경우만 찾으면 된다.
일일이 다 검사하면 연산량이 많음
*/

#include <iostream>
#include <numeric>
#include <vector>
#include <algorithm>

int main()
{
    int num;
    std::cin >> num;
    std::vector<int>A(num, 0);

    for(auto &c : A) {
        std::cin >> c;
    }

    std::vector<int>left(num+1, 0);
    std::vector<int>right(num+1, 0);

    // 앞에서부터 누적 GCD
    for(int i = 0; i < num; i++) {
        left[i+1] = std::gcd(left[i], A[i]);
    }

    // 뒤에서부터 누적 GCD
    for(int i = num-1; i >= 0; i--) {
        right[i] = std::gcd(A[i], right[i+1]);
    }

    int nswer = 0;
    for(int i = 0; i < num; i++) {
        int gcd_no_i = std::gcd(left[i], right[i+1]);
        nswer = std::max(nswer, gcd_no_i);
    }

    std::cout << nswer << std::endl;
    return 0;
}