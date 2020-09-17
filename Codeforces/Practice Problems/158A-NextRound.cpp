#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n,k,num; cin>>n>>k;
  int cont=0;
  vector<int> scores;
 
  for(int i=0;i<n;++i){
    cin>>num;
    scores.push_back(num);
  }
  for(int i=0;i<n;++i){
    if(scores[i]>=scores[k-1] && scores[i]>0) cont++;
  }
  cout<<cont;
 
  return 0;
}