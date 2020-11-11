#include<bits/stdc++.h>
using namespace std;

int main(){
  string palabra={}; cin>>palabra;
  
  if(palabra[0]>='a' and palabra[0]<='z'){
  palabra[0]= toupper(palabra[0]);
  } 
  cout<<palabra;
  return 0;
}
