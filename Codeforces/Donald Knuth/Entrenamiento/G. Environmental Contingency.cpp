#include<bits/stdc++.h>
using namespace std;

int main(){
    ios :: sync_with_stdio ( false );
    int n,x,week,aqi,days=0; cin>>n;
    string day; cin>>day>>x;
    vector<int> medidas={};

    if(day == "Monday"){
        week=1;
    }else if(day=="Tuesday"){
        week=2;
    }else if(day=="Wednesday"){
        week=3;
    }else if(day=="Thursday"){
        week=4;
    }else if(day=="Friday"){
        week=5;
    }else if(day=="Saturday"){
        week=6;
    }else if(day=="Sunday"){
        week=7;
    }

    while(n--){
        cin>>aqi;
        
        if(week==6) {
            week++;
            continue;
        }
        if(week==7){
          week=1;
          continue;  
        } 
        medidas.push_back(aqi);
        week++;
    }
    for(int i=0;i<medidas.size();++i){
        if(medidas[i]>=x){
            days++;
        }
    }
    cout<<days;
    return 0;
}