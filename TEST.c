#include <stdio.h>

int main(void)
{
    int input;
    while (1)
    {
        scanf("%d", &input);
        if (input == 42)
        {
            break;
        }
        else
        {
            printf("%d\n",input);
        }
    }
    return 0;
}
