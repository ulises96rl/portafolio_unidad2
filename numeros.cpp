#include <iostream>
#include <array>

using namespace std;

const int tamanio = 10; //numero de elementos

//imprime hasta num:elementos de un arreglo
void imprimirArreglo(array<int, tamanio> &arr, int num_elementos){
	
	for(int i=0; i<arr.size() && i < num_elementos; i++){
		
		cout << arr[i] << endl;
	}
}

int main(){
	
	array<int, tamanio> miArreglo;
	for(int i=0; i<tamanio; i++){
		
		cin >> miArreglo[i];
	}
	
	cout << "Cantidad de elementos: " << miArreglo.size() << endl;
	cout << "Primeros 10 elementos: " <<endl;
	
	imprimirArreglo(miArreglo, 10);
	
	return 0;
}
