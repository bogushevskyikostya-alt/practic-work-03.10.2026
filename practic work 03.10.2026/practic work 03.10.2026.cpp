/* Завдання 1
#include <iostream>

int main() {
    const int ROWS = 3;
    const int COLS = 4;
    int arr[ROWS][COLS] = {
        {3,  8, 1, 5},
        {12, 4, 7, 2},
        {9,  6, 0, 11}
    };

    int sum = 0;
    int min_val = arr[0][0];
    int max_val = arr[0][0];
    int total_elements = ROWS * COLS;

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            sum += arr[i][j];

            if (arr[i][j] < min_val) {
                min_val = arr[i][j];
            }
            if (arr[i][j] > max_val) {
                max_val = arr[i][j];
            }
        }
    }

    double average = static_cast<double>(sum) / total_elements;

    std::cout << "Сума всіх елементів: " << sum << '\n';
    std::cout << "Середнє арифметичне: " << average << '\n';
    std::cout << "Мінімальний елемент: " << min_val << '\n';
    std::cout << "Максимальний елемент: " << max_val << '\n';

    return 0;
}*/
/* Завдання 2 
#include <iostream>
#include <iomanip>

int main() {
    const int ROWS = 3;
    const int COLS = 4;
    int arr[ROWS][COLS] = {
        {3, 8, 1, 5},
        {2, 4, 7, 2},
        {9, 6, 0, 1}
    };

    int col_sums[COLS] = { 0 };
    int total_sum = 0;

    for (int i = 0; i < ROWS; ++i) {
        int row_sum = 0;
        for (int j = 0; j < COLS; ++j) {
            std::cout << std::setw(4) << arr[i][j];
            row_sum += arr[i][j];
            col_sums[j] += arr[i][j];
        }
        std::cout << "  | " << row_sum << '\n';
        total_sum += row_sum;
    }

    std::cout << "----------------------\n";
    for (int j = 0; j < COLS; ++j) {
        std::cout << std::setw(4) << col_sums[j];
    }
    std::cout << "  | " << total_sum << '\n';

    return 0;
}*/
/* Завдання 3 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int main() {
    std::srand(std::time(nullptr));

    const int ROWS = 5;
    const int COLS_SRC = 10;
    const int COLS_DST = 5;

    int arr1[ROWS][COLS_SRC];
    int arr2[ROWS][COLS_DST];

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS_SRC; ++j) {
            arr1[i][j] = std::rand() % 51;
        }
    }
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS_DST; ++j) {
            arr2[i][j] = arr1[i][j * 2] + arr1[i][j * 2 + 1];
        }
    }
    std::cout << "Перший масив (5x10):\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS_SRC; ++j) {
            std::cout << std::setw(4) << arr1[i][j];
        }
        std::cout << '\n';
    }
    std::cout << "\nДругий масив (5x5):\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS_DST; ++j) {
            std::cout << std::setw(4) << arr2[i][j];
        }
        std::cout << '\n';
    }

    return 0;
}*/