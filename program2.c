#include <stdio.h>
int main(void)
{
    for (int i=1000; i < 1000000; i++)
    {   
        for(int j = 1000; j < 1000000; j++)
        {
            printf("%d \t", i * j);
        }
        printf("\n");
    }
    return 0;
}
