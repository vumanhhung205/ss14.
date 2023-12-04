#include <stdio.h>
#include <string.h>
int main(){
    char str1[100], str2[100];
    char *ptr1, *ptr2;
    printf("Nhap chuoi thu nhat: ");
    gets(str1);
    printf("Nhap chuoi thu hai: ");
    gets(str2);
    ptr1 = str1;
    int len1 = 0;
    while(*ptr1 != '\0'){
        len1++;
        ptr1++;
    }
    ptr2 = str2;
    int len2 = 0;
    while(*ptr2 != '\0'){
        len2++;
        ptr2++;
    }
    printf("Do dai cua chuoi thu nhat: %d\n", len1);
    printf("Do dai cua chuoi thu hai: %d\n", len2);
    if(len1 > len2){
        printf("Chuoi thu nhat dai hon.\n");
    }else if(len2 > len1){
        printf("Chuoi thu hai dai hon.\n");
    }else{
        printf("Hai chuoi co do dai bang nhau.\n");
    }
    return 0;
}
