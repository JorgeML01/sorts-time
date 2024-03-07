#include "QuickSort.hpp"
#include <iostream>

QuickSort::QuickSort() {
}

void QuickSort::sort(int arr[], int size) {
    quickSort(arr, 0, size - 1);

    // Imprimir el array ordenado
    for (int i = 0; i < size; i++) {
        std::cout << " " << arr[i];
    }
    std::cout << "\n";
}

int QuickSort::partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Elegir el pivote como el último elemento
    int i = low - 1; // Índice del menor elemento

    for (int j = low; j <= high - 1; j++) {
        // Si el elemento actual es menor o igual al pivote
        if (arr[j] <= pivot) {
            i++; // Incrementar el índice del menor elemento
            std::swap(arr[i], arr[j]);
        }
    }

    // Intercambiar arr[i+1] y arr[high] (colocar el pivote en su lugar)
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void QuickSort::quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Obtener el índice de partición
        int pi = partition(arr, low, high);

        // Ordenar los elementos antes y después de la partición
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
