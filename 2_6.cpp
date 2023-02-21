#include<bits/stdc++.h>

using namespace std;

string word[27]={"one","two","three","four","five","six","seven","eight","nine",
                "ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen",
                "twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
string convert(long n){
    if(n<0)
        return "negative" + convert(-n);
    if(n<=20)
        return word[n-1];
    if(n<100){
        if(n%10 == 0)
            return word[(n/10)+17];
        else 
            return word[(n/10)+17] + " " + word[(n%10)-1];
    }
    if(n<1000){
        if(n%100 == 0)
            return word[(n/100)-1] + " hundered";
        else 
            return word[(n/100)-1] + " hundered " +"and "+ convert(n%100);
    }
    if(n<1000000){
        if(n%1000 == 0)
            return word[(n/1000)-1] + " thousand";
        else 
            return convert((n-n%1000)/1000) + " thousand " +"and "+ convert(n%1000);
    }
    if(n<1000000000){
        if(n%1000000 == 0)
            return word[(n/1000000)-1] + " milion";
        else 
            return convert((n/1000000)) + " milion " +"and "+ convert(n%1000000);
    }
    return "invalid number";
}

int main(){
    long n;
    cin>>n;
    cout<<convert(n);
    return 0;
}