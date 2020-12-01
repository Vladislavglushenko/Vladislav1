#include <stdio.h>

int main(void)
{
    int numbers[5]= {10, 12, 13, 54, 43};
    for(int i = 0; i < 5; i++)
    {   
        printf("numbers[%d] = %d \n",i,numbers[i]);
    }
    return 0;
}
