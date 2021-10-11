#include"Lista.h"; 
#pragma once
class Stack
{
 private: Lista* interLista;
 public:
	Stack();
	Nodo* Elegir(); 
	void Insertar(int valor); 
	bool EsVacio(); 
};

