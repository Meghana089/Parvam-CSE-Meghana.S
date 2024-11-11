#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp=arr[n-1];
    for(int i=temp;i<n;i++){
        if(i=i-1){
            
            scanf("%d",&arr[i]);
        }
        else{

            printf("%d",arr[i]);
        }
    }

}