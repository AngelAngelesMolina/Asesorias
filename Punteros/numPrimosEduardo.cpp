#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int num, *dir_num;
	// system("color 0a");
	cout<<"Ingrese un numero: "; cin>>num;
	dir_num=&num;
	bool primo=true;
	for(int i=2;i<*dir_num;i++){
		if(*dir_num%2==0){
			primo=false;
		}
	}
	if(primo){
		cout<<"El numero es primo"<<endl;
        cout<<"la dirección es: "<<dir_num<<endl;
	}
	else{
		cout<<"El numero no es primo"<<endl;
        cout<<"la dirección es: "<<dir_num<<endl;

	}
}