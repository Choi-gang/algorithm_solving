/*
    어떤 노선에 역이 N개 있음
    S_1, S_2, ..., S_N => 이 노선의 역 이름들
    급행열차가 정차하는 역 M개
    T_1, T_2, ..., T_M => 급행열차가 정차하는 역 이름들

    T_1, T_2, ..., T_M은
    S_1, S_2, ..., S_N 중 일부이다.

    각 역 S_i에 대해, 그 역에 급행열차가 정차하면 Yes, 정차하지 않으면 No를 출력하라.

    입력형식:
        N M
        S_1 S_2 ... S_N
        T_1 T_2 ... T_M
*/

#include <iostream>
#include <string>
#include <set>
#include <vector>

int main()
{
    int ori_sta, exp_sta;
    std::cin >> ori_sta >> exp_sta;
    std::vector<std::string> subway(ori_sta);
    for(auto &c : subway) {
        std::cin >> c;
    }
    
    std::set<std::string> express;
    // set을 쓰면 이중반복문 사용하지 않고 탐색가능해서 시간절약이 가능하다
    // O(MlogM + NlogM)
    for(int i = 0; i < exp_sta; i++) {
        std::string exp_stop;
        std::cin >> exp_stop;
        express.insert(exp_stop);
    }

    for(int i = 0; i < ori_sta; i++) {
        if(express.count(subway[i]))    std::cout << "Yes" << '\n';
        else                            std::cout << "No" << '\n';
    }

    return 0;
}