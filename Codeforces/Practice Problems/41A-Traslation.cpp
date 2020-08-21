#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    string str; cin>>str; 
    string t; cin>>t;
    
    reverse(str.begin(), str.end()); 
  
    if(str==t){
      cout<<"YES";
    }else{
      cout<<"NO";
    } 
    return 0; 
} 