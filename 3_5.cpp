#include<iostream>

using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int** arr=new int*[m];
    for(int i=0;i<m;i++)
        arr[i]=new int[n];
    int val=0;
    while(val<=m*n){
        int i=0, j=0,minRow=0,maxRow=m-1,minCol=0,maxCol=n-1;
        val++;
        arr[i][j]=val;
        if(i==minRow && j!=maxCol)
            j++;
        else if(j==maxCol && i!=maxRow)
            i++;
        else if(i==maxRow && j!=minCol)
            j--;
        else if(j==minCol && i!=minRow) 
            i--;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}