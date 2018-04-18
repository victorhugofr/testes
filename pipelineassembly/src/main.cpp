#include <string>
#include <iostream>
#include "../include/comando.hpp"
using namespace std;
int main(){
	string instrucao;
	int i=0;
	Comando *lista;
	lista=new Comando[1000];
	while(instrucao.compare("EXIT") ){
		getline(cin, instrucao);
		lista[i].comando=instrucao;
		cout<<"IF ID EX MEM WB ----"<<lista[i].comando<<endl;
		cout<<"   ";
		if(i-1>=0){
		if((lista[i].comando[0]=='a' && lista[i].comando[1]=='d' && lista[i].comando[2]=='d'&&lista[i-1].comando[0]=='a'&&lista[i-1].comando[1]=='d'&&lista[i-1].comando[2]=='d')||(lista[i].comando[0]=='s'&&lista[i].comando[1]=='u'&&lista[i].comando[2]=='b'&&lista[i-1].comando[0]=='s'&&lista[i-1].comando[1]=='u'&&lista[i-1].comando[2]=='b') ||(lista[i].comando[0]=='a'&&lista[i].comando[1]=='d'&&lista[i].comando[2]=='d'&&lista[i-1].comando[0]=='s'&&lista[i-1].comando[1]=='u'&&lista[i-1].comando[2]=='b')||(lista[i].comando[0]=='s'&&lista[i].comando[1]=='u'&&lista[i].comando[2]=='b'&&lista[i-1].comando[0]=='a'&&lista[i-1].comando[1]=='d'&&lista[i-1].comando[2]=='d')){
			if((lista[i].comando[5]==lista[i-1].comando[5] && lista[i].comando[6]==lista[i-1].comando[6] )|| (lista[i].comando[5]==lista[i-1].comando[10] &&lista[i].comando[6]==lista[i-1].comando[11]) || (lista[i].comando[5]==lista[i-1].comando[15]&&lista[i].comando[6]==lista[i-1].comando[16])){
				cout<<"IF ID EX MEM WB ----"<<lista[i-1].comando<<endl;
				cout<<"             IF ID EX  MEM WB-------"<<lista[i].comando<<endl;
			}
		}
		else{
			cout<<"IF ID EX MEM WB ----"<<lista[i].comando<<endl;
			cout<<"   ";
		}
	}
		i++;
	}
	return 0;
}