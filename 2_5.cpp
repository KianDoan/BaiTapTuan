#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<0)
        cout<<"negative ";
    n=-n;
    int a[9];
    int l=0;
    string s[26] ={ "one","two","three","four","five","six","seven","eight","night","ten","eleven","twelve",
                    "thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty",
                    "thirty","fourty","sixty","seventy","eighty","ninety"};
    if(n==0)
        cout<<"zero";
    else{
        while(n>0){
            a[l]=n%10;
            n=(n-a[l])/10;
            l++;
        }
    }
}