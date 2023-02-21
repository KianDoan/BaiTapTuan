#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=4;i>=0;i--){
        for(int j=-n+1;j<n;j++){
            if(i >= abs(j))
                cout<<"*";
            else 
                cout<<" ";
        }
        cout<<endl;
    }   
}


