#include "Estudiante.cpp"
#include <iostream>

using namespace std;

class Materia : Estudiante{
	private : string curso;
		int nota1, nota2, nota3, nota4, promedio;
	
	public :
		Materia (){
		}
		Materia(string nom, string ape, int cod, string cur, int n1, int n2, int n3, int n4, int prom) : Estudiante(nom, ape, cod){
			curso = cur;
			nota1 = n1;
			nota2 = n2;
			nota3 = n3;
			nota4 = n4;
			promedio = (n1+n2+n3+n4)/4;
		//	prom = (n1+n2+n3+n4)/4;
		}
		
		/*void setNombres(string nom){nombres = nom;}
		void setApellidos(string ape){apellidos = ape;}
		void setCodigo(int codigo){codigo = cod;}
		void setCurso(string curso){curso = cur;}
		void setNota1(int nota1){nota1 = n1;}
		void setNota2(int nota2){nota2 = n2;}
		void setNota3(int nota3){nota3 = n3;}
		void setNota4(int nota4){nota4 = n4;}*/
		
		string getNombres(){return nombres;}
		string getApellids(){return apellidos;}
		int getCodigo(){return codigo;}
		string getCurso(){return curso;}
		int getNota1(){return nota1;}
		int getNota2(){return nota2;}
		int getNota3(){return nota3;}
		int getNota4(){return nota4;}
		int getPromedio(){return promedio;}
		//void mostrar();
		
		void mostrar(){

		cout<<"Nombres:"<<nombres<<endl;
		cout<<"Apellidos:"<<apellidos<<endl;
		cout<<"--------------------"<<endl;
		cout<<"Codigo:"<<codigo<<endl;
		cout<<"Curso:"<<curso<<endl;
		cout<<"--------------------"<<endl;
		cout<<"Nota 1:"<<nota1<<endl;		
		cout<<"Nota 2:"<<nota2<<endl;
		cout<<"Nota 3:"<<nota3<<endl;
		cout<<"Nota 4:"<<nota4<<endl;
		cout<<" El promedio de la clase es de: "<<promedio<<endl;
		
		if(promedio>60){
			cout<<"--CURSO APROVADO--"<<endl;
		}else {
			cout<<"--CURSO REPROVADO"<<endl;
			}
			
		}
};
