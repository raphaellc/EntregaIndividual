#pragma once
#include "NoSE.h"
template <class T>

class ListaSE
{
	void adiciona(int T);
	void T* removePrimeiroNo();
	void T* removeUltimoNo();
	T obterValorEm(int i);
	T obterValor();
	void mostrarValores();
	void esvaziaLista();
	void imprimirLista();
	int getQtdElementos();
	void insereInicio(T* elemento);
	T* obterUltimoElemento();
	T* obterPrimeiroElemento();
	int getTamanho();

private:
	void percorrerLista(); //Percorre todos elementos da lista
	bool listaVazia(); //Verifica se a lista está vazia

	No<T>* inicio_lista;
	No<T>* fim_lista;
	No<T>* aux;
	T* temp;
};

