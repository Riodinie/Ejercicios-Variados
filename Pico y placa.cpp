#include <iostream>
using namespace std;

int main(){
	
	int numero;
	char per[10];
	cout<<"Hola, �Como te llamas?"<<endl;
	cin>>per;
	cout<<"Bienvenid@ "<<per<<endl;
	cout<<"\nIngresa el �ltimo dijito de tu placa:\n "<<endl;
	cin>>numero;
	cout<<"\n";
	
	if(numero%2==0){
		cout<<"Puedes salir los dias:\n "<<endl;		
			cout<<"Lunes 27 de abril"<<endl;
			cout<<"Mi�rcoles 29 de abril"<<endl;
			cout<<"Viernes 1 de mayo"<<endl;
			cout<<"Domingo 3 de mayo"<<endl;
			cout<<"Martes 5 de mayo"<<endl;
			cout<<"Jueves 7 de mayo"<<endl;
			cout<<"S�bado 9 de mayo"<<endl;
			
	}else{
		  cout<<"Puedes salir los dias:\n "<<endl;		
			cout<<"Martes 28 de abril"<<endl;
			cout<<"Jueves 30 de abril"<<endl;
			cout<<"S�bado 2 de mayo"<<endl;
			cout<<"Lunes 4 de mayo"<<endl;
			cout<<"Mi�rcoles 6 de mayo"<<endl;
			cout<<"Viernes 8 de mayo"<<endl;
			cout<<"Domingo 10 de mayo"<<endl;
    }   
			
}
