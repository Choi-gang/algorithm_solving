// 순열 구하기
/*
    입력: 3
          2 3 1

    P[1] = 2, P[2] = 3, P[3] = 1
    문제 조건에 따르면
    Q[1] = 3, Q[2] = 1, Q[3] = 2
*/

#include <iostream>
#include <vector>

int main()
{
    int num;
    std::cin >> num;
    std::vector<int> Q(num+1);

    for(int i = 1; i <= num; i++) {
        int x;
        std::cin >> x;
        Q[x] = i;
    }

    for(int i = 1; i <= num; i++) {
        std::cout << Q[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}