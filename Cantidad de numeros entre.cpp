#include <iostream>

using namespace std;

int main(void){

    double tope = 999999999999;
    int topeLst = 99;
    int qNum=-1;

    double lstNum[topeLst], mx=-tope, mn=tope;

    /*
    int vector[10]; // x Vector Una dimension
    int matrix2d[10,20]; // Matrix x, y
    int multi3d[10,20,50];  // x, y, z
    int multiNd[10,20,50,1,2,4,5,5,6,5,5,5,5,3];  // n Dimensiones
    */

    cout << "Escriba cantidad de números (entre 1 a "<< topeLst + 1 << "):"; cin >> qNum;
    if (qNum>0 && qNum<101) {
        for (int i=0 ; i<qNum; i++){
            cout << i + 1 << ":"; cin >> lstNum[i];
        }
    };
    int j=0;
    do {
      if (mx < lstNum[j]){
          mx = lstNum[j];
      }
      if (mn > lstNum[j]){
          mn = lstNum[j];
      }
      j++;
    } while(j < qNum);
    cout << "\nEl elemento menor de la lista de numeros es:" << mn;
    cout << endl << "El elemento mayor de la lista de numeros es:" << mx;
}
