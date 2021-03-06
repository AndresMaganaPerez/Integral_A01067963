// Integral Casos de Prueba
//
// Autor: Andrés Magaña Pérez - A01067963
// Fecha: 2-dic-2021
//

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
    int array_calif[]={98, 75, 85, 84, 77, 62, 54, 93, 87, 94, 50, 82, 81, 95, 92, 78, 97, 89, 90, 72};
    vector<int> calificaciones(array_calif, array_calif + sizeof(array_calif) / sizeof(int));
    vector<int> calif_ordenadas;
    Sorts<int> sort;
    Search<int> search;
    SplayTree<int> splay;
    int valor_buscado, valor2_buscado;

    string sort_ans = "[50, 54, 62, 72, 75, 77, 78, 81, 82, 84, 85, 87, 89, 90, 92, 93, 94, 95, 97, 98]";
    string bsq_ans = "89";
    string bsq2_ans = "-1";

    calif_ordenadas = sort.ordenaMerge(calificaciones);
    valor_buscado = search.bsq_seq(calif_ordenadas, 89);
    valor2_buscado = search.bsq_seq(calif_ordenadas, 40);

    // Caso prueba Ordenamiento
    cout << "\n" <<"1.- Ordenamiento - esperada " << sort_ans << "\n programa " << arrayToString(calif_ordenadas) << "\n";
    cout <<	(!sort_ans.compare(arrayToString(calif_ordenadas)) ? "success\n" : "fail\n");

    // Valor en el arreglo
    cout << "\n" <<"2.- Busqueda - esperada " << bsq_ans << "\n programa " << valor_buscado << "\n";
    cout <<	(!bsq_ans.compare(to_string(valor_buscado)) ? "success\n" : "fail\n");

    // Valor no existente en arreglo
    cout << "\n" <<"3.- Busqueda - esperada " << "-1" << "\n programa " << valor2_buscado << "\n";
    cout <<	(!bsq2_ans.compare(to_string(valor2_buscado)) ? "success\n" : "fail\n");

    // Lista Doblemente Ligada
    DList<int> l1;
    int i;

    for(i = 0; i < calif_ordenadas.size(); i++){
        int val;
        val = calif_ordenadas[i];
        l1.insertion(val);
    }

    // Insertion List
    cout << "\n" <<"4.- Lista - esperada " << "[50, 54, 62, 72, 75, 77, 78, 81, 82, 84, 85, 87, 89, 90, 92, 93, 94, 95, 97, 98]" << "\n programa " << l1.toString() << "\n";
    cout <<	(!sort_ans.compare(l1.toString()) ? "success\n" : "fail\n");

    //Delete First
    string l1_ans = "[54, 62, 72, 75, 77, 78, 81, 82, 84, 85, 87, 89, 90, 92, 93, 94, 95, 97, 98]";
    l1.deleteFirst();
    cout << "\n" <<"5.- Lista - esperada " << "[54, 62, 72, 75, 77, 78, 81, 82, 84, 85, 87, 89, 90, 92, 93, 94, 95, 97, 98]" << "\n programa " << l1.toString() << "\n";
    cout <<	(!l1_ans.compare(l1.toString()) ? "success\n" : "fail\n");

    //Delete Last
    string l2_ans = "[54, 62, 72, 75, 77, 78, 81, 82, 84, 85, 87, 89, 90, 92, 93, 94, 95, 97]";
    l1.deleteLast();
    cout << "\n" <<"6.- Lista - esperada " << "[54, 62, 72, 75, 77, 78, 81, 82, 84, 85, 87, 89, 90, 92, 93, 94, 95, 97]" << "\n programa " << l1.toString() << "\n";
    cout <<	(!l2_ans.compare(l1.toString()) ? "success\n" : "fail\n");

    //Delete At
    string l3_ans = "[54, 62, 72, 75, 77, 81, 82, 84, 85, 87, 89, 90, 92, 93, 94, 95, 97]";
    l1.deleteAt(5);
    cout << "\n" <<"7.- Lista - esperada " << "[54, 62, 72, 75, 77, 81, 82, 84, 85, 87, 89, 90, 92, 93, 94, 95, 97]" << "\n programa " << l1.toString() << "\n";
    cout <<	(!l3_ans.compare(l1.toString()) ? "success\n" : "fail\n");

    //Search val
    string s_ans = "75";
    string m = to_string(l1.val(3));
    cout << "\n" <<"8.- Lista - esperada " << "75" << "\n programa " << m << "\n";
    cout <<	(!s_ans.compare(m) ? "success\n" : "fail\n");


    int val;
    for(i = 0; i < l1.Size(); i++){
        val = l1.val(i);
        splay.add(val);
    }

    // Splay Add
    string sAdd_ans = "[54 62 72 75 77 81 82 84 85 87 89 90 92 93 94 95 97]";
    cout << "\n" <<"9.- Arbol - esperada " << "[54 62 72 75 77 81 82 84 85 87 89 90 92 93 94 95 97]" << "\n programa " << splay.inorder() << "\n";
    cout <<	(!sAdd_ans.compare(splay.inorder()) ? "success\n" : "fail\n");

    // Splay Find
    string f_ans = "1";
    cout << "\n" <<"10.- Arbol - esperada " << "1" << "\n programa " << splay.find(75) << "\n";
    cout <<	(!f_ans.compare(to_string(splay.find(75))) ? "success\n" : "fail\n");

    string f2_ans = "0";
    cout << "\n" <<"12.- Arbol - esperada " << "0" << "\n programa " << splay.find(11) << "\n";
    cout <<	(!f2_ans.compare(to_string(splay.find(11))) ? "success\n" : "fail\n");


    return 0;
}