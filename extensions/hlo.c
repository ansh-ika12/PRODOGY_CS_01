#include<stdio.h>
int main()
{
    int num, rev=0, rem, ori;
    printf("enter a number:");
    scanf("%d", &num);
    ori=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10; 
       }
       if(ori==rev)
       printf("%d is a palindrome number", ori);
       else
       printf("%d is not a palindrome number", ori);
return 0;

}