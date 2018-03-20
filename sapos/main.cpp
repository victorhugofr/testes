#include <iostream>
#include <ctime> 
#include <cstdlib>
#include "sapo.h"
#include "corrida.h"
#include "imprimir.h"
using namespace std;
/**
 * @file  main.cpp
 * @brief Exercicio da corrida de sapos
 * @details Uma corrida de sapos que o a distancia percorrida dos pulos do sapo são aleatórias, ganha quem ultrapassar a chegada primeiro.
 * @author Victor Hugo Freire Ramalho
 * @since 08/03/2018
 * @date 12/03/2018
 * @copyright Victor Hugo corporacoes
*/
int main(){
	Sapo *sapo;
	sapo=new Sapo[3];
	char name1[30],name2[30],name3[30];
	int distancia = 30,ganhador;
	/**Determinação dos nomes dos sapos*/
	cout << "Digite o nome do sapo 1: " ;
	cin.getline (name1,30);
	sapo[0].setname(name1);
	cout << "Digite o nome do sapo 2: " ;
	cin.getline (name2,30);
	sapo[1].setname(name2);
	cout << "Digite o nome do sapo 3: " ;
	cin.getline (name3,30);
	sapo[2].setname(name3);
	ganhador=corrida(distancia,sapo);
	imprimir(ganhador,sapo);
	return 0;
}