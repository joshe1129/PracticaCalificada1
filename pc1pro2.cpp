#include <iostream>
using namespace std;
int fib(int n)
{
  if(n<=2)
  {
      return n;
  }
  else
  {
      return fib(n-1) + fib(n-2);
  }

}
int main()
{
    int i=1,suma=0;
    while(fib(i)<4000000)
    {
        if(fib(i)%2==0){
            suma=suma+fib(i);
        }
        i=i+1;
    }
    cout<<"la suma es: "<<suma;
    return 0;
}
