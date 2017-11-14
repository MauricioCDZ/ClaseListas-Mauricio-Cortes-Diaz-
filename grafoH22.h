/*
 *Autores : Jeffrey Garcia, Mauricio Cortés
 *fecha de creacion : 9 de noviembre del 2017
 *fecha última modificacion : 11 de noviembre del 2017
 *vesion : 0.1
 *Archivo: grafo.h
*/

#ifndef __GRAFO_H
#define __GRAFO_H

#include <vector>
#include <iostream>
using namespace std;
template <class T>
class Nodo{
public:
	T dato;
	Nodo(T elem);
	~Nodo();
};

template <class T>
class Grafo{
public:
	vector<Nodo<T> > V; //Vertices
	vector<vector<Nodo<T> > >E; //Aristas
	vector<vector<int> > P; //Ponderaciones
	int nAri;
	int nVert;
public:
	Grafo(); //CrearGrafoVacio
	Grafo(int nV); //CrearGrafoNoVacio
	void AgregarArista(Nodo<T> n1, Nodo<T> n2);
	void AgregarNodo(Nodo<T> n1);
	void ModificarArista(Nodo<T> n1, Nodo<T> n2, int valor);
	void EliminarArista(Nodo<T> n1, Nodo<T> n2);
	void EliminarNodo(Nodo<T> n1);
	vector<Nodo<T> > ObtenerListaAdy(Nodo<T> n1);
	int ObtenerNumVertices();
	int ObtenerNumAristas();
	~Grafo();
};
template <class T>
Nodo<T>::Nodo(T elem){
	dato=elem;
}
template<class T>
Grafo<T>::Grafo(int n1){
	cout<<"FFF";
	Nodo<int> n(0);
	for(int nNodos =0; nNodos< n1; nNodos++)
		V.push_back(n);
	//vector<Nodo<T> > V(n1);
}


#endif // __GRAFO_H
