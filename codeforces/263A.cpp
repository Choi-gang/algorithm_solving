/* #include <iostream>
#include <vector>
int main() {
    std::vector<std::vector<int>> matrix(5, std::vector<int>(5, 0));
    int result = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            std::cin >> matrix[i][j];
            if(matrix[i][j] == 1) {
                result = abs(j+1 - 3) + abs(i+1 - 3);
            }
        }
    }
    std::cout << result << std::endl;
    return 0;
}*/

#include <iostream>
int main() 
{
    int input, result = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            std::cin >> input;
            if(input == 1) {
                result = abs(j+1 - 3) + abs(i+1 - 3);
                std::cout << result << std::endl;
            }
        }
    }
    return 0;
}