#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int num;
    std::cin >> num;
    std::vector<int> p(5, 0);
    for(int i = 0; i < num; i++) {
        int x;  // 한 그룹의 인원수 입력
        std::cin >> x;
        p[x]++; // 이렇게 해서 최종으로 x명의 그룹이 몇개가 있는지 확인가능
    }

    int taxi = 0;   // 총 필요한 택시 수
    
    // 4명 그룹 처리
    taxi += p[4];

    // 3명 그룹 처리
    taxi += p[3];   // 이렇게 해서 1+3 조합과 3 단독 둘다 처리가능함
    p[1] = std::max(0, p[1]-p[3]);  // 1명그룹이 3명그룹보다 적어서 다 소모될경우 & 1명그룹이 많아서 남는경우 고려

    // 2명 그룹 처리
    taxi += p[2]/2;
    p[2] %= 2;  // 2+2 조합을 해서 남는 2명그룹이 있는경우도 고려

    // 1명 그룹 처리
    if(p[2]) {  // 2명그룹 1개 남으면
        taxi++;
        p[1] = std::max(0, p[1]-2); // 1명그룹 다 소진하는 경우와 남는경우
    }
    taxi += (p[1]+3)/4; // 나머지 1개그룹 1줄코드로 처리가능

    std::cout << taxi << std::endl;
    return 0;
}