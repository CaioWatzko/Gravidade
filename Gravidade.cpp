#include <iostream>
#include <stdlib.h>
using namespace std;

float planeta(float peso){

	float pesoTerra=peso, tot=0;
	int opc=0, x=0, y=0;
	
	while (x==0){
		
		system ("cls");
		
		cout << "Ver seu peso em\n\n";
		cout << "\n1-Mercurio";
		cout << "\n2-Venus";
		cout << "\n3-Marte";
		cout << "\n4-Jupiter";
		cout << "\n5-Saturno";
		cout << "\n6-Urano";
		cout << "\n7-Netuno";
		cout << "\n8-Mudar Peso\n\n";
		cin >> opc;
		
		switch (opc){
			case 1:
				tot = pesoTerra * 0.376;
				opc = 0;
				
				system ("cls");
				
				cout << "Seu peso em Mercurio e " << tot;
				cout << "\n\n1-Ver o mesmo peso em outro planeta";
				cout << "\n2-Inserir novo peso\n\n";
				cin >> opc;
				
				if (opc == 1){
					x = 0;
				}else if (opc == 2){
					x++;
				}
				break;
			case 2:
				tot = pesoTerra * 0.903;
				opc = 0;
				
				system ("cls");
				
				cout << "Seu peso em Venus e " << tot;
				cout << "\n\n1-Ver o mesmo peso em outro planeta";
				cout << "\n2-Inserir novo peso\n\n";
				cin >> opc;
				
				if (opc == 1){
					x = 0;
				}else if (opc == 2){
					x++;
				}
				break;
			case 3:
				tot = pesoTerra * 0.380;
				opc = 0;
				
				system ("cls");
				
				cout << "Seu peso em Marte e " << tot;
				cout << "\n\n1-Ver o mesmo peso em outro planeta";
				cout << "\n2-Inserir novo peso\n\n";
				cin >> opc;
				
				if (opc == 1){
					x = 0;
				}else if (opc == 2){
					x++;
				}
				break;
			case 4:
				tot = pesoTerra * 2.340;
				opc = 0;
				
				system ("cls");
				
				cout << "Seu peso em Jupiter e " << tot;
				cout << "\n\n1-Ver o mesmo peso em outro planeta";
				cout << "\n2-Inserir novo peso\n\n";
				cin >> opc;
				
				if (opc == 1){
					x = 0;
				}else if (opc == 2){
					x++;
				}
				break;
			case 5:
				tot = pesoTerra * 1.160;
				opc = 0;
				
				system ("cls");
				
				cout << "Seu peso em Saturno e " << tot;
				cout << "\n\n1-Ver o mesmo peso em outro planeta";
				cout << "\n2-Inserir novo peso\n\n";
				cin >> opc;
				
				if (opc == 1){
					x = 0;
				}else if (opc == 2){
					x++;
				}
				break;
			case 6:
				tot = pesoTerra * 1.150;
				opc = 0;
				
				system ("cls");
				
				cout << "Seu peso em Urano e " << tot;
				cout << "\n\n1-Ver o mesmo peso em outro planeta";
				cout << "\n2-Inserir novo peso\n\n";
				cin >> opc;
				
				if (opc == 1){
					x = 0;
				}else if (opc == 2){
					x++;
				}
				break;
			case 7: 
				tot = pesoTerra * 1.190;
				opc = 0;
				
				system ("cls");
				
				cout << "Seu peso em Netuno e " << tot;
				cout << "\n\n1-Ver o mesmo peso em outro planeta";
				cout << "\n2-Inserir novo peso\n\n";
				cin >> opc;
				
				if (opc == 1){
					x = 0;
				}else if (opc == 2){
					x++;
				}
				break;
			case 8:
				x++;
				break;
		}
		
		
		
	}
}


int main(){
	
	float peso=0, x=0;
	
	while (peso != 11.55){
		
		system ("cls");
		
		cout << "Se quiser inserir um decimal, insira com PONTO, nao com VIRGULA\n\n";
		cout << "Informe seu peso terrestre, em quilos: ";
		cin >> peso;
		
		planeta(peso);
	}
	
	return 0;
}
