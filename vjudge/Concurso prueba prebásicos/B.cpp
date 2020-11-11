#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int>datos(6);
  int traje2,traje1;
  for(auto &x:datos) cin>>x;
  
  if(datos[5]>datos[4]){
    traje2=min(datos[1],min(datos[2],datos[3]));
    datos[3]-=traje2;
    traje2*=datos[5];
    traje1=min(datos[0],datos[3]);
    traje1*=datos[4];
    cout<<traje1+traje2;
  }else{
    traje1=min(datos[0],datos[3]);
    datos[3]-=traje1;
    traje1*=datos[4];
    traje2=min(datos[1],min(datos[2],datos[3]));
    traje2*=datos[5];
    cout<<traje1+traje2;
  }
  return 0;
}