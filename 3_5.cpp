#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[10][10];
    int val=1;
    int minRow=0,minCol=0,maxRow=m-1,maxCol=n-1;
    while(val <= (m*n)){
        for(int i=minCol;i<=maxCol;i++){
            arr[minRow][i]=val;
            val++;
        }
        minRow++;
        for(int i=minRow;i<=maxRow;i++){
            arr[i][maxCol]=val;
            val++;
        }
        maxCol--;
        for(int i=maxCol;i>=minCol;i--){
            arr[maxRow][i]=val;
            val++;
        }
        maxRow--;
        for(int i=maxRow;i>=minRow;i--){
            arr[i][minCol]=val;
            val++;
        }
        minCol++;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    for(int i=0;i<m;i++)
        delete[] arr[i];
    delete[] arr;
    return 0;
}