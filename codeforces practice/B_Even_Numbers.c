#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    if(N<=1)
    {
        printf("%d", -1);
    }
    else if(N>1)
    {
        for(int i=2; i<=N; i++)
        {
            if(i%2==0)
            {
                printf("%d\n", i);
            }
        }
    }
    return 0;
}