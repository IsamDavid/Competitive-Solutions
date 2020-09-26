#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
  string word={};
  bool esta=false;
  cin>>word;
  for(int i=0;i<word.size();i++){
    if(word[i]=='H' or word[i]=='Q' or word[i]=='9') {
      esta=true;
      break;
    }
  }
  if(esta){
    cout<<"YES";
  }else{
    cout<<"NO";
  }
  return 0;
}