#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }

    swap(&arr[i], &arr[high]);
    return i;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

void mostrarArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int data[] = {28, 11, 96, -5, 21, 18, 12, 22};
    int n = sizeof(data) / sizeof(data[0]);

    printf("Arreglo original:\n");
    mostrarArray(data, n);

    quickSort(data, 0, n - 1);

    printf("\nArreglo ordenado con Quicksort:\n");
    mostrarArray(data, n);

    return 0;
}