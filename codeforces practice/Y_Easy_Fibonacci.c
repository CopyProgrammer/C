#include<stdio.h>

int main() {
    int x,a=0,b=1,c=1;
    scanf("%d", &x);

    printf("%d ", a);

    for(int i=0; i<(x-1); i++) {
        printf("%d ", c);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}