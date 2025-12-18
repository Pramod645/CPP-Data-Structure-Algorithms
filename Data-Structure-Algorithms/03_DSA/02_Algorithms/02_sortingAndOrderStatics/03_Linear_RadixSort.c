#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>


int getMax(int array[], int n) {
    int max = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}
// Using counting sort to sort the elements based on significant places
void countingSort(int array[], int n, int place) {
    int output[n];
    int count[10] = {0};
    // Calculate count of elements
    for (int i = 0; i < n; i++) {
        int index = (array[i] / place) % 10;
        count[index]++;
    }
    // Calculate cumulative count
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
    // Place the elements in sorted order
    for (int i = n - 1; i >= 0; i--) {
        int index = (array[i] / place) % 10;
        output[count[index] - 1] = array[i];
        count[index]--;
    }
    // Copy the sorted elements into original array
    for (int i = 0; i < n; i++) {
        array[i] = output[i];
    }
}

void radixSort(int array[], int n) {
    // Get maximum element
    int maxElement = getMax(array, n);
    // Apply counting sort to sort elements based on place value
    for (int digit = 1; maxElement / digit > 0; digit *= 10) {
        countingSort(array, n, digit);
    }
}
int main() {
    int arr[] = {234, 256, 0, 1, 6, 7, 89};
    int n = sizeof(arr) / sizeof(arr[0]);

    radixSort(arr, n);

    printf("Radix sort:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

