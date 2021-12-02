/*
*  autor: Benjamin Valdes Aguirre
*  fecha: Diciembre 2020
*  programa: act 4.1 Implementacion Grafos
*  desc: estos programas son solciones parciales a algunos de
*  las actividades planteadas en el curso TC1031
*
*/

#include <iostream>
#include <cstring>
#include "graph.h"
#include "quadratic.h"

using namespace std;

unsigned int myHash(const string s) {
    unsigned int acum = 0;
    for (unsigned int i = 0; i < s.size(); i++) {
        acum += (int) s[i];
    }
    return acum;
}

int main(int argc, char* argv[]) {
    string resp;
    int op, start, goal;

    Graph zoo;

    zoo.loadGraphList("zoo.txt", 6, 6);
    zoo.loadGraphMat("zoo.txt", 6, 6);

    cout << "Bienvenido al Zoologico ITESM" << "\n";
    cout << "Ingresa si eres Administrador o Personal (Escribir igual la respuesta): " << "\n";
    cin >> resp;

    // Menú Administrador
    if (resp == "Administrador"){
        while (true) {

            cout << "Ahora seleccione la operacion que quiere realizar (num. de opcion):" << "\n";
            cout << "1. Mostrar rutas de zoologico." << "\n";
            cout << "2. Agregar futura ruta de zoologico." << "\n";
            cout << "3. Buscar rutas entre secciones." << "\n";
            cout << "4. Mostrar cantidad de animales por seccion." << "\n";
            cout << "5. Salir" << "\n";
            cin >> op;
            cout << "\n";

            // Mostrar grafo en matriz
            if (op == 1){

                cout<< "0. Reptiliario"<<"\n";
                cout<< "1. Gorilas"<<"\n";
                cout<< "2. Girafas"<<"\n";
                cout<< "3. Tigres"<<"\n";
                cout<< "4. Lobos"<<"\n";
                cout<< "5. Focas"<<"\n";
                cout<< "\n";
                cout<<"Donde exista un uno en la matriz significa que existe la ruta entre dichas secciones."<<"\n";
                cout<<"\n";


                cout << zoo.printAdjMat_clean();

                continue;
            }

            if (op == 2){
                continue;       // TODO: implementar agregar lugar con conexiones
            }

            // DFS
            if (op == 3){
                cout << "0. Reptiliario" << "\n";
                cout << "1. Gorilas" << "\n";
                cout << "2. Girafas" << "\n";
                cout << "3. Tigres" << "\n";
                cout << "4. Lobos" << "\n";
                cout << "5. Focas" << "\n";
                cout << "\n";
                cout << "Ingresa el punto de partida de la ruta en número de la opción: "<< "\n";
                cin >> start;
                cout << "\n";
                cout << "Ingresa el punto de final de la ruta en número de la opción: "<< "\n";
                cin >> goal;
                cout << "\n";
                cout << "Tus posibles rutas son: " << "\n";
                cout << zoo.DFS(start, goal);
            }

            // Hash
            if (op == 4) {
                Quadratic<string, int> quad_hash(6, string("empty"), myHash);

                quad_hash.put(string("reptiliario"), 10);
                quad_hash.put(string("gorilas"), 3);
                quad_hash.put(string("girafas"), 2);
                quad_hash.put(string("tigres"), 4);
                quad_hash.put(string("lobos"), 6);
                quad_hash.put(string("focas"), 5);

                cout << quad_hash.toString().c_str();
                continue;
            }

            // Salir
            if (op == 5){
                break;
            }
        }
    }

    // Menú Personal
    if (resp == "Personal"){
        while (true) {
            cout << "Ahora seleccione la operacion que quiere realizar (num. de opcion):" << "\n";
            cout << "1. Mostrar rutas de zoologico." << "\n";
            cout << "2. Buscar rutas entre secciones." << "\n";
            cout << "3. Mostrar secciones de animales." << "\n";
            cout << "4. Salir" << "\n";
            cin >> op;
            cout << "\n";

            // Mostrar grafo en matriz
            if (op == 1){

                cout<< "0. Reptiliario"<<"\n";
                cout<< "1. Gorilas"<<"\n";
                cout<< "2. Girafas"<<"\n";
                cout<< "3. Tigres"<<"\n";
                cout<< "4. Lobos"<<"\n";
                cout<< "5. Focas"<<"\n";
                cout<< "\n";
                cout<<"Donde exista un uno en la matriz significa que existe la ruta entre dichas secciones."<<"\n";
                cout<<"\n";


                cout << zoo.printAdjMat_clean();

                continue;
            }

            // BFS
            if (op == 2){
                cout << "0. Reptiliario" << "\n";
                cout << "1. Gorilas" << "\n";
                cout << "2. Girafas" << "\n";
                cout << "3. Tigres" << "\n";
                cout << "4. Lobos" << "\n";
                cout << "5. Focas" << "\n";
                cout << "\n";
                cout << "Ingresa el punto de partida de la ruta en número de la opción: "<< "\n";
                cin >> start;
                cout << "\n";
                cout << "Ingresa el punto de final de la ruta en número de la opción: "<< "\n";
                cin >> goal;
                cout << "\n";
                cout << "Tus posibles rutas son: " << "\n";
                cout << zoo.DFS(start, goal);

                continue;
            }

            // Hash
            if (op == 3) {
                Quadratic<string, int> quad_hash(6, string("empty"), myHash);

                quad_hash.put(string("reptiliario"), 10);
                quad_hash.put(string("gorilas"), 3);
                quad_hash.put(string("girafas"), 2);
                quad_hash.put(string("tigres"), 4);
                quad_hash.put(string("lobos"), 6);
                quad_hash.put(string("focas"), 5);

                cout << quad_hash.toString().c_str();
                continue;
            }

            if (op == 4){
                break;
            }
        }
    }

}