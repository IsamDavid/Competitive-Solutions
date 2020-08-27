#include <bits/stdc++.h>
using namespace std;

int main(){
  int t=0, total=1;
  cin >> t;
  string magnets, aux;

  while(t--){
    cin >> aux;
    magnets+=aux;
  }
  
  for(int i=0; i<magnets.size(); ++i){
    if(magnets[i]==magnets[i+1]){
      ++total;
    }
  }
  cout << total;

  return 0;
}