#include<stdio.h>
int main(){
    
    char name[50];
    int count = 0;
    printf("Please Enter Name:");
    scanf("%s",&name);

    for(int i=0; name[i] != '\0'; i++)
        count++;
    if(count%2 == 0)
    printf("your name has even characters");
    else
    printf("your name has  odd characters");
    
    return 0;
}
            
        
    
