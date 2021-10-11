#include "Nodo.h"

#pragma once
class Lista
{
public:
	Nodo* inicio; 
	Nodo* end;
	int conta; 

	Lista();
	void InsertarInicio(int valor);
	void InsertarFinal(int valor); 
	void InsertarPosi(int valor, int posicion); 
	Nodo* QuitarInicio(); 
	Nodo* QuitarFinal();
	Nodo* QuitarPosi(int posicion);
	Nodo* TenerNodo(int valor);
	int TenerValorFinal();
	int TenerValor(int posicion);
	bool EsVacio();
	~Lista() {}; 
};
;

