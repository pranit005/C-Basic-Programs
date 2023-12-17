// swapping of two integer number without making temprory variable.
#include <stdio.h>
int main()
{
    int a = 5, b = 10;
    printf("The value of a is %d and value of b is %d before swaping\n", a, b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The value of a is %d and value of b is %d after swaping", a, b);
    return 0;
}