#include <string>
#include <iostream>
#include "../include/comando.hpp"
using namespace std;
int main(){
	string instrucao;
	string primeira("IF ID EX MEM WB ----");
	string semconflito("IF ID EX MEM WB ----");
	string conflito("             IF ID EX  MEM WB-------");
	int i=0;
	Comando *lista;
	lista=new Comando[1000];
	while(instrucao.compare("EXIT") ){
		getline(cin, instrucao);
		lista[i].comando=instrucao;
		lista[0].saida=primeira;
		if(i-1>=0){
		if((lista[i].comando[0]=='a' && lista[i].comando[1]=='d' && lista[i].comando[2]=='d'&&lista[i-1].comando[0]=='a'&&lista[i-1].comando[1]=='d'&&lista[i-1].comando[2]=='d')||(lista[i].comando[0]=='s'&&lista[i].comando[1]=='u'&&lista[i].comando[2]=='b'&&lista[i-1].comando[0]=='s'&&lista[i-1].comando[1]=='u'&&lista[i-1].comando[2]=='b') ||(lista[i].comando[0]=='a'&&lista[i].comando[1]=='d'&&lista[i].comando[2]=='d'&&lista[i-1].comando[0]=='s'&&lista[i-1].comando[1]=='u'&&lista[i-1].comando[2]=='b')||(lista[i].comando[0]=='s'&&lista[i].comando[1]=='u'&&lista[i].comando[2]=='b'&&lista[i-1].comando[0]=='a'&&lista[i-1].comando[1]=='d'&&lista[i-1].comando[2]=='d')){
			if((lista[i].comando[5]==lista[i-1].comando[5] && lista[i].comando[6]==lista[i-1].comando[6] )|| (lista[i].comando[5]==lista[i-1].comando[10] &&lista[i].comando[6]==lista[i-1].comando[11]) || (lista[i].comando[5]==lista[i-1].comando[15]&&lista[i].comando[6]==lista[i-1].comando[16])){
				lista[i-1].saida=semconflito;
				lista[i].saida=conflito;
			}
			else{
				lista[i].saida=semconflito;
			}
		}
		else{
			lista[i].saida=semconflito;
		}
	}
		i++;
	}
	for(int j=0;j<i-1;j++){
		cout<<lista[j].saida<<endl;
		cout<<"   ";
	}
	return 0;
}
/**
*add $t1, $t2, $t3
*add $t4, $t5, $t6
*/