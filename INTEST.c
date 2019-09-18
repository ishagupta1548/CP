#include <stdio.h>
int main()
{
    int n, k, num,count;
    scanf("%d %d", &n, &k);
    while (n--)
    {
        scanf("%d", &num);
        if (num % k == 0)
        {
            count++;
        }
    }

    printf("%d",count);
    return 0;
}