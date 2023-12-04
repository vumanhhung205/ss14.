#include <stdio.h>
void displayArray(int *arr, int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void bubbleSort(int *arr, int size, int order){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(order * arr[j] > order * arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){
    int size;
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &size);
    int arr[size];
    printf("Nhap gia tri cho mang:\n");
    for(int i = 0; i < size; i++){
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int order;
    printf("Chon thu tu sap xep (1: tang dan, -1: giam dan): ");
    scanf("%d", &order);
    bubbleSort(arr, size, order);
    printf("Mang sau khi sap xep: ");
    displayArray(arr, size);
    return 0;
}
