#include<iostream>
#include<string>
 
using namespace std;

bool check(string s, int l){
    for(int i=0;i<l;i++){
        if(s[i] != s[l-1-i])
            return false;
    }
    return true;
}

int main(){
    string s;
    cin>>s;
    int l=s.length();
    cout<<boolalpha<<check(s,l);
    return 0;
}