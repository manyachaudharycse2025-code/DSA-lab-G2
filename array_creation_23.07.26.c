#include<stdio.h>
int main(){
    int a[100],n,i;
    printf("enter no of element in array");
    scanf("%d",&n);
    printf("enter array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Element of an array are");
    for(i=0;i<n;i++){
    printf("%d ",a[i]);
    }
    return 0;
}