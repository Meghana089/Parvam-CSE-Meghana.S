#include<stdio.h>
#include<math.h>
int isAutomorphic(int n,int sq){
    while(n!=0){ // 76=5776,11=121,76-5776
        if(n%10!=sq%10){
            return 0;
        }
        n=n/10;
        sq=sq/10;
    }
    return 1;
}
int main(){
    int n;
    printf("Enter the value");
    scanf("%d",&n);
    int sq=n*n;
    printf("%d ",isAutomorphic(n ,sq));
}