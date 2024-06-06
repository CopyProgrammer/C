#include<stdio.h>

int main() {
    char ch= '*';
    int a;
    scanf("%d", &a);
    for(int i = 1; i<=a; i++) {
        for(int j=1; j<=i; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}