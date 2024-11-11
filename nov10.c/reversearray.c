#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&arr[n]);
    int rem=0;
for(int i=n-1;i<n;i--){
        if(i!=n){
            int reverse;
            
            int rem=n%10;
            reverse=rem*10+rem;
            n=n/10;
             printf("reverse\n");
            scanf("%d",&arr[i]);
         
            
        }
        else{
            printf("invalid");
        }
    }

}