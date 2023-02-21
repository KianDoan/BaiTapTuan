#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int cur=INT_MIN;
    do{
        cin>>n;
        if(n != cur){
            cout<<n<<" ";
            cur=n;
        }
    }while(n>0);
}