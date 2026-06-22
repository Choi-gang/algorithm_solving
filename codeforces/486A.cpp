#include <iostream>

int main()
{
    long long n;
    std::cin >> n;
    
    if(n%2 == 0) std::cout << n/2 << std::endl;
    else if(n%2 != 0)  std::cout << -((n+1)/2) << std::endl;
    return 0;

    // 이 문제는 반복문을 사용해서 풀면,
    // n 값의 범위가 매우 크기 때문에 long long을 사용하는데
    // 여기에서 반복문을 쓰면 시간이 매우 오래 걸린다.
    // 따라서 이 문제는 직접 계산하는 방법보다는, 규칙을 찾는 방향성을 떠올리는게 중요하다.
}