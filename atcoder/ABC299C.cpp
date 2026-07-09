/*
핵심: 문자열에서 연속된 o 구간의 최대 길이를 구하되,
그 구간의 왼쪽 또는 오른쪽에 -가 있어야 한다.
*/ 


#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int N;
    std::string S;
    std::cin >> N >> S;

    int cnt = 0;
    int max_len = -1;
    bool has_bar = false;
    for(auto &c : S) {
        if(c == 'o') cnt ++;
        else {
            has_bar = true;
            max_len = std::max(max_len, cnt);
            cnt = 0;
        }
    }

    max_len = std::max(max_len, cnt);
    /*
    끝이 o로 끝났을 경우에는 위의 반복문에서 esle 문을 실행 안해서 
    max_len = std::max(max_len, cnt); 
    위 코드를 실행하지 못함
    */
    if(!has_bar || max_len == 0) std::cout << -1 << std::endl;
    else std::cout << max_len << std::endl;
    return 0;
}