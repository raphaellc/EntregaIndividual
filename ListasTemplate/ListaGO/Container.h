#pragma once
template <class T>

class Container
{
public:

	virtual void adiciona(int T) = 0;
	virtual void T* removePrimeiroNo() = 0;
	virtual void T* removeUltimoNo() = 0;
	virtual T obterValorEm(int i) = 0;
	virtual T obterValor() = 0;
	virtual void mostrarValores() = 0;
	virtual void esvaziaLista() = 0;
	virtual void imprimirLista() = 0;
	virtual int getQtdElementos();
	virtual void insereInicio(T* elemento) = 0;
	virtual T* obterUltimoElemento() = 0;
	virtual  T* obterPrimeiroElemento() = 0;
	virtual int getTamanho();

protected:
		int tamanho;
};

