#pragma once
#include <iostream>
#include "No.h"
template <class T>

class Lista
{
public: 
	Lista();
	~Lista() {};

	//Métodos Requisitados
	void esvaziaLista();
	void insereInicioLista(T* elemento);
	int obterTamanhoLista(); //Retorna quantos nos tem na lista
	T* obterUltimoElemento();
	T* obterPrimeiroElemento();
	T* removePrimeiroNo();
	T* removeUltimoNo();

	//Novos métodos
	void imprimirLista();

private:
	void percorrerLista(); //Percorre todos elementos da lista
	bool listaVazia(); //Verifica se a lista está vazia

	No<T>* inicio_lista;
	No<T>* fim_lista;
	No<T>* aux;
	T* temp;
	T temporaria;
	
protected:
	int tam;
};

using namespace std;

template <class T>
inline Lista<T>::Lista()
{
	inicio_lista = fim_lista = aux = nullptr;
	temp = new int;
	tam = 0;
}

template <class T>
inline bool Lista<T>::listaVazia()
{
	if (inicio_lista == nullptr)
		return true;
	else
		return false;
}

template <class T>
inline void Lista<T>::percorrerLista()
{
	aux = inicio_lista;
	for (int i = 0; i < tam - 1; i++) {
		aux = aux->getProximo();
	}
}

template <class T>
inline int Lista<T>::obterTamanhoLista()
{
	return tam;
}

template <class T>
inline void Lista<T>::insereInicioLista(T* elemento)
{
	No<T>* n = new No<T>; //Define o nó e insere o elemento no nó
	n->setDado(elemento); //Encapsula o dado no nó

	aux = inicio_lista;
	if (listaVazia()) { //Caso a lista esteja vazia
		inicio_lista = fim_lista = n; //Insere o nó na lista
	}
	else {//Caso não esteja vazia
		aux->setAnterior(n); //Insere o nó na lista
		n->setProximo(aux);
		inicio_lista = n;
	}
	n->setAnterior(nullptr);
	tam++;
}

template <class T>
inline T* Lista<T>::removeUltimoNo()
{
	T* temp = fim_lista->getDado();
	tam--;
	percorrerLista(); //Encontrar o penúltimo nó da lista
	delete fim_lista; //Desaloca a última posição
	if (fim_lista == inicio_lista) {
		
		inicio_lista = fim_lista = aux = nullptr;
	}
	else {
		aux->setProximo(nullptr); //Configura valor nulo para o ponteiro proximoNo do penúltimo nó
		fim_lista = aux; //Corrige qual o último nó da lista
	}
	return temp;
}

template <class T>
inline T* Lista<T>::removePrimeiroNo()
{
	T* temp = inicio_lista->getDado();
	tam--;
	aux = inicio_lista;//Seta o Aux na posição Inicial
	aux = aux->getProximo();//Se desloca para a segunda posição
	if (inicio_lista->getProximo() == nullptr) {
		delete inicio_lista;//Desaloca a primeira posição
		inicio_lista = fim_lista = aux = nullptr;
	}
	else {
		delete inicio_lista;//Desaloca a primeira posição
		inicio_lista = aux; //Corrige qual o primeiro nó da lista
		aux->setAnterior(nullptr);
	}
	return temp;
}

template <class T>
inline void Lista<T>::esvaziaLista()
{
	if (!listaVazia()) {
		aux = inicio_lista;
		while (aux->getProximo() != nullptr) removePrimeiroNo();//Esvazia até o penúltimo Nó
		removePrimeiroNo();//Esvazia o último Nó
	}
	else cout << "Lista vazia!\n";
}

template <class T>
inline T* Lista<T>::obterUltimoElemento()
{
	temporaria = fim_lista->getDado();
	return &temporaria;
}

template <class T>
inline T* Lista<T>::obterPrimeiroElemento()
{
	*temp = inicio_lista->getDado();
	return temp;
}

template <class T>
inline void Lista<T>::imprimirLista()
{
	aux = inicio_lista;
	if (listaVazia()) {
		cout << "Lista vazia!\n";
	}
	else {
		cout << "Posição 0: " << *aux->getDado() << endl;
		for (int i = 0; i < tam - 1; i++) {
			aux = aux->getProximo();
			cout << "Posição " << i + 1 << ": " << *aux->getDado() << endl;
		}
	}
}