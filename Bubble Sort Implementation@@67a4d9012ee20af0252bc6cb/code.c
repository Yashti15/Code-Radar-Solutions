int bubbleSort(int arr2[],int n){
    int arr2[n];
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr2[j]>arr[j+1]){
                int temp=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=temp;
            }
        }
    }
 
}
void printArray(int arr1[],int n){
    int arr1[];
    for(int i=0;i<n;i++){
        printf("%d ",arr1[i]);
    }
    return;
}