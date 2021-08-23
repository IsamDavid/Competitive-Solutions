#include<bits/stdc++.h>
using namespace std;

int main(){

    int k; cin>>k;
    //Se usa una operación and usar los bits para ver si es par o impar y no hacer el % 
    if(k&1 || k==2)
        cout<<"NO";
    else
        cout<<"YES";
        
    return 0;
}