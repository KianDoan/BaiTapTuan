#include<iostream>
#include<random>
#include<ctime>

using namespace std;

int readAGuess(){
    int guess;
    cout<<"Enter a num from 1 to 100: ";
    cin>>guess;
    return guess;
}

int main(){
    srand(time(0));
    int ans=(rand()%101)+1;
    int guess=readAGuess();
    while(true){
        if(guess < ans){
            cout<<"Too Small"<<endl;
            guess=readAGuess();
        }else if(guess > ans){
            cout<<"Too Large"<<endl;
            guess=readAGuess();
        }else{
            cout<<"You Win"<<endl;
            break;
        }
    }
    return 0;
}