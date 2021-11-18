//
// Created by droid on 11/18/2021.
// Integral B Grafos - Andrés Magaña Pérez / A01067963
// En este proyecto utilizaré los lugares que más comunmente voy en Querétaro a lo largo de la semana.
//

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
#include "Graph.h"

using namespace std;

int main(int argc, char* argv[]) {

    Graph data;
    Graph star;

    string g_ans, g_ans_2;
    string star_ans, star_ans_2;

    data.loadGraphList("data.txt", "depaDany", "juriquilla");

    data.loadGraphMat("data.txt", "juriquilla", "jurica");

    //g.printAdjList()
    g_ans ="vertex 0 : 1 4 vertex 1 : 0 2 3 vertex 2 : 1 vertex 3 : 1 6 vertex 4 : 0 5 vertex 5 : 4 vertex 6 : 3 ";
    cout << "\n" <<"1.- esperada " << g_ans << "\n programa " << data.printAdjList() << "\n";
    cout <<	(!g_ans.compare(data.printAdjList()) ? "success\n" : "fail\n");


    //g.printAdjMat()
    g_ans = "0 1 0 0 1 0 0 1 0 1 1 0 0 0 0 1 0 0 0 0 0 0 1 0 0 0 0 1 1 0 0 0 0 1 0 0 0 0 0 1 0 0 0 0 0 1 0 0 0 ";
    cout << "\n" <<"3.- esperada " << g_ans << "\n programa " << data.printAdjMat() << "\n";
    cout <<	(!g_ans.compare(data.printAdjMat()) ? "success\n" : "fail\n");

    //g.DFS(0,3);
    g_ans = "visited: 0 4 5 1 3 path: 0 1 3";
    g_ans_2 = "visited: 0 1 2 3 path: 0 1 3";
    cout << "\n" <<"5.- esperada 1 " << g_ans << "\n esperada 2 " << g_ans_2 <<"\n programa " << data.DFS(0,3) << "\n";
    cout <<	( (!g_ans.compare(data.DFS(0,3)) || !g_ans_2.compare(data.DFS(0,3))) ? "success\n" : "fail\n");

    //g.BFS(0,3);
    g_ans = "visited: 0 1 4 2 3 path: 0 1 3";
    g_ans_2 = "visited: 0 4 1 5 3 path: 0 1 3";
    cout << "\n" <<"7.- esperada 1 " << g_ans << "\n esperada 2 " << g_ans_2 <<"\n programa " << data.BFS(0,3) << "\n";
    cout <<	(( !g_ans.compare(data.BFS(0,3)) || !g_ans_2.compare(data.BFS(0,3))) ? "success\n" : "fail\n");

}
