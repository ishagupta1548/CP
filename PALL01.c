#include <stdio.h>
int reverse(int num);
int main()
{
    int t, num, temp, y;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &num);
        int rnum = reverse(num);
        if (num == rnum)
        {
            printf("wins\n");
        }
        else
        {
            printf("losses\n");
        }
    }
}   

int reverse(int num)
{
    int temp,rnum=0;
    while (num != 0)
    {
        temp=num%10;
        num=num/10;
        rnum=rnum*10 + temp;
    }

    return rnum;
}