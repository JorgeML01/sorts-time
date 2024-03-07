#include "SelectionSort.hpp"
#include <iostream>

SelectionSort::SelectionSort() {
}

void SelectionSort::sort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        // Encontrar el índice del mínimo elemento en el subarray no ordenado
        int minIndex = findMinIndex(arr, i, size - 1);

        // Intercambiar el mínimo elemento con el primer elemento no ordenado
        swap(arr[i], arr[minIndex]);
    }

    // Imprimir el array ordenado
    for (int i = 0; i < size; i++) {
        //std::cout << " " << arr[i];
    }
    std::cout << "\n";
}

int SelectionSort::findMinIndex(int arr[], int start, int end) {
    int minIndex = start;

    for (int i = start + 1; i <= end; ++i) {
        // Encontrar el índice del mínimo elemento en el subarray no ordenado
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    return minIndex;
}

void SelectionSort::swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
