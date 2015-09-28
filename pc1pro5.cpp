#include <iostream>
using namespace std;
int main() {
	float valores[8], mayor, menor;
	cout<<"ingrese 7 valoes decimales: "<<endl;
	for(int i=0;i<8;i++){
        cin>>valores[i];
	}
    mayor=valores[0];
	menor=valores[0];
	for(int j=0;j<8;j++){
        if(valores[j]>mayor){
            mayor=valores[j];
        }
        if(valores[j]<menor){
            menor=valores[j];
        }
	}
	cout<<"El valor mayor es: "<<mayor<<endl;
	cout<<"El valor menor es: "<<menor<<endl;
	return 0;
}
