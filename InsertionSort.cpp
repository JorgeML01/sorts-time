#include "InsertionSort.hpp"
#include <iostream>

InsertionSort::InsertionSort() {
}

void InsertionSort::sort(int arr[], int size) {
    insertionSort(arr, size);

    // Imprimir el array ordenado
    for (int i = 0; i < size; i++) {
        std::cout << " " << arr[i];
    }
    std::cout << "\n";
}

void InsertionSort::insertionSort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;

        // Mover los elementos mayores que key a una posición adelante de su posición actual
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }

        // Insertar key en su posición correcta
        arr[j + 1] = key;
    }
}
