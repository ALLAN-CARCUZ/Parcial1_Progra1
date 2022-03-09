#include <iostream>
using namespace std;
class alumnos{
	//atributos
	protected : string nombres,apellidos,cursos;
				int codigo, nota1, nota2, nota3, nota4;
				

	protected : 
	//constructor
					alumnos(string nom,string ape,string cur, int cod,int n1, int n2, int n3,int n4){
					nombres=nom;
					apellidos=ape;
					cursos=cur;
					codigo=cod;
					nota1=n1;
					nota2=n2;
					nota3=n3;
					nota4=n4;														
					
				}
		//metodos
	void mostrar();
	void agregar();
	void modificar();

};
