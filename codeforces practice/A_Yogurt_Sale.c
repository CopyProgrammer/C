#include<stdio.h>

int zero();
int not_zero();

int main() {
    int t,n,a,b;
    scanf("%d", &t);

    while(t--) {
        scanf("%d %d %d", &n,&a,&b);
        int z = n%2;
        if(z==0) {
            printf("%d\n",zero(n,a,b));
        } else {
            printf("%d\n",not_zero(n,a,b));
        }
    }

    return 0;
}

int zero(int n, int a, int b) {
    int x,y;
    if(a*2 <= b) {
        y = n*a;
    } else {
        x = n/2;
        y = x*b;
    }
    return y;
}

int not_zero(int n, int a, int b) {
    int y;
    if(a*2 <= b) {
        y = n*a;
    } else {
        n = n-1;
        n = n/2;
        y = (n*b)+a;
    }
    return y;
}