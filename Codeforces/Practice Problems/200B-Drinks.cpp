#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0; cin >> n;
    float k=0.0f,sum=0.0f, promedio=0.0f;
    for (int i=0; i<n; ++i){
        cin >> k;
        sum += k;
    }
    promedio = sum/n;
    cout<<fixed << setprecision(5) << promedio;
    return 0;
}