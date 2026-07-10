#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int r, c;
    std::cin >> r >> c;
    std::vector<std::vector<char>> grid(r, std::vector<char>(c, 0));
    int lim_num = std::min(r,c);
    std::vector<int> size_num(lim_num+1, 0);

    for(auto &line : grid) {
        for(auto &dot : line) {
            std::cin >> dot;
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(grid[i][j] == '#') {
                int size = 0;

                while(true) {
                    int d = size + 1;

                    if(i-d < 0 || i+d >= r || j-d < 0 || j+d >= c) break;
                    if(grid[i-d][j-d] == '#' &&
                       grid[i-d][j+d] == '#' &&
                       grid[i+d][j-d] == '#' &&
                       grid[i+d][j+d] == '#') size++;
                    else break;
                }
                if(size >= 1){
                    size_num[size]++;
                }
            }
        }
    }
    for(int i = 1; i <= lim_num; i++) {
        std::cout << size_num[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}