#include<bits/stdc++.h>
using namespace std;

int main(){
    string frase; cin>>frase;

    for(int i=0;i<frase.size();++i){
        if(frase[i]=='O' || frase[i]=='o'){
            frase[i]='0';
        }else if(frase[i]=='I'|| frase[i]=='i'){
            frase[i]='1';
        }else if(frase[i]=='Z' || frase[i]=='z'){
            frase[i]='2';
        }else if(frase[i]=='E' || frase[i]=='e'){
            frase[i]='3';
        }else if(frase[i]=='A'|| frase[i]=='a'){
            frase[i]='4';
        }else if(frase[i]=='S'|| frase[i]=='s'){
            frase[i]='5';
        }else if(frase[i]=='G'|| frase[i]=='g'){
            frase[i]='6';
        }else if(frase[i]=='T'|| frase[i]=='t'){
            frase[i]='7';
        }else if(frase[i]=='B'|| frase[i]=='b'){
            frase[i]='8';
        }
    }
    cout<<frase;
    return 0;
}