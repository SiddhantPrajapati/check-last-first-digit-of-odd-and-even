//WAP TO CHECK IF FIRST DIGIT AND LAST DIGIT OF NUMBER IS EVEN OR ODD.
#include<stdio.h>
void main()
{
    int num,i,rem;
    printf("enter the number =");
    scanf("%d",&num);
    rem=num%10;
    if(rem%2==0)
        printf("last digit is even");
    else
        printf("last digit is odd");
   do
   {
       num%10;
       num/10;
   }
   while(num!=0);

    printf("first letter of number is %d",num);


    if(num%2==0)
        printf("first digit is even");
    else
        printf("first digit is odd");
}
