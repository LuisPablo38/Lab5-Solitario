#include "Lista.h"
#pragma once
class Pila
{
private: Lista* interLista; 
public:
	Pila();
	Nodo* Elegir(); 
	int Valor(int i);
	int Valor_Elegir(); 
	void Insertar(int valor); 
	bool EsVacio(); 

};

