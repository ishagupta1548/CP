#include <stdio.h>

int main()
{
    int t, d, n, temp;
    scanf("%d \n", &t);
    while (t--)
    {
        scanf("%d %d", &d, &n);
        while (d--)
        {
            temp = ((n) * (n + 1)) / 2;
            n = temp;
        }

        printf("%d\n", n);
    }
}