#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin>>s;
    if(s[0]>s[1])
        swap(s[0],s[1]);
    if(s[0]==s[1])
        cout<<s<<endl;
    else{
        for(int i=0;i<2;i++){
            cout<<s[0]<<s[0]<<" "<<s[0]<<s[0]<<s[0]<<" "
                <<s[0]<<s[0]<<s[1]<<" "<<s[0]<<s[1]<<" "
                <<s[0]<<s[1]<<s[0]<<" "<<s[0]<<s[1]<<s[1]<<" ";
            swap(s[1],s[0]);
        }
    }
    return 0;
}