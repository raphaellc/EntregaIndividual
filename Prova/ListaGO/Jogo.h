#pragma once
#include "ListaGO.h"
template <class T>

class Jogo
{
public:
	Jogo() {};
	~Jogo() {};

	ListaGO<T> *gameObjects;
};

