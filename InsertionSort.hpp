#ifndef INSERTIONSORT_HPP
#define INSERTIONSORT_HPP

class InsertionSort {
public:
    InsertionSort();

    // Función para realizar el Insertion Sort
    void sort(int arr[], int size);

private:
    // Función auxiliar para ordenar un subarray usando Insertion Sort
    void insertionSort(int arr[], int size);
};

#endif
