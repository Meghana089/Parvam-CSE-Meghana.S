#include<stdio.h>
int main(){
    int size;
    printf("Enter the size\n");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d\n",&arr[i]);
    }for(int i=0;i<size;i++){
         printf("%d\n",arr[i]);
    }
}