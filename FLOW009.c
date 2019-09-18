#include <stdio.h>
void main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int quant, price;
        double disc;

        scanf("%d %d", &quant, &price);

        if (quant > 1000)
        {
            disc = quant * price * 0.10;

            printf("%lf\n", (double)(quant * price) - disc);
        }
        else
        {
            printf("%lf\n", (double)(quant * price));
        }
    }
}