#ifndef SELECTIONSORT_HPP
#define SELECTIONSORT_HPP

class SelectionSort {
public:
    SelectionSort();

    // Función para realizar el Selection Sort
    void sort(int arr[], int size);

private:
    // Función auxiliar para encontrar el índice del mínimo elemento en un subarray
    int findMinIndex(int arr[], int start, int end);

    // Función auxiliar para intercambiar elementos
    void swap(int& a, int& b);
};

#endif
