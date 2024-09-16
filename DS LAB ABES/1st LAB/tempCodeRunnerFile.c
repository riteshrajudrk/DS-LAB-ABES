            for(int i = n;i>=(pos);i--){
            arr[i] = arr[i-1];

    }
    arr[pos-1]=new_elem;
        for(int i = 0;i<=n;i++){
        printf("%d",arr[i]);
    }