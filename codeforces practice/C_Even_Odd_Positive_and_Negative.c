#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    int *array;
    array = malloc(N * sizeof(int));
    for(int i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("%d", array);
    // int countP=0, countN=0, countE=0, countO=0;
    // for(int i=0; i<N; i++)
    // {
    //     if(array[i]<0 && array[i]%2==0)
    //     {
    //         countN++;
    //         countE++;
    //     }
    //     else if(array[i]<0 && array[i]%2!=0)
    //     {
    //         countN++;
    //         countO++;
    //     }
    //     else if(array[i]>0 && array[i]%2==0)
    //     {
    //         countP++;
    //         countE++;
    //     }
    //     else if(array[i]>0 && array[i]%2!=0)
    //     {
    //         countP++;
    //         countO++;
    //     }
    // }
    // printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", countE, countO, countP, countN);
    return 0;
}