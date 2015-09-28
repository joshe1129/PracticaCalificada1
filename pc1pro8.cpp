#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void ordenar(int *array);
int main(){
    int a[10];
    int *pa = a;
    for(int i=0;i<10;i++){
        a[i]=rand() % 100;
    }
    int i;
    pa = a;
    ordenar(a);
    cout<<"ARREGLO DE A :"<<endl;
    for (i = 0; i < 10; i++){
        cout << "a["<<i<<"]" << " --> " << *(pa + i) << endl;
    }
}
void ordenar(int *a) {
    int aux;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - 1; j++) {
            if (*(a+i) < *(a+j)) {
                aux = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = aux;
            }

        }
    }
}
