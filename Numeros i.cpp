//*Elabore un c�digo que muestre el factorial de un n�mero seleccionado por el usuario.*//

#include <iostream>

using namespace std;

int main(){
	
	int n,i,a=1,b;
	
	cout<<"Ingrese numero: " ; cin>>n;
	
	for(i=1;i<=n;i++){
		
	 a=a*i;
	 
	}
	
	cout<<"El factorial de "<<n<<" es: "<<a;
}
