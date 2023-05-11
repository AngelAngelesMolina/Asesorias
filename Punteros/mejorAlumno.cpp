#include<iostream>
// #include<stdlib.h>
using namespace std;

struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3], *puntero_alumno=alumno;

void datos();
void mejor(Alumno *);

int main(){
	datos();
	mejor(puntero_alumno);
}

void datos(){
	for(int i=0;i<3;i++){
		// fflush(stdin);
		cout<<"Digite su nombre ("<<i+1<<"): "; cin.getline((puntero_alumno+i)->nombre,30,'\n');
		cout<<"Digite su edad ("<<i+1<<"): "; cin>>(puntero_alumno+i)->edad;
		cout<<"Digite su promedio ("<<i+1<<"): "; cin>>(puntero_alumno+i)->promedio;
		cout<<endl;
        cin.clear();
        cin.ignore();
	}
}

void mejor(Alumno *puntero_alumno){
	float mayor=0.0;
	int pos=0;
	
	for(int i=0;i<3;i++){
		if((puntero_alumno+i)->promedio>mayor){
			mayor=(puntero_alumno+i)->promedio;
			pos=i;
		}

	}
	
	cout<<"El alumno con mejor promedio es: \n";
	cout<<"Nombre: "<<(puntero_alumno+pos)->nombre<<endl;
	cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
	cout<<"Promedio: "<<(puntero_alumno+pos)->promedio<<endl;
}