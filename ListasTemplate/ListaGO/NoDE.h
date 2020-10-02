#pragma once
template <class T>
class NoDE
{
public:
	NoDE();
	~NoDE() {};

	void setDado(T* d);
	void setProximo(No<T>* prox);
	void setAnterior(No<T>* ant);

	T* getDado();
	No<T>* getProximo();
	No<T>* getAnterior();
private:
	T* dado;
	No<T>* proximoNo;
	No<T>* anteriorNo;
};

