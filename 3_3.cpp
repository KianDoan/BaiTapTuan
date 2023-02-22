#include<iostream>

using namespace std;

bool check(int x){
    int a[1000];
    int l=0;
    if(a==0)
        return true;
    do{
        a[l]=x%10;
        x=(x-x%10)/10;
        l++;  
    }while(x>0);
    for(int i=0;i<l;i++){
        if(a[i] != a[l-1-i])
            return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int a,b;
    int count=0;
    for(int i=0;i<n;i++){
        count=0;
        cin>>a>>b;
        for(int j=a;j<=b;j++){
            if(check(j))
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}