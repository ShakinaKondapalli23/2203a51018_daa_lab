#include <stdio.h>

void sortAscending(int arr[], int n) {
    int temp,i,j;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sortDescending(int arr[], int n) {
    int temp,i,j;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n,i;

    printf("Test Case 1: Enter time to reach destination:\n");
    int arr1[4];
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr1[i]);
    }
    sortAscending(arr1, 4);
    printf("Output:\n");
    for (i = 0; i < 4; i++) {
        printf("%d\n", arr1[i]);
    }
    printf("Test Case 2: Enter time to reach destination:\n");
    int arr2[4];
    for (i = 0; i < 4; i++) {
        scanf("%d", &arr2[i]);
    }
    sortDescending(arr2, 4);
    printf("Output:\n");
    for (i = 0; i < 4; i++) {
        printf("%d\n", arr2[i]);
    }

    return 0;
}

