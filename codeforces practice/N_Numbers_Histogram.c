#include<stdio.h>

int main() {
    char ch;
    int x;
    scanf("%c", &ch);
    scanf("%d", &x);

    int array[x];
    for(int i=0; i<x; i++) {
        scanf("%d", &array[i]);
    }
    for(int i=0; i<x; i++) {
        for(int j=0; j<array[i]; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}