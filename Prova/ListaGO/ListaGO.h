#pragma once
template <class T>

class ListaGO
{
public:
	ListaGO() {};
	ListaGO(Container* _ed);
	~ListaGO() {};

	T buscar(int pos);
	void deletar(int posicao);
	bool estaVazia();
	void inserir(T elemento);
	int tamanho();
};

