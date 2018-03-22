#include "sapo.h"
#include <iostream>
#include <cstring>

int Sapo::getpulos(){ return pulos;} /**Funcao que retorna a quantidade de pulos da classe requisitada*/
void Sapo::setpulos(int p){pulos = p;} /**Funcao que determina a quantidade de pulos da classe requisitada*/
int Sapo::getdistancia(){ return distancia;} /**Funcao que retorna a distância percorrida da classe requisitada*/
void Sapo::setdistancia(int d){distancia = d;} /**Funcao que determina a distância percorrida da classe requisitada*/
char* Sapo::getname(){return nome;}
void Sapo::setname(char*name){nome=name;}