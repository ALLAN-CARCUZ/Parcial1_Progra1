#include "Alumnos.cpp"
#include <iostream>
using namespace std;
float promedio=0;

class estudiante : alumnos{

	//constructor
	public : 
	estudiante(string nom,string ape,string cur,int cod, int n1,int n2,int n3,int n4) : alumnos(nom,ape,cur,cod,n1,n2,n3,n4){

	}
	void mostrar(){
		cout<<"_______________"<<endl;
		cout<<"Codigo:"<<codigo<<endl;
		cout<<"Nombres:"<<nombres<<endl;
		cout<<"Apellidos:"<<apellidos<<endl;
		cout<<"Curso:"<<cursos<<endl;
		cout<<"Nota 1:"<<nota1<<endl;
		cout<<"Nota 2:"<<nota2<<endl;
		cout<<"Nota 3:"<<nota3<<endl;
		cout<<"Nota 4:"<<nota4<<endl;
		promedio=(nota1+nota2+nota3+nota4)/4;
		cout<<"Promedio:"<<promedio<<endl;
	
	}
	
};
