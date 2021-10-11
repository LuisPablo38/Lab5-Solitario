#include "Pila.h"

Pila::Pila()
{
	interLista = new Lista();
	interLista->end = nullptr;
	interLista->inicio = nullptr;
	interLista->conta = 0; 
}

void Pila::Insertar(int valor)
{
	interLista->InsertarFinal(valor); 
}

Nodo* Pila::Elegir()
{
	return interLista->QuitarFinal(); 
}

int Pila::Valor(int i)
{
	return interLista->TenerValor(i); 
}

bool Pila::EsVacio()
{
	return interLista->EsVacio(); 
}

int Pila::Valor_Elegir()
{
	return interLista->TenerValorFinal(); 
}