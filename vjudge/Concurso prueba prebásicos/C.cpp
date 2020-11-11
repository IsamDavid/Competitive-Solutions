#include<bits/stdc++.h>
using namespace std;
int main(){

bool luces[3][3]={{true,true,true},{true,true,true},{true,true,true}};
int press[3][3]={};
for(int i=0; i<3; ++i){
  for(int j=0; j<3; ++j){
    cin>>press[i][j];
  }
}
  for(int i=0;i<3;++i){
    for(int j=0;j<3;++j){
      if(press[i][j]&1==1){
        luces[i][j] = not luces[i][j];
          if(i>0) luces[i-1][j] = not luces[i-1][j];
          if(i<2) luces[i+1][j] = not luces[i+1][j];
          if(j>0) luces[i][j-1] = not luces[i][j-1];
          if(j<2) luces[i][j+1] = not luces[i][j+1];
      }
    }
  }
  for(int i=0; i<3; ++i){
    for(int j=0; j<3; ++j){
      if(j==2) cout<<luces[i][j]<<endl;
      else cout<<luces[i][j];
    }
  }
  return 0;
}