// Program to find which element is repeated in the array and which is not

#include<stdio.h>
int main(){
    int arr[100],n,rev_arr[100];
    printf("Enter the number of element :");
    scanf("%d",&n);
    printf("Enter the elements of the array :");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                if(arr[i] == arr[j]){
                    printf("Repeated element is : %d\n",arr[i]);
                }
    }
    }

    
}