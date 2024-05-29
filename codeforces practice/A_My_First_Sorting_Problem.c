#include<stdio.h>

int main() {
    int x,a,b;
    scanf("%d", &x);

    for(int i=0; i<x; i++) {
        scanf("%d %d", &a,&b);
        if(a>b) {printf("%d %d\n", b,a);}
        else {printf("%d %d\n", a,b);}
    }

    return 0;
}