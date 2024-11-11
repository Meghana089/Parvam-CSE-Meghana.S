#include<stdio.h>
#include<LIMITS.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min1=INT_MIN;
    int min2=INT_MIN;
    for(int i=0;i<n;i++){
    if(arr[i]<min1){
        min2=min1;
        min1=arr[i];
    }else if(arr[i]>min2){
        min2=arr[i];
    }
    }
    printf("%d",min2);
    
}
