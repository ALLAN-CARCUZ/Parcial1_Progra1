#include "Estudiante.cpp"
#include <iostream>
using namespace std;
int cantidad=0;

main(){
cout<<"Primero debe ingresar la cantidad de alumnos que quiere"<<endl;
cout<<"Cuantos alumnos va a ingresar? ";
cin>>cantidad;
	while(cantidad>0){
			
	string nom,ape,cur;
	int cod,n1,n2,n3,n4;
	cout<<"\n";
	cout<<"Ingrese Codigo: ";
	cin>>cod;
	cout<<"Ingrese Nombres: ";
	cin>>nom;
	cout<<"Ingrese Apellidos: ";
	cin>>ape;
	cout<<"Ingrese Curso: ";
	cin>>cur;
	cout<<"Ingrese Nota 1: ";
	cin>>n1;
	cout<<"Ingrese Nota 2: ";
	cin>>n2;
	cout<<"Ingrese Nota 3: ";
	cin>>n3;
	cout<<"Ingrese Nota 4: ";
	cin>>n4;
	promedio=(n1+n2+n3+n4)/4;
	if(promedio>60){
		cout<<"\nAprobado con: "<<promedio<<endl;
		cout<<"¡FELICIDADES!";
		cout<<"\n";
	}else{
		cout<<"\nReprobado con: "<<promedio<<endl;
		cout<<"NUNCA TE RINDAS";
		cout<<"\n";
	}	
		
	
}

	
}
