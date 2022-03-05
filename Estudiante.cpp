#include <iostream>
using namespace std;

class Estudiante{
	protected : string nombres, apellidos;
		int codigo;
	
	protected :
	Estudiante(){
	}
	Estudiante(string nom, string ape, int cod){
		nombres= nom;
		apellidos=ape;
		codigo=cod;
	}
	void mostrar();
		
};
