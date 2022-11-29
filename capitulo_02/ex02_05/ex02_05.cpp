// ex02_05.cpp : Utilizando as instruções que você escreveu no Exercício 2.4, 
// escreva um programa completo que calcula e exibe o produto de três inteiros.
// Onde apropriado, adicionar comentários ao código.[Nota:Você precisará escrever as declarações using necessárias.]
// Autor: Anderson Misson

#include<iostream>	// permite ao programa realizar entrada e saída
#include<locale>	// permite utilizar texto em português.

// using namespace std - é mais pratico do que ficar declarando cada função  

using std::cout; // o programa utiliza cout
using std::cin;  // o programam utiliza cin
using std::endl; // o programa utiliza endl

// a função main inicia a execução do programa
int main() {

	setlocale(LC_ALL, "pt-BR.UTF-8");
	int x; // Primeiro Inteiro A Multiplicar
	int y; // Segundo Inteiro A Multiplicar
	int z; // Terceito Inteiro A Multiplicar
	int resultado; // O produto dos três inteiros

	cout << "Entre com os três inteiros: "; // Solicita dados ao usuário
	cin >> x >> y >> z; // lê três inteiros do usuário
	resultado = x * y * z; // Multiplica os três inteiros, resultado de armazenamento
	cout << "O Produto é " << resultado << endl; // Imprime o resultado; termina a linha

	return 0; // indica que o programa executou com sucesso

} // fim da função main