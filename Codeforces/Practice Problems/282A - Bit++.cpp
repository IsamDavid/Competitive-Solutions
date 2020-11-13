#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n=0,resultado=0,cont=0;
  cin>>n;
  string var={};
  while(cont<n){
    cin>>var;
    if(var=="++X" or var == "X++"){ 
      resultado=resultado+1;
      cont=cont+1;
      //  cout<<"Entro al primer if"<<cont<<endl;
    }else if(var == "--X" or var == "X--"){
       resultado=resultado-1;
       cont=cont+1;
        // cout<<"Entro al segundo if"<<cont<<endl;
    }
  }
    cout<<resultado;
  return 0;
}