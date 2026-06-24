// 공에 적힌 숫자를 입력받으면 오른쪽 공과 교환
// 본인이 가장 오른쪽이면 왼쪽 공과 교환
// 문제의 핵심은 제한시간이 짧으니 O(1) 내로 해결

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N, op_num;
    std::cin >> N >> op_num;
    std::vector<int> balls(N);  // 해당 인덱스에 있는 공 번호
    std::vector<int> pos(N+1);  // 해당 공 번호가 있는 인덱스
    // swap 들어가는 코드에서 이중반복문을 사용하지 않기 위해 위치를 알려주는 벡터도 선언

    for(int i = 0; i < N; i++) {
        balls[i] = i+1;
        pos[i+1] = i;
    }

    for(int i = 0; i < op_num; i++) {
        int op_ball;
        std::cin >> op_ball;

        int idx = pos[op_ball];
        int swp_idx;            // 바꿀 공의 인덱스

        if(idx == N-1) {        // 위치가 오른쪽 맨 끝인 경우
            swp_idx = idx-1;    // 바꿀 공의 인덱스는 현재위치의 왼쪽
        }
        else {                  // 오른쪽에 공이 존재하는 경우
            swp_idx = idx+1;    // 바꿀 공의 인덱스는 현재위치의 오른쪽
        }

        int object = balls[swp_idx];    // 바꿀 위치에 있는 공번호
        std::swap(balls[idx], balls[swp_idx]);  // 교환
        pos[op_ball] = swp_idx; // 공의 인덱스번호 바꿔줌
        pos[object] = idx;      // 공의 인덱스번호 바꿔줌
    }

    for(auto &c : balls) {
        std::cout << c << ' ';
    }
    std::cout << std::endl;
    return 0;
}
