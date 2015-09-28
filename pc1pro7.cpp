#include <iostream>
using namespace std;
int palindromo(int numero){
  int num=numero,inverso=0,var=0;
  while(numero!=0){
    var=numero%10;
    inverso=inverso*10+var;
    numero=numero/10;
  }
  if(num==inverso){
    return 0;
  }
  return 1;
}

int main(){
  int mult,pal,palmayor=0,mayor=0;
  for(int x=100;x<=999;x++){
    for(int y=100;y<=999;y++){
      mult=x*y;
      if(palindromo(mult)==0){
        if(mayor<mult){
          mayor=mult;  
        }
      }
    }
  }
  cout<<"el maximo numero palindromo es: "<<mayor<<endl;
}
