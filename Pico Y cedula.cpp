#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	
	int numero;
	char per[10];
	cout<<"Hola, ¿Como te llamas?"<<endl;
	cin>>per;
	cout<<"Bienvenid@ "<<per<<endl;
	cout<<"Ingresa el último dígito tu cedula: ";
	cin>>numero;
	
	switch (numero){
		case 1: cout<<"Puede salir los dias\n: "<<endl;
		cout<<"Martes 28 de abril"<<endl;
		cout<<"Domingo 3 de mayo"<<endl;
		cout<<"Viernes 8 de mayo"<<endl;break;
		case 2: cout<<"Puede salir los dias\n: "<<endl;
		cout<<"Martes 28 de abril"<<endl;
		cout<<"Domingo 3 de mayo"<<endl;
		cout<<"Viernes 8 de mayo"<<endl;break;
		case 3: cout<<"Puede salir los dias: "<<endl;
		cout<<"Miércoles 29 de abril"<<endl;
		cout<<"Lunes 4 de mayo"<<endl;
		cout<<"Sábado 9 de mayo"<<endl;break;
		case 4: cout<<"Puede salir los dias: "<<endl;
		cout<<"Miércoles 29 de abril"<<endl;
		cout<<"Lunes 4 de mayo"<<endl;
		cout<<"Sábado 9 de mayo"<<endl;break;
		case 5: cout<<"Puede salir los dias: "<<endl;
		cout<<"Jueves 30 de abril"<<endl;
		cout<<"Martes 5 de mayo"<<endl;
		cout<<"Domingo 10 de mayo"<<endl;break;
		case 6: cout<<"Puede salir los dias: "<<endl;
		cout<<"Jueves 30 de abril"<<endl;
		cout<<"Martes 5 de mayo"<<endl;
		cout<<"Domingo 10 de mayo"<<endl;break;
		case 7: cout<<"Puede salir los dias: "<<endl;
		cout<<"Viernes 1 de mayo"<<endl;
		cout<<"Miércoles 6 de mayo"<<endl;break;
		case 8: cout<<"Puede salir los dias: "<<endl;
		cout<<"Viernes 1 de mayo"<<endl;
		cout<<"Miércoles 6 de mayo"<<endl;break;
		case 9: cout<<"Puede salir los dias: "<<endl;
		cout<<"Lunes 27 de abril"<<endl;
		cout<<"Sábado 2 de mayo"<<endl;
		cout<<"Jueves 7 de mayo	"<<endl;break;
		case 0: cout<<"Puede salir los dias: "<<endl;
		cout<<"Lunes 27 de abril"<<endl;
		cout<<"Sábado 2 de mayo"<<endl;
		cout<<"Jueves 7 de mayo	"<<endl;break;
	}
    return 0;
}
