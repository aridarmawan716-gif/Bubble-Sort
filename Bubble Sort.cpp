#include <iostream>
using namespace std;

// Fungsi untuk menukar dua elemen menggunakan pointer
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fungsi Bubble Sort sesuai logika pada gambar
void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        // n-i-1 digunakan karena elemen terakhir sudah pasti berada di posisi yang benar
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        
        // Jika tidak ada elemen yang ditukar di inner loop, maka array sudah urut
        if (swapped == false)
            break;
    }
}

// Fungsi pendukung untuk mencetak array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Array sebelum diurutkan: \n";
    printArray(data, n);

    bubbleSort(data, n);

    cout << "\nArray setelah diurutkan (Bubble Sort): \n";
    printArray(data, n);

    return 0;
}
