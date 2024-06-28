#include<stdio.h>

int main() {
    char array[8];
    scanf("%c%c%c%c%c%c%c%c", &array[0],&array[1],&array[2],&array[3],&array[4],&array[5],&array[6],&array[7]);
    printf("%c %c", array[0], array[1]);
    return 0;
}