//
// Created by droid on 10/1/2021.
//
// Avance 2

#ifndef INTEGRALA_ALGORITMOS_DE_ORDENAMIENTO_DLINK_H
#define INTEGRALA_ALGORITMOS_DE_ORDENAMIENTO_DLINK_H

using namespace std;
template <class T> class DList;

template <class T>
class DLink{     // Representa a un nodo
private:
    DLink(T val) : value(val), next(0) {} // Primer constructor, recibe objeto apunta a nulo.
    DLink(const DLink<T> &source) {}

    T value;
    DLink<T> *next;
    DLink<T> *previous;

    friend class DList<T>;
};

template <class T>
class DList {     // Representa una lista
public:
    DList() : head(0), size(0) {}     // Primer Constructor.
    ~DList() {    // Deconstructor
        clear();
    }

    void insertion(T val){
        DLink<T> *newDLink;

        newDLink = new DLink<T>(val);
        if (newDLink == 0) {
            std::cout<<"Out of Memory";
        }
        if (empty()) {
            head = newDLink;
            tail = newDLink;
        } else {
            tail->next = newDLink;
            newDLink->previous = tail;
            tail = newDLink;
        }
        size ++;
    }
    int search(T val) const{
        DLink<T> *p;     // Variable temporal para recorrer arreglo.
        int i = 0;

        p = head;   // Se inicializa la variable al principio de la lista.
        while (p != 0){
            if (p->value == val){ // Value es un atributo de la clase Link.
                i = p->value;
                return i;
            }
            p = p->next;
            i++;
        }
        return -1;
    }
    bool empty() const{
        return (head == 0);
    }

    T deleteFirst(){
        DLink<T> *p;
        p = head;

        if (head == tail) {      // Para un elemento en la lista.
            head = 0;
            tail = 0;
        } else {
            head = p->next;
            //p->next->previous = 0;
            head->previous=0;       // Equivalencia a la línea de arriba.
        }

        delete p;
        size--;
    }

    T deleteLast(){
        DLink<T> *p;
        p = tail;

        tail = p->previous;
        tail->next=0;

        delete p;
        size--;
    }

    T   deleteAt(int index){
        DLink<T> *p, *q, *w;
        int i = 0;
        p = head;

        if (index == 0) {
            deleteFirst();

        } else if (index == size){
          deleteLast();

        } else {
            while (i != index) {
                q = p;
                p = p->next;
                ++i;
            }
            w = p->next;
            q->next = w;
            w->previous = q;
            delete p;
            size--;
        }
    }

    void clear(){
        DLink<T> *p, *q;

        p = head;
        while (p != 0) {
            q = p->next;
            delete p;
            p = q;
        }
        head = 0;
        size = 0;
    }

    std::string toString() const {
        std::stringstream aux;
        DLink<T> *p;

        p = head;
        aux << "[";
        while (p != 0) {
            aux << p->value;
            if (p->next != 0) {
                aux << ", ";
            }
            p = p->next;
        }
        aux << "]";
        return aux.str();
    }

private:
    DLink<T> *head, *tail;  // Variable instancia. Apuntador al primer elemento. Apuntador a último elemento.
    int 	size;   // Variable instancia. Total de elementos en la estructura.
};

#endif //INTEGRALA_ALGORITMOS_DE_ORDENAMIENTO_DLINK_H