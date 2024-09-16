// Program for Missing number in an array

#include<stdio.h>
int main(){
    int arr[100],n,sum=0;
    printf("Enter the number of element :");
    scanf("%d",&n);
    printf("Enter the elements of the array :");
    for(int i = 0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    int nat_sum = (n*(n+1))/2;
    for(int i = 0;i<n-1;i++){
        sum+=arr[i];
    }
    printf("Missing element is: %d",nat_sum-sum);


}