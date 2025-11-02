#include <stdio.h>


void heapify(int arr[], int n, int i) {
    int largest = i;          
    int left = 2 * i + 1;     
    int right = 2 * i + 2;    

    
    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

  
    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        
        heapify(arr, n, largest);
    }
}


void heapSort(int arr[], int n) {
    
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

   
    for (int i = n - 1; i > 0; i--) {
       
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

       
        heapify(arr, i, 0);
    }
}


void mostrarArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main() {
    int data[] = {20, 3, 15, 7, 9, 1, 11};
    int n = sizeof(data) / sizeof(data[0]);

    printf("Arreglo original:\n");
    mostrarArray(data, n);

    heapSort(data, n);

    printf("\nArreglo ordenado con Heap Sort:\n");
    mostrarArray(data, n);

    return 0;
}