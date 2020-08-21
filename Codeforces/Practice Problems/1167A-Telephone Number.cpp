#include<bits/stdc++.h>
using namespace std;

int main(){
  int t; cin>>t;
  while(t--){
    int len=0;
    string str={}; 
    cin>>len>>str;
      if(len==11 && str[0]=='8'){
      cout<<"YES"<<endl;
      }else if(len>11){
        auto it = str.find('8');
          if (it != string::npos){
            if((len-it)>=11){
              cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
          }else{
            cout << "NO"<<endl;
          }
      }else{
        cout<<"NO"<<endl;
      }
    }
  return 0;
}