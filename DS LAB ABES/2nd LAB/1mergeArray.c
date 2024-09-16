// Program for merging two sorted arrays

#include<stdio.h>
int main(){
    int arr1[100],n,m,arr2[100],arr3[100];
    //input of first array
    printf("Enter the number of element of arr1 :");
    scanf("%d",&m);
    printf("Enter the elements of the array1 :");
    for(int i = 0;i<m;i++){
        scanf("%d",&arr1[i]);
    }
//input of 2nd array
    printf("Enter the number of element of arr2 :");
    scanf("%d",&n);
    printf("Enter the elements of the array2 :");
        for(int i = 0;i<n;i++){
        scanf("%d",&arr2[i]);
    }


int i=0,j=0,k=0;
while(i<m && j<n){
    if(arr1[i]<arr2[j]){
        arr3[k] = arr1[i];
        k++;
        i++;
    }else{
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

while(i<m){
    arr3[k] = arr1[i];
    i++;
    k++;
}

while(j<n){
    arr3[k] = arr2[j];
    j++;
    k++;
}


// printing the element
        for(int i=0;i<m+n;i++){
        printf("%d",arr3[i]);
        printf("\n");
    }
    
}