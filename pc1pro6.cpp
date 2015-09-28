#include <iostream>
using namespace std;
int main(){
  int sum=0;
  for(int x=0;x<=1000;x++){
    if(x%3==0||x%5==0){
      sum=sum+x;
    }
  }
  cout<<"la suma de los multiplos es: "<<sum<<endl;
}
