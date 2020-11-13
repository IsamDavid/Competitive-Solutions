#include<bits/stdc++.h>
using namespace std;




int main(){
  int t,petya,dept;  cin>>t;

  while(t--){
    int i=1;
    int act=2;
    cin>>petya>>dept;

    while(true){
      if(petya>act){
        act+=dept;
        ++i;
      }else if(petya<=act){
        cout<<i<<endl;
        break;
      }
    }

  }


  return 0;
}