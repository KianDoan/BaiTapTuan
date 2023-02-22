#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j] == 0){
                cout<<a[i]<<" "<<a[j];
                break;
            }
        }
    }
    return 0;
}