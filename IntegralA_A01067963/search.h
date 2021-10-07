//
// Created by droid on 9/19/2021.
//
// Avance 1

#ifndef INTEGRALA_ALGORITMOS_DE_ORDENAMIENTO_SEARCH_H
#define INTEGRALA_ALGORITMOS_DE_ORDENAMIENTO_SEARCH_H

#endif //INTEGRALA_ALGORITMOS_DE_ORDENAMIENTO_SEARCH_H

#include <list>
#include <vector>
using namespace std;

template <class T>

class Search{
public:
    int bsq_seq(vector<T> v, int val){
        int mid = 0;
        int low = 0;
        int high = v.size();

        while (low < high){ // Caso base: Si low = high, ya no entra al ciclo.
            mid = (high + low) / 2;

            if (val == v[mid]){ // Caso en el que encuentra el valor deseado.
                return v[mid];
            } else if (val > v[mid]){   // Caso en el que el valor deseado está entre el high y mid.
                low = mid + 1;
            } else if (val < v[mid]){   // Caso en el que el valor deseado está entre el low y mid.
                high = mid - 1;
            }
        }
        return v[low];  // Se regresa el valor dentro del vector, no la posición.
    }
};