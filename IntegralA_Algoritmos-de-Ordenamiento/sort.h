//
// Created by droid on 9/19/2021.
//

#ifndef INTEGRALA_ALGORITMOS_DE_ORDENAMIENTO_SORT_H
#define INTEGRALA_ALGORITMOS_DE_ORDENAMIENTO_SORT_H

#endif //INTEGRALA_ALGORITMOS_DE_ORDENAMIENTO_SORT_H

#include <list>
#include <vector>
using namespace std;

template <class T>

class Sorts{

private:
//Copy Array
    void copyArray(vector<T> &A, vector<T> &B, int low, int high) {
        for (int i = low; i <= high; i++)
            A[i] = B[i];
    }

//Merge Array
    void mergeArray(vector<T> &A, vector<T> &B, int low, int mid, int high) {
        int i, j, k;

        i = low;
        j = mid + 1;
        k = low;    // Valor auxiliar. Rellena poco a poco el vector temporal.

        while (i <= mid &&j <= high){   // Ciclo donde low avanza hasta mid, y mid + avanza hasta high. Mientras no se pasen los limites predichos, se seguirá con la comparación.
            if (A[i] < A[j]){   // Se comparan los valores más chicos de ambos bloques, y se escriben en el vector temporal.
                B[k] = A[i];    // Si i es el menor lo ingresa en el vector temporal.
                i++;
            } else{
                B[k] = A[j];    // Si j es menor lo ingresa al vector temporal.
                j++;
            }
            k++;    // Aumenta la posición del valor auxiliar de k.
        }
        if (i > mid) {     // Se ingresan los valores restantes de j en el vector temporal, hasta topar con el high.
            for (; j <= high; j++){
                B[k] = A[j];
                k++;
            }
        } else {
            for (; i <= mid; i++){
                B[k++] = A[i];
            }
        }
    }

//Merge Split
    void mergeSplit(vector<T> &A, vector<T> &B, int low, int high){
        int mid;

        if ((high-low) < 1){  // Se comprueba si High - Low es diferente de 0, ayuda a identificar cuando ya no se puede partir más. CASO BASE.
            return;
        }
        mid = (high + low)/2; // Obtenemos el valor mitad.
        mergeSplit(A, B, low, mid); // Se trabaja con la mitad, del valor mínimo a la mitad. Se trabaja primero esta parte.
        mergeSplit(A, B, mid + 1, high); // Trabaja con las mitades que fue dejando en las particiones.
        mergeArray(A, B, low, mid, high);
        copyArray(A, B, low, high);
    }

public:
    // Merge Sort
    vector<T> ordenaMerge(vector<T> &original){
        vector<T> v(original);
        vector<T> temp(v.size());  // Vector Temporal
        mergeSplit(v, temp, 0,v.size()-1);

        return v;
    }
};