#include <iostream>
int find_up2(int a, int b, int c);
int main()
{
    int num;
    std::cin >> num;
    int result = 0;
    int petiya, basha, tony;
    for(int i = num; i > 0; i--) {
        std::cin >> petiya >> basha >> tony;
        if(find_up2(petiya, basha, tony) >= 2) {
            result++;
        }
    }
    std::cout << result << std::endl;
    return 0;
}

int find_up2(int petiya, int basha, int tony) {
    int know_num = 0;
    if(petiya) know_num++;
    if(basha) know_num++;
    if(tony) know_num++;
    return know_num;
}