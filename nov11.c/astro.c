#include<stdio.h>
#include<string.h>
int main(){
    char name[30];
    int countofchar=0,is_even=0,sumofAscii=0,rem=0,sumofRelAscii=0;
    scanf("%c",&name);
    int n;
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        countofchar++;
    }
    printf("%d",countofchar);
    if(n&1==0){
        printf("even");
    }else{
        printf("odd");
    }
    printf("%d",name);
    //reversing number
    int r;
    while(n!=0){
        int rem=n%10;
        r=r*10+rem;
        n=n/10;
    }
    printf("%d",rem);
    while(n!=0){
        n=n/10;
        sumofRelAscii++;
    }
}
int add(){
    int choice;
    do{
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("lazy");
            case 2:
            printf("good");
            default:
            printf("invalid\n");


        }

    }
    while(choice!=0);
}