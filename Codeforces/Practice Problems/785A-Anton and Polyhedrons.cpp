#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,out=0; cin>>n;
  string figure={};
  while(n--){
    cin>>figure;
    if(figure=="Tetrahedron"){
      out+=4;
    }
    if(figure=="Cube"){
      out+=6;
    }
    if(figure=="Octahedron"){
      out+=8;
    }
    if(figure=="Dodecahedron"){
      out+=12;
    }
    if(figure=="Icosahedron"){
      out+=20;
    }
  }
  cout<<out;

  return 0;
}