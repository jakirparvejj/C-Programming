// Arithmetic operator

#include <stdio.h>
int main ()
{
    int num1,num2,result;
    float avg;

    printf("Enter two Number: ");
    scanf("%d %d",&num1,&num2);

    result= num1+num2;
    printf("The sum is: %d\n",result);       //two number add

    result= num1-num2;
    printf("The sub is: %d\n",result);       //two number Sub

    result= num1*num2;
    printf("The mul is: %d\n",result);       //two number Multi

    result= num1/num2;
    printf("The div is: %d\n",result);       //two number div

    result= num1%num2;
    printf("The modulas is: %d\n",result);       //two number Modu

    avg= (float)(num1 + num2)/2;                 //Type casting
    printf("The Average is: %.2f\n",avg);      // two number average


    return  0;
}
