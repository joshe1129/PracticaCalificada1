#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
    int numero;
    int pm[10][10];
    cout << "Elementos de la Matriz con sus direcciones, con aritmética de punteros: " << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            // Aritmética de punteros
            *(*(pm + i) + j) = rand();
            cout << *(*(pm + i) + j)<<" ";
        }
        cout << endl;
    }
    cout<<"ingrese numero que desea buscar: ";
    cin>>numero;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
                if(*(*(pm + i) + j)==numero){
                    cout<<"el numero se encuentra en la columna: "<<i+1<<" fila: "<<j+1;

                }
        }
    }
    return 0;
}
