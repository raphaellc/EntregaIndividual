#include "Lista.h"
#include <iostream> 
#include <ctime>


using namespace std;

int main() {
	setlocale(LC_ALL, "ptb");

	Lista<int>* minha_lista = new Lista<int>;

	//Nós de 0 a 4
	int* zero = new int;
	int* um = new int;
	int* dois = new int;

	*zero = 0;
	*um = 1;
	*dois = 2;

	minha_lista->insereInicioLista(zero);
	minha_lista->insereInicioLista(um);




	minha_lista->imprimirLista();
	cout << "//////////////////////////////////////////////////////////////\n";

	minha_lista->insereInicioLista(dois);

	minha_lista->imprimirLista();
	cout << "//////////////////////////////////////////////////////////////\n";

	cout << *minha_lista->removePrimeiroNo() << endl;

	cout << "//////////////////////////////////////////////////////////////\n";

	minha_lista->imprimirLista();

	cout << "//////////////////////////////////////////////////////////////\n";

	delete minha_lista;

	return 0;
}