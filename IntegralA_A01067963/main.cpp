// Programación de estructuras de datos y algoritmos fundamentales
// Integral A
// Andrés Magaña Pérez - A01067963
// 19 - Sept - 2021

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <cstring>
#include <string>
#include "sort.h"
#include "search.h"
#include "dlink.h"

using namespace std;

template <class T>
string arrayToString(const vector<T> &v) {
    stringstream aux;

    aux << "[" << v[0];
    for (int i = 1; i < v.size(); i++) {
        aux << ", " << v[i];
    }
    aux << "]";
    return aux.str();
}

// Read CSV

int main() {
    int array_calif[]={98, 75, 82, 84, 77, 62, 54, 93, 87, 94, 50, 82, 81, 95, 92, 78, 97, 89, 90, 72};
    vector<int> calificaciones(array_calif, array_calif + sizeof(array_calif) / sizeof(int));
    vector<int> calif_ordenadas;
    Sorts<int> sort;
    Search<int> search;
    int valor_buscado;

    calif_ordenadas = sort.ordenaMerge(calificaciones);

    valor_buscado = search.bsq_seq(calif_ordenadas, 89);

    cout << "Lista de calificaciones original: " << arrayToString(calificaciones) << "\n";
    cout << "Lista de calificaciones ordenada: " << arrayToString(calif_ordenadas) << "\n";
    cout << "Valor buscado: " << 89 << "\n";
    if(valor_buscado == -1){
        cout << "El valor no fue encontrado." << "\n";
    } else
    cout << "Valor obtenido: " << valor_buscado << "\n";

    // Lista Doblemente Ligada
    DList<int> l1;
    int i;

    for(i = 0; i < calif_ordenadas.size(); i++){
        int val;
        val = calif_ordenadas[i];
        l1.insertion(val);
    }
    cout<<"Lista Doblemente Ligada: "<<l1.toString()<< "\n";

    cout<<"Valor Buscado: "<<77<< "\n";
    cout<<"Valor Obtenido: "<<l1.search(77)<< "\n";

    cout<<"Indice a Eliminar: "<<2<< "\n";
    l1.deleteAt(2);
    cout<<"Lista con Indice Borrado: "<<l1.toString()<< "\n";

    return 0;
}
