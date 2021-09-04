#include<iostream>

using namespace std;
int main()
{
    int valor;
    
    cout<<"Ingrese el valor de la piramide: "; cin>>valor;
    
    for(int i=0 ; i<valor; i++)
    {
        for(int a=0; a<=i; a++)
        {
        cout<<"*";
        }
        cout<<"\n";
    }
}
