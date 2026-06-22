#include <iostream>
int main()
{
    int L, B;
    int cnt = 0;    // 지나간 years
    std::cin >> L >> B;
    while(L <= B) {
        cnt++;
        L *= 3;
        B *= 2;
    }
    std::cout << cnt << std::endl;
    return 0;
}