#include <stdio.h>
int main()
{
    int x;
    float y, balance;

    scanf("%d", &x);
    scanf("%f", &y);
    if (y >= (x+0.50))
    {
        if (x % 5 == 0)
        {
            balance = y - x;
            balance = balance - 0.50;
            printf("%.2f", balance);
        }
        else
        {
            printf("%.2f", y);
        }
    }
    else
    {
        printf("%.2f", y);
    }
}