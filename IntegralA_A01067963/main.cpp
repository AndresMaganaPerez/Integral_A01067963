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
#include "heap.h"

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


int main() {
    //int array_calif[]={98, 75, 85, 84, 77, 62, 54, 93, 87, 94, 50, 82, 81, 95, 92, 78, 97, 89, 90, 72};
    vector<int> calif_ordenadas;
    Sorts<int> sort;
    Search<int> search;
    DList<int> l1;
    int i, num, op, n;
    string nom, impresion, splayRemove;
    int valor_buscado, resp_bsq, eliminar;

    cout<<"Ingrese su nombre: ";
    cin>>nom;

    cout<<"Bienvenido a la plataforma de calificaciones Profesor "<<nom<<"."<<"\n";
    cout<<"Por favor ingrese el numero de calificaciones que desea agregar al sistema:"<<"\n";
    cin>>n;

    Heap<int> califHeap(n);

    int *array_calif = new int[n];      // Reserva tantos espacios de memoria como lo indica el usuario.
    cout<<"Ingrese las calificaciones: "<<"\n";
    for (i = 0; i < n; i++){
        cin>>array_calif[i];
    }
    cout<<"El sistema guardo las siguientes calificaciones: "<<"\n"<<"\n";

    // vector<int> calificaciones(array_calif, array_calif + sizeof(array_calif) / sizeof(array_calif[0]));
    vector<int> calificaciones(array_calif, array_calif + n);
    cout<<arrayToString(calificaciones)<<"\n";

    while (true) {
        cout << "Ahora seleccione la operacion que quiere realizar (num. de opcion):" << "\n";
        cout << "1. Ingresar otra calificacion." << "\n";
        cout << "2. Ordenar la lista de menor a mayor." << "\n";
        cout << "3. Buscar alguna calificacion en la lista." << "\n";
        cout << "4. Eliminar una calificacion" << "\n";
        cout << "5. Salir" << "\n";
        cin >> op;
        cout << "\n";

        // Lista Doblemente Ligada - Agrega nueva Calificación.
        int j;
        if (op == 1) {
            for (j = 0; j < calificaciones.size(); j++) {
                int val;
                val = calificaciones[j];
                l1.insertion(val);
            }
            cout << "Ingrese la nueva calificacion: ";
            cin >> num;
            l1.insertion(num);
            cout << "La nueva lista doblemente ligada es: " << "\n";
            cout << l1.toString() << "\n";
            cout << "\n";
            continue;
        }

        // Sorts
        if (op == 2) {
            calif_ordenadas = sort.ordenaMerge(calificaciones);
            impresion = arrayToString(calif_ordenadas);
            cout << impresion << "\n";
        }

        // Search
        if (op == 3) {
            calif_ordenadas = sort.ordenaMerge(calificaciones);
            cout << "Ingrese el valor a buscar: ";
            cin >> valor_buscado;
            resp_bsq = search.bsq_seq(calif_ordenadas, valor_buscado);
            if (resp_bsq == -1) {
                cout << "No existe la calificacion en la lista." << "\n";
                cout<<"\n";
            } else {
                cout << "Valor encontrado: " << resp_bsq << "\n";
                cout << "\n";
            }
            continue;
        }

        // Splay
        if (op == 4) {
            int j;
            // for (j = calificaciones.size()-1; j >= 0; j--) {
            for (j = 0; j < calificaciones.size(); j++) {
                int val;
                val = calificaciones[j];
                califHeap.push(val);
            }
            cout << arrayToString(calificaciones) << "\n";
            califHeap.pop();
            cout << califHeap.toString();
            cout << "\n";
            continue;
        }
        // Termina opciones.
        if (op == 5){
            break;
        }
    }

    return 0;
}
