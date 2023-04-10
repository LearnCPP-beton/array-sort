#include <iostream>

void sortArray(int array[], int size);

int main() {
    int array[] = {4, 3, 2, 6, 10, 5, 9, 7, 8, 1};
    int size = sizeof(array)/sizeof (array[0]);

    sortArray(array, size);

    for (int element : array) {
        std::cout << element << std::endl;
    }
    return 0;
}
void sortArray(int array[], int size) {
    int temp;

    for (int k = 0; k < 100; k++) {
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (array[i] > array[j]) {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;

                }
            }
        }
    }
}