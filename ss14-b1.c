#include <stdio.h>
int main(){
    int myVariable = 42;
    int* pointerToVariable = &myVariable;
    printf("Cach 1:\n");
    printf("Gia tri cua bien: %d\n", myVariable);
    printf("Dia chi cua bien: %p\n", (void*)&myVariable); 
    printf("\nCach 2:\n");
    printf("Gia tri cua bien (su dung con tro): %d\n", *pointerToVariable);
    printf("Dia chi cua bien (su dung con tro): %p\n", (void*)pointerToVariable);
    return 0;
}
