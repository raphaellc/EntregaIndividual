#include <iostream> // Entrada/Saida padrao
#include <string>
#include <iomanip>

using namespace std;

//String na ordem inversa
string inverte(string texto, int n) {
	string temp;

	temp += texto[n-1];
	if (n == 1) {
		return temp;
	}
	else {	
		temp+= inverte(texto, n - 1);
		return temp;
	}
	
}

//Verificar palindromo
bool verificaPalindromo(string texto, int n) {
	int esq, dir;
	//dir = n - 1;

	//if
	return true;
}

//Fatorial
int fatorial(int n) {
	if (n == 1) return n;
	else {
		return n * fatorial(n - 1);
	}
}

//Soma dos elementos de um vetor
int somaVetor(int Vetor[], int tam){
	int soma = 0;
	
	soma += Vetor[tam - 1];
	if (tam == 1) {
		return soma;
	}
	else {
		soma += somaVetor(Vetor, tam -1);
		return soma;
	}
}

//MDC
int mdc(int x, int y) {
	if (y != 0) return mdc(y, x % y);
	else return x;
}

int main() {
	setlocale(LC_ALL, "ptb");

	//String na ordem inversa
	cout << "STRING NA ORDEM INVERSA\n";
	cout << "Entrada: abc\n";
	cout << "Saida: " << inverte("abc", 3) << endl;
	cout << "//////////////////////////////////////\n";
	//Verificar palindromo
	cout << "VERIFICAR PALINDROMO\n";
	cout << "Entrada: \n";
	cout << "Saida: " << endl;
	cout << "//////////////////////////////////////\n";
	//Fatorial
	cout << "FATORIAL\n";
	cout << "Entrada: 4\n";
	cout << "Saida: " << fatorial(4) << endl;
	cout << "//////////////////////////////////////\n";
	//Soma dos elementos de um vetor
	int vetor[3] = { 3, 2, 1 };
	cout << "SOMA DE ELEMENTOS NUM VETOR\n";
	cout << "Entrada: 3, 2, 1\n";
	cout << "Saida: " << somaVetor(vetor, 3) << endl;
	cout << "//////////////////////////////////////\n";
	//Maior divisor comum entre m e n
	//cout << "SOMA DE ELEMENTOS NUM VETOR\n";
	//cout << "Entrada: 6, 10\n";
	//cout << "Saida: " << mdc(6, 10) << endl;
	//cout << "//////////////////////////////////////\n";


	string nome = "matheus";
	
	cout << nome << endl;

	for (int i = 0; i < nome.size(); i++) {
		nome[i] = toupper(nome[i]);
	}

	cout << nome << endl;

	system("pause");
	return 0;
}