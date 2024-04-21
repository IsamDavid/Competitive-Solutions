#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> a;
    vector<int> b;
    int aux, alice, bob = 0;

    for(int i=0; i<3; ++i){
        cin>>aux;
        a.push_back(aux);
    }
    for(int i=0; i<3; ++i){
        cin>>aux;
        b.push_back(aux);
    }

    for(int i=0; i<3; ++i){
        if(a[i]>b[i]){
            alice++;
        }else if(a[i]<b[i]){
            bob++;
        }
    }
    cout<<alice<<" "<<bob;
    
    return 0;
}
