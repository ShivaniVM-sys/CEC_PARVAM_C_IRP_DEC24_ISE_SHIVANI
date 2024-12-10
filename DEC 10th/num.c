#include<stdio.h>
int main(){

    int num,result;
    printf("enter the number");
    scanf("%d",&num);
    if(num>100 && num<500)
    result = num*5;
    else if(num>500)
    result = num/2;
    else if(num<100)
    result = num%10;
    else 
    printf("Invalid number");
    result = result*result;
    printf("%d",result);
    return 0;
}



    
