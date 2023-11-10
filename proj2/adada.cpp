#include<iostream>
#include<algorithm>

int main() {
    int h[4]; // Довжини ніжок стола
    int d[4]; // Довжина, яку відпиляють від відповідної ніжки

    for (int i = 0; i < 4; i++)
        std::cin >> h[i];

    for (int i = 0; i < 4; i++) 
        std::cin >> d[i];
    
    std::sort(h, h + 4);

    for (int i = 0; i < 4; i++) {
        if (d[i] > h[i]) {
            std::cout << "ERROR" << std::endl;
            return 0;
        }
    }

    for (int i = 0; i < 4; i++) 
        h[i] -= d[i];
    
    int max_leg = *std::max_element(h, h + 4);
    int min_leg = *std::min_element(h, h + 4);

    if (max_leg >= 2 * min_leg) 
        std::cout << "NO" << std::endl;
    else if (min_leg > 0) 
        std::cout << "YES" << std::endl;
    else 
        std::cout << "ERROR" << std::endl;
    

    return 0;
}
