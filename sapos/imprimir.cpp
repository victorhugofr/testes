#include <iostream>
#include "sapo.h"
#include "corrida.h"
using namespace std;
void imprimir(int ganhador, Sapo *sapo){
	if(ganhador==1){
		cout <<"***************************************************"<<endl;
		cout << "O sapo " << sapo[0].getname() << " venceu com " << sapo[0].getpulos() <<" pulos e percorreu "<< sapo[0].getdistancia()<< " metros" << endl;
		cout <<"***************************************************"<<endl;
		cout<<endl;
		cout << "Detalhes da corrida:" << endl;
		cout << sapo[0].getname()<<": "<< "Pulos: "<<sapo[0].getpulos()<<" Distância percorrida: "<<sapo[0].getdistancia()<<"m"<<endl;
		cout << sapo[1].getname()<<": "<< "Pulos: "<<sapo[1].getpulos()<<" Distância percorrida no momento da chegada do sapo1: "<<sapo[1].getdistancia()<<"m"<<endl;
		cout << sapo[2].getname()<<": "<< "Pulos: "<<sapo[2].getpulos()<<" Distância percorrida no momento da chegada do sapo1: "<<sapo[2].getdistancia()<<"m"<<endl;
	}
	if(ganhador==2){
		cout <<"***************************************************"<<endl;
		cout << "O sapo " << sapo[1].getname() << " venceu com " << sapo[1].getpulos() <<" pulos e percorreu "<< sapo[1].getdistancia() << " metros" << endl;
		cout <<"***************************************************"<<endl;
		cout << "Detalhes da corrida:" << endl;
		cout<<endl;
		cout << sapo[0].getname()<<": "<< "Pulos: "<<sapo[0].getpulos()<<" Distância percorrida no momento da chegada do sapo2: "<<sapo[0].getdistancia()<<"m"<<endl;
		cout << sapo[1].getname()<<": "<< "Pulos: "<<sapo[1].getpulos()<<" Distância percorrida: "<<sapo[1].getdistancia()<<"m"<<endl;
		cout << sapo[2].getname()<<": "<< "Pulos: "<<sapo[2].getpulos()<<" Distância percorrida no momento da chegada do sapo2: "<<sapo[2].getdistancia()<<"m"<<endl;
	}
	if(ganhador==3){
		cout <<"***************************************************"<<endl;
		cout << "O sapo " << sapo[2].getname() << " venceu com " << sapo[2].getpulos() <<" pulos e percorreu "<< sapo[2].getdistancia() << " metros" << endl;
		cout <<"***************************************************"<<endl;
		cout << "Detalhes da corrida:" << endl;
		cout <<endl;
		cout << sapo[0].getname()<<": "<< "Pulos: "<<sapo[0].getpulos()<<" Distância percorrida no momento da chegada do sapo3: "<<sapo[0].getdistancia()<<"m"<<endl;
		cout << sapo[1].getname()<<": "<< "Pulos: "<<sapo[1].getpulos()<<" Distância percorrida no momento de chegada do sapo3: "<<sapo[1].getdistancia()<<"m"<<endl;
		cout << sapo[2].getname()<<": "<< "Pulos: "<<sapo[2].getpulos()<<" Distância percorrida: "<<sapo[2].getdistancia()<<"m"<<endl;
	}
}