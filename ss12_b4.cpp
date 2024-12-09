#include <stdio.h>
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap %d phan tu cua mang:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d]= ", i);
        scanf("%d", &arr[i]);
    }
    int max = findMax(arr, n);
    printf("So lon nhat la: %d", max);

    return 0;
}

