#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void printMenu(){
    printf("            MENU            \n");
    printf("1. Nhap vao chuoi\n");
    printf("2. In ra chuoi\n");
    printf("3. Sao chep chuoi vao chuoi khac\n");
    printf("4. Nhap vao chuoi khac, them chuoi do vao chuoi ban dau\n");
    printf("5. nhap vao chuoi khac, so sanh chuoi do voi chuoi ban dau\n");
    printf("6. Dao nguoc mang\n");
    printf("7. Thoat\n");
}
void copyArray(char *source, char *destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + i);
    }
}
int main(){
    int size = 100;
    char input[size];
    char input1[size];
    char input2[size];
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
                printf("Nhap vao chuoi thu 2: ");
                scanf("%s", input1);
                strcat(input, input1);
                printf("Chuoi sau khi them: %s\n", input);
                break;
            case 5:
                printf("Nhap vao chuoi thu 3: ");
                scanf("%s", input2);
                char *ptr1, *ptr2;
    			ptr1 = input1;
    			ptr2 = input2;
    			int result = strcmp(input, input2);
    			if(result == 0){
        			printf("Hai chuoi giong nhau.\n");
    			}else{
        			printf("Hai chuoi khac nhau.\n");
    			}
        		break;
            case 6:
                printf("Chuoi dao nguoc: ");
                for(char *ptr = input + strlen(input) - 1; ptr >= input; --ptr){
                	printf("%c", *ptr);
                }
                printf("\n");
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

