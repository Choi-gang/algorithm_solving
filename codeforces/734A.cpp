#include <iostream>
#include <string>

int main()
{
    int played_num;
    std::string who_won;
    std::cin >> played_num >> who_won;

    int cnt_A = 0, cnt_D = 0;

    for(auto &c : who_won) {
        if(c == 'A') cnt_A++;
        else if(c == 'D') cnt_D++;
    }

    if(cnt_A > cnt_D)      std::cout << "Anton" << std::endl;       
    else if(cnt_A < cnt_D) std::cout << "Danik" << std::endl;
    else                   std::cout << "Friendship" << std::endl;

    return 0;
}