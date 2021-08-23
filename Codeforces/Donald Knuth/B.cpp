#include<bits/stdc++.h>
using namespace std;

int main(){
    ios :: sync_with_stdio ( false );

    int n,ai,bi,aux,suma=0; cin>>n;
    int t=n/2;
    while(t--){
        cin>>ai>>bi;
        aux=ai-bi;
        suma+=abs(aux);
    }    
    cout<<suma;
    return 0;
}