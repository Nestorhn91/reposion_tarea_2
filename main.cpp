// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <queue>          // std::queue
#include <list>          // std::list
using namespace std;


//devuelve true si todos los elementos de la cola son pares, de lo contrario devuelve false
bool sonPares(queue<int> mi_cola)
{
    int conta = 0, divisor = 2; // divisor divide el elemento en partes iguales para probar que sea par
    while(!mi_cola.empty())// este ciclo es mas que todo niega si mi_pila esta vacia y que lo deje correr
    {
        if(mi_cola.front() % divisor)
        {
            conta++; //si el divicion llega a 1 el contador aumenta
        }
        mi_cola.pop();
    }
    if(conta == mi_cola.size()) // tiene que compara contador con mi_pila para se igual al tamaño de la pila que se busca
    {
        return true; //Esto devuelve verdadero si todos los elementos de la pila son pares y de lo contrario devuelve falso
    }
    else
    {
        return false;
    }
}

//devuelve true si todos los elementos de la lista son pares, de lo contrario devuelve false
bool sonPares(list<int> mi_lista)
{
    int conta = 0, divisor = 2; //divisor divide el elemento en partes iguales para probar que sea pares
    while(!mi_lista.empty()) //este ciclo es mas que todo niega si mi_pila esta vacia y que lo deje correr
    {
        if(mi_lista.front() % divisor)
        {
            conta++; //si el divicion llega a 1 el contador aumenta
        }
        mi_lista.pop_front();
    }
    if(conta == mi_lista.size()) // tiene que compara contador con mi_pila para se igual al tamaño de la pila que se busca
    {
        return true;
    }
    else
    {
        return false;
    }

}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(queue<string> mi_cola, string str)
{
    while(!mi_cola.empty()) //este ciclo es mas que todo niega si mi_pila esta vacia y que lo deje correr
    {
        if(mi_cola.front() == str) //verifica que el elemento sea igual al parametro buscado
        {
            return true;
        }
        mi_cola.pop();
    }
    return false;
}

//devuelve true si str es un elemento de mi_cola, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
    while(!mi_lista.empty())
    {
        if(mi_lista.front() == str) //prueba que el elemento sea igual al parametro de busqueda
        {
            return true;
        }
        mi_lista.pop_front();
    }
    return false;
}

//devuelve la suma de los elementos de la cola
int getSuma(queue<int> mi_cola)
{
    int sum = 0;
    while(!mi_cola.empty())
    {
        sum += mi_cola.front(); // esto suma todo los nuevo elemento a la suma
        mi_cola.pop();
    }
    return sum; // y esto retorna todo a la variable suma
}

//devuelve la suma de los elementos de la lista
int getSuma(list<int> mi_lista)
{
    int suma = 0;
    while(!mi_lista.empty())
    {
        suma+= mi_lista.front(); // esto suma todo los nuevo elemento a la suma
        mi_lista.pop_front();
    }
    return suma;
}

//Devuelve true si los elementos de la lista son estan ordenados alfabeticamente, de lo contrario devuelve false
bool estaOrdenada(list<char>mi_lista)
{
         list<char> alf = mi_lista;   // creamos una variable aux para guardar en memoria los caracteres de la lista que tenemos
         alf.sort(); // se ordenan los elementos en orden alfabetico sort() dentro de nuestro aux
        do // hecemos la comparacion directamente de la lista
        {
            if(mi_lista.front() != alf.front()) // si el elemento frontal de la lista base, es diferente al elemento del usamos aux( lista ordenada) para ordenarla
            {
                return false; // retornamos false si no esta ordenada
            }
            mi_lista.pop_front(); // eliminaremos el primer elemento de la lista base
            alf.pop_front(); // eliminaremos el primer elemento de nuestra lista aux.
        }
        while(!mi_lista.empty());   // creamos el ciclo para revisar todos los elementos de la lista
        return true; // si esta ordenada return true
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
