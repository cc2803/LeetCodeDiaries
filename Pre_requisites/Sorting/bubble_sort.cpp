void bubbleSort(vector<int>& arr){
    
    int i=0,j=0,n=arr.size();
    
    for(i=0;i<n;i++){
        
        for(j=0;j<n-i-1;j++){
             if (arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    }