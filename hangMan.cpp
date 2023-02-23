#include<iostream>
#include<string>

using namespace std;

string init(){
    return "book";
}

char readAGuess(){
    cout<<"Enter your guess: ";
    char c;
    cin>>c;
    return c;
}

bool isContain(string &word ,char &c ){
    return word.find(c) != string::npos;
}

void update(string word,char &c,string &guessWord){
    int index=word.find(c);
    while(index != string::npos){
        guessWord[index]=c;
        word[index]=' ';
        index=word.find(c);
    }
}

bool gameOver(int badGuess, string word,string guessWord){
    if(badGuess>=7)
        return true;
    int l=word.length();
    for(int i=0;i<l;i++){
        if(word[i] != guessWord[i])
            return true;
    }
    return false;
}

int main(){
    string word=init();
    string guessWord=string(word.length(),'_');
    int badGuess=0;
    while(gameOver(badGuess,word,guessWord)){
        char c=readAGuess();
        if( isContain(word,c)){
            update(word , c , guessWord );
        }else
            badGuess++;
        cout<<guessWord<<endl;
    }
    if(badGuess==7)
        cout<<"You Lose!\n";
    else
        cout<<"You Win!\n";
    return 0;
}