#include <stdio.h>
int main()
{
    int num, zero = 1, final = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = num; i>10; i = i/10)
    {
        zero = zero*10;
    }
    for (int i = num; i>0; i = i/10)
    {
        final = final+(i%10)*zero;
        zero = zero/10;
    }
    if (num == final)
    {
        printf("The number is palindromic");
    }
    else
    {
        printf("The number is not palindromic");
    }
    return 0;
}