#include<iostream>

#include<bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    cin>>n>>m;
    char** arr =new char*[n];
    for(int i=0;i<n;i++){
        arr[i]=new char[m];
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == '.'){
                int count=0;
                if(i>0 && j>0 && arr[i-1][j-1]=='*')
                    count++;
                if(i>0 && arr[i-1][j]=='*')
                    count++;
                if(i>0 && j<m-1 && arr[i-1][j+1]=='*')
                    count++;
                if(j>0 && arr[i][j-1]=='*')
                    count++;
                if(j>0 && arr[i][j+1]=='*')
                    count++;
                if(i<n-1 && j>0 && arr[i+1][j-1]=='*')
                    count++;
                if(i<n-1 && arr[i-1][j]=='*')
                    count++;
                if(i<n-1 && j<m-1 && arr[i-1][j+1]=='*')
                    count++;
                arr[i][j] = static_cast<char>(count);
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        delete[] arr[i];
    }
    delete []arr;
    return 0;
}