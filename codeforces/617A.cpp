#include <iostream>

int main()
{
    int f_loc;
    int cnt = 0;    // 최소이동 횟수
    std::cin >> f_loc;
    if(f_loc <= 5) {
        std::cout << 1 << std::endl;
        return 0;
    }
    else {
        while(f_loc > 5) {
            cnt++;
            f_loc -= 5;
        }
        std::cout << cnt + 1 << std::endl;
        return 0;
    }
    return 1;
}