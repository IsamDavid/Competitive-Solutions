//IsamDavid17
//http://codeforces.com/problemset/problem/469/A
//Greedy / implementation
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,aux=0,p=0,q=0; cin>>n;
  int bucket[n+1]={};
  bool flag=1;
  cin>>p;
  for(int i=1;i<=p;++i){
    cin>>aux;
    bucket[aux]+=1;
  }
  cin>>q;
  for(int i=1;i<=q;++i){
    cin>>aux;
    bucket[aux]+=1;
  }
  for(int i=1;i<=n;++i){
    if(bucket[i]==0){
      flag=0;
      break;
    }  
  }
  if(flag) cout<<"I become the guy.";
  else cout<<"Oh, my keyboard!";
}