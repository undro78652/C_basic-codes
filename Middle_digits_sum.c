#include <stdio.h>
int main()
{
    int len, num, clone;
    printf("enter the number ");
    scanf("%d", &num);
    len=0;
    clone=num;
    while (clone>0)
    {
        clone=clone/10;
        len++;
    }
    int digits[len];
    for (int i = 1; i <= len; i++)
    {
        digits[len-i]=num%10;
        num=num/10;
    }
    printf("entered num was:- ");
    for (int i = 0; i < len; i++)
    {
        printf("%d",digits[i]);
    }
    printf("\nsum of middle digits:- %d",digits[(len-1)/2]+digits[((len-1)/2)+1]);
}
