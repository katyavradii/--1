#include <stdio.h>

/** 
 * @brief Виводить елементи одновимірного цілочисельного масиву в стандартний потік виведення.
 * 
 * @param arr Масив чисел.
 * @param size Кількість елементів у масиві.
 */
void print_array(const int arr[], int size);

/** 
 * @brief Сортує елементи одновимірного цілочисельного масиву за спаданням.
 * 
 * 
 * @param arr Масив чисел.
 * @param size Кількість елементів у масиві.
 */
void sort(int arr[], int size);

int main() {
    int array[10] = {12, -5, 43, 0, 88, 19, -21, 7, 100, 34};

    printf("Original array:\n");
    print_array(array, 10);

    sort(array, 10);

    printf("\nSorted array:\n");
    print_array(array, 10);

    return 0;
}

void print_array(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}