// program for finding the factor of given number.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("The factors are: \n");
    for (int i = num; i>0; i--)
    {
        if (num%i == 0)
        {
            printf("%d  ", i);
        }
    }
    return 0;
}