#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    string palabra; 
    while(t--){
        cin>>palabra;
        if(palabra.size()>10){
            cout<<palabra[0]<<(palabra.size() -2)<<palabra[palabra.size()-1]<<endl;
        }else{
            cout<<palabra<<endl;
        }    
    }
    return 0;
}