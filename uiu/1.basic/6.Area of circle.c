#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    float pi = 3.14159;
    float area = pi * pow(n,2);
    printf("%.5f", area);
    return 0;
}
