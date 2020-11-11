#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int contador = 0;
    int letras[27];

    // Llenar arreglo de letras
    for(int i=0; i<s.length(); i++){
      letras[s[i]-'a']++;
    }

    for (int i=0; i<s.length(); i++){
      if(letras[s[i]-'a'] %2!=0){
        contador++;
      }
    }

    if(contador<=1 or contador%2!=0){
      cout << "First";
    }else{
      cout << "Second";
    }

    return 0;
}