/*
*  autor: Benjamin Valdes Aguirre
*  fecha: Diciembre 2020
*  programa: act 4.1 Implementacion Grafos
*  desc: estos programas son solciones parciales a algunos de
*  las actividades planteadas en el curso TC1031
*
*/

#include <iostream>
#include <fstream>
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
    string resp, in;
    int op, op2, resp2, start, goal;

    // Inicio Programa - Bienvenida y Proposito
    cout << "Ingresa tu primer nombre sin espacios:  " << "\n";
    cin >> resp;
    cout << "Bienvenido al Laboratorio ITESM " << resp << "\n";
    cout << "En este laboratorio podras analizar algunas moleculas, las conexiones entre componentes, y numero de componentes que tiene." << "\n";
    cout << "Inserta i + enter para iniciar: "<<"\n";
    cin >> in;
    cout << "\n";

    // Menú moléculas
    if (in == "i"){
        while (true){
            cout << "Ahora seleccione la operacion que quiere realizar (num. de opcion + enter):" << "\n";
            cout << "1. Molecula Ribosa." << "\n";
            cout << "2. Molecula Acido Barbiturico." << "\n";
            cout << "3. Molecula Trinitrotolueno." << "\n";
            cout << "4. Deja una molecula que quieras que agregemos proximamente." << "\n";
            cout << "5. Salir" << "\n";
            cin >> op;
            cout << "\n";

            // Molecula Ribosa
            if (op == 1){
                Graph ribosa;

                ribosa.loadGraphList("ribosa.txt", 4, 4);
                ribosa.loadGraphMat("ribosa.txt", 4, 4);

                Quadratic<string, int> hashRibosa(4, string("empty"), myHash);

                hashRibosa.put(string("O"), 1);
                hashRibosa.put(string("H"), 4);
                hashRibosa.put(string("OH"), 3);
                hashRibosa.put(string("CH2OH"), 1);

                while (true) {
                    cout << "Ahora seleccione la operacion que quiere realizar (num. de opcion):" << "\n";
                    cout << "1. Mostrar conexion entre atomos." << "\n";
                    cout << "2. Mostrar camino entre atomos" << "\n";
                    cout << "3. Mostrar numeros de moleculas dentro de ella." << "\n";
                    cout << "4. Regresar" << "\n";
                    cin >> op2;
                    cout << "\n";

                    // Conexión entre átomos
                    if (op2 == 1){
                        cout << "0 = O" << "\n";
                        cout << "1 = H" << "\n";
                        cout << "2 = OH" << "\n";
                        cout << "3 = CH2OH" << "\n";
                        cout << "\n";
                        cout << ribosa.printAdjMat_clean();
                        cout << "\n";
                    }

                    // Camino entre átomos
                    if (op2 == 2){
                        cout << "0 = O" << "\n";
                        cout << "1 = H" << "\n";
                        cout << "2 = OH" << "\n";
                        cout << "3 = CH2OH" << "\n";
                        cout << "\n";
                        cout << "Ingresa de que atomo quieres empezar (numero de opcion): ";
                        cin >> start;
                        cout << "\n";
                        cout << "Ingresa a que atomo quieres llegar (numero de opcion): ";
                        cin >> goal;
                        cout << "\n";

                        cout << ribosa.DFS(start, goal);
                        cout << "\n";
                    }

                    // Número de moléculas
                    if (op2 == 3){
                        cout << hashRibosa.toString().c_str() << "\n";
                        cout << "\n";
                    }

                    // Regresar
                    if (op2 == 4){
                        break;
                    }
                    continue;
                }
            }
            if (op == 2){
                Graph aBarbi;

                aBarbi.loadGraphList("a-barbiturico.txt", 4, 4);
                aBarbi.loadGraphMat("a-barbiturico.txt", 4, 4);

                Quadratic<string, int> hashBarbi(3, string("empty"), myHash);

                hashBarbi.put(string("O"), 3);
                hashBarbi.put(string("NH"), 1);
                hashBarbi.put(string("HN"), 1);

                while (true) {
                    cout << "Ahora seleccione la operacion que quiere realizar (num. de opcion):" << "\n";
                    cout << "1. Mostrar conexion entre atomos." << "\n";
                    cout << "2. Mostrar camino entre atomos" << "\n";
                    cout << "3. Mostrar numeros de moleculas dentro de ella." << "\n";
                    cout << "4. Regresar" << "\n";
                    cin >> op2;
                    cout << "\n";

                    // Conexión entre átomos
                    if (op2 == 1){
                        cout << "0 = O" << "\n";
                        cout << "1 = NH" << "\n";
                        cout << "2 = HN" << "\n";
                        cout << "3 = O" << "\n";
                        cout << "\n";
                        cout << aBarbi.printAdjMat_clean();
                        cout << "\n";
                    }

                    // Camino entre átomos
                    if (op2 == 2){
                        cout << "0 = O" << "\n";
                        cout << "1 = NH" << "\n";
                        cout << "2 = HN" << "\n";
                        cout << "3 = O" << "\n";
                        cout << "\n";
                        cout << "Ingresa de que atomo quieres empezar (numero de opcion): ";
                        cin >> start;
                        cout << "\n";
                        cout << "Ingresa a que atomo quieres llegar (numero de opcion): ";
                        cin >> goal;
                        cout << "\n";

                        cout << aBarbi.DFS(start, goal);
                        cout << "\n";
                    }

                    // Número de moléculas
                    if (op2 == 3){
                        cout << hashBarbi.toString().c_str() << "\n";
                        cout << "\n";
                    }

                    // Regresar
                    if (op2 == 4){
                        break;
                    }
                }
                continue;
            }

            if (op == 3){
                Graph trini;

                trini.loadGraphList("a-barbiturico.txt", 4, 4);
                trini.loadGraphMat("a-barbiturico.txt", 4, 4);

                Quadratic<string, int> hashTrini(4, string("empty"), myHash);

                hashTrini.put(string("CH3"), 1);
                hashTrini.put(string("O2N"), 1);
                hashTrini.put(string("NO2"), 1);
                hashTrini.put(string("NO3"), 1);

                while (true) {
                    cout << "Ahora seleccione la operacion que quiere realizar (num. de opcion):" << "\n";
                    cout << "1. Mostrar conexion entre atomos." << "\n";
                    cout << "2. Mostrar camino entre atomos" << "\n";
                    cout << "3. Mostrar numeros de moleculas dentro de ella." << "\n";
                    cout << "4. Regresar" << "\n";
                    cin >> op2;
                    cout << "\n";

                    // Conexión entre átomos
                    if (op2 == 1){
                        cout << "0 = CH3" << "\n";
                        cout << "1 = O2N" << "\n";
                        cout << "2 = NO2" << "\n";
                        cout << "3 = NO3" << "\n";
                        cout << "\n";
                        cout << trini.printAdjMat_clean();
                        cout << "\n";
                    }

                    // Camino entre átomos
                    if (op2 == 2){
                        cout << "0 = CH3" << "\n";
                        cout << "1 = O2N" << "\n";
                        cout << "2 = NO2" << "\n";
                        cout << "3 = NO3" << "\n";
                        cout << "\n";
                        cout << "Ingresa de que atomo quieres empezar (numero de opcion): ";
                        cin >> start;
                        cout << "\n";
                        cout << "Ingresa a que atomo quieres llegar (numero de opcion): ";
                        cin >> goal;
                        cout << "\n";

                        cout << trini.DFS(start, goal);
                        cout << "\n";
                    }

                    // Número de moléculas
                    if (op2 == 3){
                        cout << hashTrini.toString().c_str() << "\n";
                        cout << "\n";
                    }

                    // Regresar
                    if (op2 == 4){
                        break;
                    }
                }
                continue;
            }

            if (op == 4){
                string mol;

                // Se crea nuevo archivo con las peticiones de moléculas.
                ofstream file("peticiones-moleculas.txt");

                // Se pide la molécula que desea agregar
                cout << "Ingrese el nombre de la molecula que desearia que agreguemos al sistema: " << "\n";
                cout << "**Sin espacios, puede utilizar - en vez de espacio" << "\n";
                cin >> mol;

                // Se escribe dentro del documento
                file << mol;

                // Se cierra el documento
                file.close();

                continue;
            }

            if (op == 5){
                break;
            }
        }
    } cout << "¡Nos vemos pronto!";
}