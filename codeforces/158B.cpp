/*
    한 택시에 최대 4명 탈 수 있음
    그런데 같은 그룹은 같은 택시에 타야함
    그리디 알고리즘 적용해야하고 algorithm 헤더의 min, max 쓸 생각 해야됨
*/
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int cnt = 0;
    int g_num;
    std::cin >> g_num;
    std::vector<int> p(5, 0);   
    /*
        해당 인원수의 그룹 개수를 따짐
        1~4 명이 있는 그룹 개수를 따져야 하니 인덱스 개수는 5까지 선언(0, 1, 2, 3, 4)
    */ 

    for(int i = 0; i < g_num; i++) {
        int x;
        std::cin >> x;
        p[x]++; // 해당 인원수의 그룹 개수 +1
    }

    int taxi = 0;
    taxi += p[4]; // 4명이 있는 그룹은 한 택시를 꽉채워 타니까 4명그룹의 개수만큼 택시개수 더하기

    /*
        1 + 3
        2 + 2 조합이 좋을 듯 하다
    */
    
    // 1+3 에서는 3명의 그룹 개수만큼 더하면 남은 1명그룹은 나중에 2명과 처리한다
    taxi += p[3];
    p[1] = std::max(0, p[1]-p[3]);

    // 2명택시 처리 (2+2)
    taxi += p[2]/2;
    p[2] %= 2;
    if(p[2]) {      // 2명그룹 1개가 남았으면,
        if(p[1]) {  // 1명그룹과 묶을 수 있으면 묶기
            p[1] = std::max(0, p[1]-2);
        }    
        taxi++;
    }

    int ones = p[1]/4;
    taxi += ones; // 1명그룹 많을경우도 생각해서 4로나눈 몫 더함
    p[1] -= ones*4;
    if(p[1]) taxi++;

    std::cout << taxi << std::endl;
    return 0;
}