#include <iostream>
#include <array>
#include <ctime>

using namespace std;

const int tamanio = 64000; //Linea modificable, depende de cada ejecucion

//Imprime hasta num_elementos de un arreglo
void imprimirArreglo(array<int, tamanio> &arr, int num_elementos){
	
	for(int i=0; i< arr.size() && i< num_elementos; i++){
		
		cout << arr[i] <<endl;
	}
}

void ordenBurbuja(array<int, tamanio> &arr){
	
	int tamanio = arr.size();
	bool desordenado = true;
	for(int pase= 0; pase<tamanio -1 && desordenado; pase++){
		
		desordenado = false;
		for(int j=0; j<tamanio -1 -pase; j++){
			
			if(arr[j] > arr[j+1]){
				desordenado = true;
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				
			}
		}
	}
}

int main(){
	
	array<int, tamanio> miArreglo;
	
	//leer elementos
	for(int i=0; i<tamanio; i++){
		
		cin >> miArreglo[i];
	}
	
	clock_t inicio = clock();
	ordenBurbuja(miArreglo);
	clock_t fin = clock();
	
	double tiempoSegundos = double(fin-inicio) / CLOCKS_PER_SEC; //tiempo transcurrido
	
	cout << "Cantidad de elementos: " << miArreglo.size() <<endl;
	cout << "Tiempo transcurrido: "  << tiempoSegundos << "Segundos" << endl;
	
	return 0;
}




















