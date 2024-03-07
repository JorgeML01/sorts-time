#include "MergeSort.hpp"
#include <iostream>

MergeSort::MergeSort() {
}

void MergeSort::sort(int arr[], int size) {
    mergeSort(arr, 0, size - 1);

    // Imprimir el array ordenado
    for (int i = 0; i < size; i++) {
        //std::cout << " " << arr[i];
    }
    std::cout << "\n";
}

void MergeSort::mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Encuentra el punto medio
        int middle = left + (right - left) / 2;

        // Ordena la primera mitad y la segunda mitad
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        // Combina las mitades ordenadas
        merge(arr, left, middle, right);
    }
}

void MergeSort::merge(int arr[], int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Crear arrays temporales
    int leftArray[n1];
    int rightArray[n2];

    // Copiar datos a los arrays temporales leftArray[] y rightArray[]
    for (int i = 0; i < n1; i++) {
        leftArray[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        rightArray[j] = arr[middle + 1 + j];
    }

    // Combinar los arrays temporales de nuevo en arr[left..right]
    int i = 0; // Índice inicial del primer subarray
    int j = 0; // Índice inicial del segundo subarray
    int k = left; // Índice inicial del array combinado

    while (i < n1 && j < n2) {
        if (leftArray[i] <= rightArray[j]) {
            arr[k] = leftArray[i];
            i++;
        } else {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    // Copiar los elementos restantes de leftArray[], si los hay
    while (i < n1) {
        arr[k] = leftArray[i];
        i++;
        k++;
    }

    // Copiar los elementos restantes de rightArray[], si los hay
    while (j < n2) {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}
