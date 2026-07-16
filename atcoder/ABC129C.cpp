#include <iostream>
#include <vector>

constexpr long long MOD = 1000000007;

int main()
{
    int des, bk_num;
    std::cin >> des >> bk_num;

    std::vector<bool>broken(des+1, false);    // 해당칸 계단 부러져있는지
    std::vector<long long>dp(des+1, 0);       // 부서진 계단 안밟고 해당 칸까지 가는 방법수

    for(int i = 0; i < bk_num; i++) {
        int loc;
        std::cin >> loc;
        broken[loc] = true; // 해당위치 부서짐
    }

    dp[0] = 1;

    for(int i = 1; i <= des; i++) {
        if(broken[i]) {
            dp[i] = 0;
            continue;
        }

        dp[i] = dp[i-1]; // 직전의 칸까지 이동할 수 있는 방법 넣기

        if(i >= 2) {
            dp[i] += dp[i-2];
            // 건널 수 있는 칸수가 2개니까, 전전칸까지 이동할 수 있는 방법까지 더해줌
        }

        dp[i] %= MOD;
    }
    std::cout << dp[des] << std::endl;
    return 0;
}