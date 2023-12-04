#include <stdio.h>
int main(){
    int a, b;
    printf("Nhap gia tri cho bien a: ");
    scanf("%d", &a);
    printf("Nhap gia tri cho bien b: ");
    scanf("%d", &b);
    printf("\nGia tri truoc khi doi cho:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    int *ptrA, *ptrB, temp;
    ptrA = &a;
    ptrB = &b;
    temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
    printf("\nGia tri sau khi doi cho:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    int diffBefore = a - b;
    int diffAfter = *ptrA - *ptrB;
    printf("\nHieu truoc khi doi cho: %d\n", diffBefore);
    printf("Hieu sau khi doi cho: %d\n", diffAfter);
    return 0;
}
