// Program to insert the given elements into an array.

#include<stdio.h>
int main(){
    int arr[100],n,new_elem,pos;
    printf("Enter the number of element :");
    scanf("%d",&n);
    printf("Enter the elements of the array :");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to insert : ");
    scanf("%d",&new_elem);
    printf("Enter the pos where element is to be inserted : ");
    scanf("%d",&pos);

        for(int i = n;i>=(pos);i--){
            arr[i] = arr[i-1];

    }
    arr[pos-1]=new_elem;
        for(int i = 0;i<=n;i++){
        printf("%d",arr[i]);
    }
}