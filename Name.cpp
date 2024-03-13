#include "Cliente.cpp"
#include <iostream>
using namespace std; 

main(){
	string nit,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono; 
	
	cout<<"Ingresar Nit";
	cin>>nit;
	cout<<"Ingresar Nombres";
	cin>>nombres;
	cout<<"Ingresar Apellidos";
	cin>>apellidos;
	cout<<"Ingresar Direccion";
	cin>>direccion;
	cout<<"Ingresar Telefono";
	cin>>telefono;
	cout<<"Ingresar fecha_nacimiento";
	cin>>fecha_nacimiento;	
	//instancia de un obtejto 
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,fecha_nacimiento,nit);
    obj.mostrar();
} 
