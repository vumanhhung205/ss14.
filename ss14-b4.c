#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void printMenu(){
    printf("            MENU            \n");
    printf("1. Nhap vao mang\n");
    printf("2. In ra mang\n");
    printf("3. Sao chep mang vao mang khac\n");
    printf("4. Nhap vao mang khac, doi cho 2 mang cho nhau\n");
    printf("5. Dao nguoc mang\n");
    printf("6. Nhap vao 1 ki tu tim kiem ki tu trong mang\n");
    printf("7. Thoat\n");
}
void copyArray(char *source, char *destination, int size){
    for (int i = 0; i < size; i++){
        *(destination + i) = *(source + i);
    }
}
void convertArray(char *ptr_input, char *ptr_input1){
    for(; *ptr_input != '\0' && *ptr_input1 != '\0'; ++ptr_input, ++ptr_input1){
        char temp = *ptr_input;
        *ptr_input = *ptr_input1;
        *ptr_input1 = temp;
    }
}
int binarySearch(char *input, int size, char find){
    int low = 0, high = size - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(*(input + mid) == find){
            return mid;
        }
        if(*(input + mid) < find){
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int size = 100;
    char input[size];
    char input1[size];
    int choice;
    char sourceArray[size];
    do{
        printMenu();
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Nhap chuoi ki tu: ");
                scanf("%s", input);
                break;
            case 2:
                printf("Noi dung chuoi: %s\n", input);
                break;
            case 3:
                copyArray(input, sourceArray, strlen(input));
                printf("Mang da sao chep: %s\n", sourceArray);
                break;
            case 4:
                printf("Nhap vao mang thu 2: ");
                scanf("%s", input1);
                convertArray(input,input1);
                printf("\nGia tri sau khi doi cho:\n");
                printf("mang 1 = %s\n", input1);
                printf("mang 2 = %s\n", input);
                break;
            case 5:
                printf("Chuoi dao nguoc: ");
                for(char *ptr = input + strlen(input) - 1; ptr >= input; --ptr){
                	printf("%c", *ptr);
                }
                printf("\n");
                break;
            case 6:
                printf("Nhap phan tu muon tim kiem: ");
                char findChar;
                scanf(" %c", &findChar);
                int result = binarySearch(input, strlen(input), findChar);
                if(result != -1){
                    printf("Phan tu co gia tri %c co chi so %d trong mang\n", findChar, result);
                } else{
                    printf("Khong tim thay phan tu co gia tri %c trong mang\n", findChar);
                }
                break;
            case 7:
                printf("Thoat\n");
                break;
            default:
                printf("Lua chon khong hop ly\n");
        }
    } while (choice != 7);
    return 0;
}
