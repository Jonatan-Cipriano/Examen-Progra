#include "Materia.cpp"
#include <iostream>

using namespace std;

main(){
	string nombres, apellidos, curso;
	int codigo, nalumnos, nota1, nota2, nota3, nota4, promedio;
	
	
	cout<<"¿A cuantos alumnos desea revisar su promedio?"<<endl;
	cin>>nalumnos;
	int i=1;
	while(i<=nalumnos){
		cout<<"Ingrese Nombre"<<endl;
		cin>>nombres;
		cout<<"Ingrese apellido"<<endl;
		cin>>apellidos;
		cout<<"Ingrese codigo"<<endl;
		cin>>codigo;
		cout<<"Ingrese Materia"<<endl;
		cin>>curso;
		cout<<"Ingrese nota 1 "<<endl;
		cin>>nota1;
		cout<<"Ingrese nota 2 "<<endl;
		cin>>nota2;
		cout<<"Ingrese nota 3 "<<endl;
		cin>>nota3;
		cout<<"Ingrese nota 4 "<<endl;
		cin>>nota4;
		system("cls");
		
		Materia obj = Materia(nombres,apellidos,codigo, curso, nota1, nota2, nota3, nota4, promedio);
		obj.mostrar();
		system("pause");
		system("cls");
		
		i=i+1;
	}
	
	return 0;
}
