#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n1, n2;

    do
    {
        printf("numero 1:");
        scanf("%d", &n1);
        if(n1==0)
            break;
        
        printf("numero 2:");
        if(n2==0)
            break;

        scanf("%d", &n2);
        if (n1 > n2)
        {
            printf("%lf", (n1 / n2));
        }
        else if (n2 > n1)
        {
            printf("%lf", (n2 / n1));
        }
        else
        {
            printf("1");
        }
        printf("\n");

    } while (1>0);
}
