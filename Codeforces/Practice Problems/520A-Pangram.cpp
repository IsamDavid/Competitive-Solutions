//IsamDavid
//Strings
//http://codeforces.com/problemset/problem/520/A

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,pos; cin>>n;
  bool flag=true;
  string word; cin>>word;
  int bucket[26]={};
  if(n>=26){
    for(int i=0;i<n;++i){
      word[i]=tolower(word[i]);
      pos=word[i]-97;
      bucket[pos]+=1;
    }
    for(int i=0;i<26;++i){
      if(bucket[i]==0){
        flag=false;
        break;
      }
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
  }else{
    cout<<"NO";
  }
  return 0;
}