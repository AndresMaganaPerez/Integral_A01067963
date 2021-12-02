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
#include "splay.h"

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
    vector<int> calif_ordenadas;
    Sorts<int> sort;
    Search<int> search;
    DList<int> l1;
    int i, num, op, n;
    string nom, impresion, splayRemove;
    int valor_buscado, resp_bsq, eliminar, val, s;

    cout<<"Ingrese su primer nombre: ";
    cin>>nom;

    cout<<"Bienvenido a la plataforma de calificaciones Profesor "<<nom<<"."<<"\n";
    cout<<"Por favor ingrese el numero de calificaciones que desea agregar al sistema:"<<"\n";
    cin>>n;

    cout<<"Ingrese las calificaciones de 0 a 100: "<<"\n";
    for (i = 0; i < n; i++){
        cin>>val;
        l1.insertion(val);
    }
    cout<<"El sistema guardo las siguientes calificaciones: "<<"\n"<<"\n";
    cout<<l1.toString()<<"\n";
    cout<<"\n";

    SplayTree<int> califSplay;

    while (true) {
        cout << "Seleccione la(s) materia(s) que imparte: " << "\n";
        cout << "Para detenerse ingrese -1." <<"\n";
        cout << "0. Matematicas" << "\n";
        cout << "1. Programacion" << "\n";
        cout << "2. Civica y Etica" << "\n";
        cout << "3. Arte" << "\n";
        cout << "4. Biologia" << "\n";
        cout << "5. Fisica" << "\n";
        cout << "\n";
        cout << "Numero de opcion + enter: ";
        cin >> s;
        if (s == -1){
            break;
        }
        califSplay.add(s);
        cout << "\n";
        cout << "\n";
    }

    // vector<int> calificaciones(array_calif, array_calif + sizeof(array_calif) / sizeof(array_calif[0]));
    // vector<int> calificaciones(array_calif, array_calif + n);
    // cout<<arrayToString(calificaciones)<<"\n";

    while (true) {
        cout << "Ahora seleccione la operacion que quiere realizar (num. de opcion):" << "\n";
        cout << "1. Ingresar otra calificacion." << "\n";
        cout << "2. Ordenar la lista de menor a mayor." << "\n";
        cout << "3. Buscar alguna calificacion en la lista." << "\n";
        cout << "4. Eliminar una calificacion" << "\n";
        cout << "5. Ver materias" << "\n";
        cout << "6. Salir" << "\n";
        cin >> op;
        cout << "\n";

        // Lista doblemente ligada - Agrega nueva Calificación.
        if (op == 1) {
            cout << "Ingrese la nueva calificacion: ";
            cin >> num;
            l1.insertion(num);
            cout << "La nueva lista es: " << "\n";
            cout << l1.toString() << "\n";
            cout << "\n";
            continue;
        }

        // Sorts - Ordena los elementos
        if (op == 2) {
            int *array_calif = new int[l1.Size()];      // Reserva tantos espacios de memoria como lo indica el usuario.
            for (i = 0; i < l1.Size(); i++){
                array_calif[i] = l1.val(i);
            }
            vector<int> calificaciones(array_calif, array_calif + l1.Size());
            calif_ordenadas = sort.ordenaMerge(calificaciones);
            impresion = arrayToString(calif_ordenadas);
            cout << impresion << "\n";
            cout<<"\n";
        }

        // Search - Busca elemento en la lista
        if (op == 3) {
            int *array_calif = new int[l1.Size()];      // Reserva tantos espacios de memoria como lo indica el usuario.
            for (i = 0; i < l1.Size(); i++){
                array_calif[i] = l1.val(i);
            }
            vector<int> calificaciones(array_calif, array_calif + l1.Size());
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

        // Lista Doblemente Ligada - Elimina Calificación
        if (op == 4) {
            int ind;
            cout<<l1.toString()<<"\n";
            cout<<"Ingresa el indice de la calificacion que desea eliminar (la lista comienza en 0): ";
            cin>>ind;
            l1.deleteAt(ind);
            cout<<"La nueva lista es la siguiente: "<<"\n";
            cout<<l1.toString()<<"\n";
            continue;
        }

        // Ver materias.
        if (op == 5){
            cout << "\n";
            cout << "Materias: "<<"\n";
            cout << "0. Matematicas" << "\n";
            cout << "1. Programacion" << "\n";
            cout << "2. Civica y Etica" << "\n";
            cout << "3. Arte" << "\n";
            cout << "4. Biologia" << "\n";
            cout << "5. Fisica" << "\n";
            string materias = califSplay.inorder();
            cout <<"Materias de Profesor " << nom << ": " << materias << "\n";
            cout << "\n";
            continue;
        }

        // Termina opciones.
        if (op == 6){
            break;
        }
    }

    return 0;
}
