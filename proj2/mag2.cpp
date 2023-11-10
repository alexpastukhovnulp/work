#include <iostream>

int main() {
    // Введення даних
    long long H, M;
    std::cin >> H >> M;

    // Читання трьох заклять
    for (int i = 0; i < 3; ++i) {
        long long hi, mi;
        std::cin >> hi >> mi;

        // Перевірка, чи може персонаж вижити після заклинання
        if (hi <= H && mi <= M) {
            H -= hi;
            M -= mi;
        } else if (mi <= M) {
            M -= mi;
        } else if (hi <= H) {
            H -= hi;
        } else {
            std::cout << "NO" << std::endl;
            return 0;
        }
    }

    std::cout << "YES" << std::endl;

    return 0;
}