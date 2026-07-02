#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    int r, c;
    std::cin >> r >> c;
    std::vector<std::string> rows1(r), rows2(r);

    for(auto &line : rows1) std::cin >> line;
    for(auto &line : rows2) std::cin >> line;
    
    std::vector<std::string> cols1(c), cols2(c);
    // 열 저장할 벡터

    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            cols1[i] += rows1[j][i];
            cols2[i] += rows2[j][i];
        }
    }

    std::sort(cols1.begin(), cols1.end());
    std::sort(cols2.begin(), cols2.end());

    if(cols1 == cols2) std::cout << "Yes" << std::endl;
    else               std::cout << "No" << std::endl;

    return 0;
}