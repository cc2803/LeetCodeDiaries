/*
Problem statement:
Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Number Triangle.

Example:
Input: ‘N’ = 3

Output: 

1
2 3
4 5 6

*/

void nNumberTriangle(int n) {
    
    int count=1;
    int i,j;

    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}