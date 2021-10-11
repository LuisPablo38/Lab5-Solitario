#include "Stack.h"

Stack::Stack()
{
	interLista = new Lista();
}
void Stack::Insertar(int valor)
{
	interLista->InsertarFinal(valor);
}
Nodo* Stack::Elegir()
{
	return interLista->QuitarFinal(); 
}
bool Stack::EsVacio()
{
	return interLista->EsVacio(); 
}