#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,cont=0; cin>>t;
    string variable; 
    while(t--){
        cin>>variable;
        if(variable.find('+')==-1)
            cont--;
        else
            cont++;
    }
        cout<<cont;
    return 0;
}