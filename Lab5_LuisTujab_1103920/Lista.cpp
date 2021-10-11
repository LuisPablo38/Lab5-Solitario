#include "Lista.h"

Lista::Lista()
{
	inicio = nullptr;
	end = nullptr;
	conta == 0;
};

void Lista::InsertarInicio(int valor)
{
	Nodo* new_nodo = new Nodo(); 
	new_nodo->valor = valor;

		if (EsVacio())
		{
			inicio = new_nodo; 
			end = new_nodo; 
		}
		else
		{
			new_nodo->next = inicio;
			inicio = new_nodo;
		}
		conta++;
}

void Lista::InsertarFinal(int valor)
{
	Nodo* new_nodo = new Nodo();
	new_nodo->valor = valor;

	if (EsVacio())
	{
		inicio = new_nodo;
		end = new_nodo;
	}
	else
	{
		end->next = new_nodo;
		end = new_nodo;
	}
	conta++;
}

void Lista::InsertarPosi(int valor, int posicion)
{
	Nodo* new_nodo = new Nodo();
	new_nodo->valor = valor;

	if ( EsVacio() || (posicion ==0))
	{
		InsertarInicio(valor);
	}
	else
	{
		if (posicion>= conta)
		{
			InsertarFinal(valor); 

		}
		else
		{
			Nodo* pretemp = inicio; 
			Nodo* temp = inicio->next;
			int index = 1; 
			while ((temp) && (index < posicion))
			{
				pretemp = temp; 
				temp = temp->next;
				index++; 
			}
			new_nodo->next = temp; 
			pretemp->next = new_nodo;
		}
	}
	conta++; 
}

Nodo* Lista::QuitarInicio()
{
	Nodo* temp = inicio; 
	if (!EsVacio())
	{
		inicio = inicio->next; 
		if (conta == 1)
		{
			end = inicio;
		}

	}
	return temp; 
}

int Lista::TenerValorFinal()
{
	Nodo* temp = end; 
	return temp->valor; 
}

Nodo* Lista::QuitarFinal()
{
	Nodo* temp = end;
	if (!EsVacio())
	{
		if (conta == 1)
		{
			end = end->next;
			inicio = end; 
		}
		else
		{
			Nodo* pretemp = inicio; 
			temp = pretemp->next;
			while (temp != end)
			{
				pretemp = temp;
				temp = pretemp->next;
			}
			pretemp->next = temp->next; 
			end = pretemp;
		}
		conta--; 
	}
	return temp; 
}

Nodo* Lista::QuitarPosi(int posicion)
{
	Nodo* temp = inicio; 
	if (!EsVacio())
	{
		if ((conta==1)|| (conta==0))
		{
			return QuitarInicio();
		}
		else
		{
			Nodo* pretemp = inicio;
			temp = pretemp->next;
			int index = 1; 
			while ((temp) && (index< posicion))
			{
				pretemp = temp;
				temp = pretemp->next;
				index++; 
			}
			pretemp->next = temp->next;
			conta--;
		}
	}
	return temp; 
}

Nodo* Lista::TenerNodo(int valor)
{
	Nodo* temp = inicio;
	while ((temp) && (temp->valor != valor))
	{
		temp = temp->next;
	}
	return temp; 
}

int Lista::TenerValor(int posicion)
{
	if ((posicion>=0) && (posicion < conta))
	{
		Nodo* temp = inicio;
		int index = 0; 
		while ((temp) && (index<posicion))
		{
			temp = temp->next;
			index++;
		}
		return temp->valor;
	}
	return -1; 
}

bool Lista::EsVacio()
{
	return conta == 0; 
}