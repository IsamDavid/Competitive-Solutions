#include<iostream>
#include<array>
using namespace std;

int main(){
  int a=0,b=0;  cin>>a>>b;
  array<string, 9>numeros{"one","two","three","four","five","six","seven","eight","nine"};

  for(int i=a;i<=b;i++){

    if(i>=1 and i<=9){
    cout<<numeros[i-1]<<endl;
    }else if((i%2)==0){
      cout<<"even"<<endl;
    }else{
      cout<<"odd"<<endl;
    }
  }
  return 0;
}