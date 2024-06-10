#include <stdio.h>

int main() {
    long long n,k,a;
    scanf("%lld %lld %lld", &n,&k,&a);
    if ((n*k) % a ==0) {
        ((n*k)/a > 2147483647) ? printf("long long") : printf("int");
    } else {
        printf("double");
    } return 0;
}