#pragma once
template <class T>
class No
{
public:
	No();
	~No() {};
	
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

template <class T>
inline No<T>::No()
{
	proximoNo = anteriorNo = nullptr;
	dado = nullptr;
}
template <class T>
inline T* No<T>::getDado()
{
	return dado;
}
template <class T>
inline void No<T>::setDado(T* d)
{
	dado = d;
}
template <class T>
inline No<T>* No<T>::getProximo()
{
	return proximoNo;
}
template <class T>
inline No<T>* No<T>::getAnterior()
{
	return anteriorNo;
}
template <class T>
inline void No<T>::setProximo(No<T>* prox)
{
	proximoNo = prox;
}
template <class T>
inline void No<T>::setAnterior(No<T>* ant)
{
	anteriorNo = ant;
}

