#include <stdio.h>
main()
{
    int input;
    printf("每輸入一個數字，程式會再印出相同的數字。\n");
    while(1)
    {
        scanf("%d",&input);
        printf("%d ", input,"\n");
    }
}

