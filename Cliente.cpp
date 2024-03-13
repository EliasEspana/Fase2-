#include "Persona.cpp"
#include <iostream>
using namespace std; 

class Cliente : Persona {
	//atributos  
	private : string nit; 
	
	//constructor 
	public :
	Cliente (){
	}
	
	Cliente (string nom,string ape,string dir,int tel,string fn, string n) : Persona (nom,ape,dir,tel,fn){
        nit= n; 
        
	}
	void mostrar() {
		cout<<"____________________"<<endl;
		cout<<nit<<","<<nombres<<apellidos<<","<<direccion<<","<<telefono<<","<<fecha_nacimiento<<","<<endl; 
		
	}
};
