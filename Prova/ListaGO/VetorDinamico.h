#pragma once
template <class T>

class VetorDinamico
{
public:
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
	T* array;
	T* arrayTemp;
	int indice, tamanho, tamNovo;

	void realocar();
};

