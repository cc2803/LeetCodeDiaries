/*
Algo:

-> Run a for loop for the entire array, selecting each element index per iteration as minimum index "minindex".
-> Run an inner for loop starting from i+1th index to end, look for a value smaller than arr[minindex].
-> Now new minindex = the index obtained in step 2, else it is same as i
-> Swap values present at minindex and i if minindex!=i

*/

void selectionSort(vector<int> &arr) {
        
        int i,j,n=arr.size();
        int temp=0;
        for(i=0;i<n-1;i++){
            int minindex=i;
            for(j=i+1;j<n;j++){
                if(arr[j]<arr[minindex]){
                    minindex=j;
                } 
            }
            if(minindex!=i) swap(arr[minindex],arr[i]);
        }

    }