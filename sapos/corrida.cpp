#include <iostream>
#include <ctime> 
#include <cstdlib>
#include "sapo.h"
int corrida(int distancia, Sapo *sapo){
	int	d1=0,d2=0,d3=0,pulo1=0,pulo2=0,pulo3=0,ganhador;
	srand(time(0)); 
	while(d1<distancia || d2 <distancia || d3<distancia){
		/**A distancia do pulo será entre 1m e 3m*/
		d1+=rand()%3+1;
		sapo[0].setdistancia(d1); // determinacao da distancia do pulo no sapo1
		pulo1++; // contador de quantos pulos ele deu
		sapo[0].setpulos(pulo1);
		if(d1>=distancia){
			ganhador=1;
			break;
		}

		d2+=rand()%3+1;
		sapo[1].setdistancia(d2);
		pulo2++;
		sapo[1].setpulos(pulo2);
		if(d2>=distancia){
			ganhador=2;
			break;
		}

		d3+=rand()%3+1;
		sapo[2].setdistancia(d3);
		pulo3++;
		sapo[2].setpulos(pulo3);
		if(d3>=distancia){
			ganhador=3;
			break;
		}
	}
	return ganhador;
}