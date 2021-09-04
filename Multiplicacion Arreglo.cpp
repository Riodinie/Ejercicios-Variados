#include<iostream>


using namespace std;

int main(){
	int num[] = {1,2,3,4,5,6,7,8,9,10};
	int mul=1;

	for(int i=0;i<10;i++){
		mul = mul*num[i]; 
	}
	
	cout<<"La multiplicacion es: "<<mul<<endl;
	
	return 0;
}

