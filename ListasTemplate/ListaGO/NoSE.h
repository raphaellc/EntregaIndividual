#pragma once
template <class T>
class NoSE
{
public:
	NoSE();
	~NoSE() {};

	void setDado(T* d);
	void setProximo(No<T>* prox);

	T* getDado();
	No<T>* getProximo();
private:
	T* dado;
	No<T>* proximoNo;
};

