#include<bits/stdc++.h>

using namespace std;

void sort(int* &a, int &n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]>a[j])
                swap(a[i],a[j]);
        }
    }
}

bool check(int* &a,int &n){
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1])
            return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,n);
    cout<<boolalpha<<check(a,n);
    delete []a;
    return 0;
}