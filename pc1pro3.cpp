#include <iostream>
using namespace std;
int main(){
    int numero=20;
    bool var=true;
    while(var){
    if(numero%1==0 && numero%2==0 && numero%3==0 && numero%4==0 && numero%5==0 && numero%6==0
          && numero%7==0 && numero%8==0 && numero%9==0 && numero%10==0 && numero%11==0 && numero%12==0 && numero%13==0
          && numero%14==0 && numero%15==0 && numero%16==0 && numero%17==0 && numero%18==0 && numero%19==0 && numero%20==0 ){
             cout<<numero<<endl;
             var=false;
        }
        numero++;
    }

}

