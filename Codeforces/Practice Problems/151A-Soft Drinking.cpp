#include<bits/stdc++.h>
using namespace std;

int main(){

  int n,k,l,c,d,p,nl,np,res; cin>>n>>k>>l>>c>>d>>p>>nl>>np;
  
  int a=(k*l)/nl, b=c*d, e= p/np;

  if(a<=b && a<=e) {
    cout<< a/n;
  }else if(b<=a && b<=e) {
    cout<< b/n;
  }else{
    cout<< e/n;
  }    
  return 0;
}