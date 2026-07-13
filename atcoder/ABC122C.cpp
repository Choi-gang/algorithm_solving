/*
문자열 입력: A, C, G, T 로만 구성됨

*/

#include <iostream>
#include <string>
#include <vector>

int main()
{
    int len, queries;
    std::cin >> len >> queries;
    std::string input;
    std::cin >> input;

    std::vector<int> cnt(len, 0);

    for(int i = 1; i < len; i++) {
        cnt[i] = cnt[i-1];  // 이전에 등장한 AC 개수를 다음위치까지 들고가야함
        if(input[i] == 'C' && input[i-1] == 'A') {
            cnt[i]++;
        }
    }

    while(queries--) {
        int start, last;
        std::cin >> start >> last;
        std::cout << cnt[last-1] - cnt[start-1] << '\n';
    }

    return 0;
}