void insertionSort(int a[], int n){
    int j, x;
    for(int i=1;i<n;i++){
         x=a[i];
         j=i;
        while(j>0 && x<a[j-1]){
            a[j]=a[j-1];
            j--;
        }
        a[j]=x;
    }
}
