#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,suma=0,aux,uno=0,dos=0,tres=0,cuatro=0; cin>>n;
  for(int i=0;i<n;++i){
    cin>>aux;
    if(aux==1) uno++;
    else if(aux==2) dos++;
    else if(aux==3) tres++;
    else cuatro++;
  }
  suma=cuatro;
  //Grupos de 3
  if(tres>=uno){
    suma+=tres;
    uno-=tres;
  }else{
    suma+=tres;
    uno-=tres;
  }

  //Grupos de 2
  if(dos%2==0){
    suma+=dos/2;
    if(uno>0){
      if(uno%4==0){
        suma+=uno/4;
      }else{
        suma+=(uno/4)+1;
      }
    }
  }else{ //impar grupos 2
    suma+=(dos/2)+1;
    uno-=2;
    if(uno>0){
      if(uno%4==0){
        suma+=uno/4;
      }else{
        suma+=(uno/4)+1;
      }
    }
  }
  cout<<suma;
  return 0;
}