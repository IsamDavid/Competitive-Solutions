#include<bits/stdc++.h>
using namespace std;

int main(){

    
    ios :: sync_with_stdio ( false );
    int n,j; cin>>n;
    char s,res;
    int bucket[26]={};

    for(int i=0; i<n; ++i){
        cin>>s;
        bucket[s-97]++;
    }
    for(int i=0; i<26; ++i){
        if(bucket[i]>0){
            j=bucket[i];
            while(j--){
                res=i+97;
                cout<<res; 
            }
        }
    }
    return 0;
}

    //Leer la cadena   26 letras
    //Guardarlo con su ascii en la posición 
    //Hacer un for que imprima con su lexicografico ascii pero que vaya aumentando también para cada una de las posiciones
    //ejemplo pos 0 -> aaaa   pos 1 ->bb   ... etc


