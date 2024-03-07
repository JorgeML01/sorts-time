#ifndef MERGESORT_HPP
#define MERGESORT_HPP

class MergeSort {
public:
    MergeSort();

    // Función para realizar el Merge Sort
    void sort(int arr[], int size);

private:
    // Función auxiliar para dividir el array en mitades
    void mergeSort(int arr[], int left, int right);

    // Función auxiliar para combinar dos mitades ordenadas
    void merge(int arr[], int left, int middle, int right);
};

#endif
