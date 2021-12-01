//
// Created by droid on 12/1/2021.
//

#ifndef INTEGRALA_ALGORITMOS_DE_ORDENAMIENTO_MATERIAS_H
#define INTEGRALA_ALGORITMOS_DE_ORDENAMIENTO_MATERIAS_H
string Materia(int num){
    string mat;
    if (num == 0){
        mat = "Matematicas";
        return mat;
    }
    if (num == 1){
        mat = "Programacion";
        return mat;
    }
    if (num == 2){
        mat = "Civica y Etica";
        return mat;
    }
    if (num == 3){
        mat = "Arte";
        return mat;
    }
    if (num == 4){
        mat = "Biologia";
        return mat;
    }
    if (num == 5){
        mat = "Fisica";
        return mat;
    }
};


#endif //INTEGRALA_ALGORITMOS_DE_ORDENAMIENTO_MATERIAS_H
