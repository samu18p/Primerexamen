#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void numeros();
void outNotas();
int nCalif, *calificacion, *ptr;

int main()
{
	cout<<"Bienvenido...."<<endl;
	
	numeros();
	outNotas();
	
	delete[] calificacion;
	
	getch();
	return 0;
}

void inNotas()
{
	cout<<"Ingrese la cantidad de numeros "; cin>>nCalif;
	calificacion=new int[nCalif];
	
	for(int i=0; i<nCalif; i++){
		cout<<"Ingrese numero "; cin>>calificacion[i];
	}
}
void outNotas()
{
	ptr=calificacion;
	cout<<"\nMuestra"<<endl;
	for(int i=0 ; i<nCalif; i++)
	{
		cout<<*ptr++<<endl;
	}
}
