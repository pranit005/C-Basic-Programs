// finding the greatest number among three number.
#include <stdio.h>
int main()
{
    int a, b, c, g, s;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    g = c;
    if (a>b)
    {
        if (a>c)
        {
            g = a;
        }
    }
    if (b>a)
    {
        if (b>c)
        {
            g = b;
        }
    }
    s = c;
    if (a<b)
    {
        if (a<c)
        {
            s = a;
        }
    }
    if (b<a)
    {
        if (b<c)
        {
            s = b;
        }
    }
    printf("The biggest number is : %d \nThe smallest number is %d", g, s);
    return 0;
}