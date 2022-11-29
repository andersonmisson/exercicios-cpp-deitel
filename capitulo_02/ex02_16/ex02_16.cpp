// ex02_16.cpp :
// Escreva um programa que solicita ao usuário inserir dois números, 
//obtém os dois números do usuário e imprime a soma, produto, diferença e quociente dos dois números.
// Autor: Anderson Misson

#include<iostream>
#include<locale>

using namespace std;

int main() {

	setlocale(LC_ALL, "pt-BR.UTF-8");

	int numero1;
	int numero2;
	int soma;
	int subtracao;
	int multiplicacao;
	int divisao;

	cout << "Coloque dois números inteiros: ";
	cin >> numero1 >> numero2;
	soma = numero1 + numero2;
	multiplicacao = numero1 * numero2;
	subtracao = numero1 - numero2;
	divisao = numero1 / numero2;

	cout << "Soma = " << soma << endl;
	cout << "Produto = " << multiplicacao << endl;
	cout << "Diferença = " << subtracao << endl;
	cout << "Quociente = " << divisao << endl;

	return 0;
}