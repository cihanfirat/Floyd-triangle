#include <stdio.h>
#include <stdlib.h>

void floyd(int n)
{
    int i=1;
    int j;
    int a=1;
    while (i<=n)
    {
        j=1;
        while(j<=i)
        {
            printf("%3d",a);
            a++;
            j++;
        }
        printf("\n");
        i++;
    }
}

int main()
{
    int line;
    printf("Choose the Number of the Lines:");
    scanf("%d",&line);
    floyd(line);
    return 0;
}
