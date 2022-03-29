#include <stdio.h>
int i;
int main()
{
    printf("請輸入一個整數︰");
    scanf("%d", &i);
    if(i<=2147483647 && i>=-2147483648)
    {
        i%=10;
        printf("這個整數的個位數是%d\n", i);
    }
    else
        printf("error");
}
