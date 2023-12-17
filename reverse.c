// reversing the user input number.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (int i = num; i>0; i = i/10)
    {
        printf("%d", i%10);
    }
    return 0;
}