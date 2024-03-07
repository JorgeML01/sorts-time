#include "HeapSort.hpp"
#include <iostream>

HeapSort::HeapSort() {
}

void HeapSort::sort(int arr[], int size) {
    // Construir el montículo (heap)
    buildHeap(arr, size);

    // Extraer elementos uno por uno del montículo
    for (int i = size - 1; i > 0; --i) {
        // Intercambiar la raíz (máximo elemento) con el último elemento
        swap(arr[0], arr[i]);

        // Llamar a la función heapify en el montículo reducido
        heapify(arr, i, 0);
    }

    // Imprimir el array ordenado
    for (int i = 0; i < size; i++) {
        //std::cout << " " << arr[i];
    }
    std::cout << "\n";
}

void HeapSort::buildHeap(int arr[], int size) {
    // Construir un montículo (heap)
    for (int i = size / 2 - 1; i >= 0; --i) {
        heapify(arr, size, i);
    }
}

void HeapSort::heapify(int arr[], int size, int rootIndex) {
    int largest = rootIndex; // Inicializar el más grande como la raíz
    int leftChild = 2 * rootIndex + 1; // Índice del hijo izquierdo
    int rightChild = 2 * rootIndex + 2; // Índice del hijo derecho

    // Si el hijo izquierdo es más grande que la raíz
    if (leftChild < size && arr[leftChild] > arr[largest]) {
        largest = leftChild;
    }

    // Si el hijo derecho es más grande que el más grande hasta ahora
    if (rightChild < size && arr[rightChild] > arr[largest]) {
        largest = rightChild;
    }

    // Si el más grande no es la raíz
    if (largest != rootIndex) {
        swap(arr[rootIndex], arr[largest]);

        // Recursivamente heapify el subárbol afectado
        heapify(arr, size, largest);
    }
}

void HeapSort::swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
