# Descripción del uso del programa
Este es un programa para un profesor, que puede agregar calificaciones, manipularlas, y además puede agregar las materias que imparte.

Primero, el programa pide que ingrese un primer nombre, el nombre se debe ingresar de preferencia sin acentos y sin espacios. 
Pide el número de calificaciones y se ingresa solamente un número. Se ingresan las calificaciones deseadas en formato de 0 a 100, 
ejemplo, 98, 67, 77, etc. Muestra las calificaciones agregadas. Después, muestra las materias que el profesor podría estar impartiendo.
Se ingresa solamente un número de una materia que el profesor imparte y se presiona enter, si quiere agregar otra vuelve a hacer lo mismo,
si no se ingresa un -1. Se muestra un menú, donde se pueden manipularse las calificaciones de diferentes maneras. Al igual que 
las partes anteriores, seleccionas la opción que deseas ingresando el número de la opción. 

La opción uno es para ingresar una nueva calificación, para eso solamente se ingresa la calificación a agregar y se da enter.

La opción dos es para ordenar los elementos, solamente con ingresar el número 2 en el menú, se muestra la lista ordenada de menor a mayor.

La opción tres es para buscar una calificación en la lista. En esta opción se ingresa la calificación que se busca, por ejemplo 77, 
y el programa regresa si está en la lista, o no lo está.

La opción cuatro elimina una calificación. Al elegir esta opción se despliega la lista de calificaciones, y para poder eliminar
una calificación se tiene que ingresar el índice de la calificación. Los índices de la lista empieza en 0. 

La opción cinco es para mostrar las materias del profesor, únicamente se ingresa la opción 5 en el menú y despliega las materias.
Por último, la opción seis es para finalizar el programa.

Este programa al principio usé un array como arreglo principal para todas las opciones. Pero, debido a que no se puede modificar
un arreglo, añadir valores por ejemplo, cambié el arreglo principal a un objeto de lista. Para que las operaciones que se hagan
con la lista en todas las opciones, se vean reflejadas después de haberlas realizado.

---
# Fase 1. Ordenamiento y Búsqueda de Calificaciones
En la primera fase del proyecto realicé un código donde utilicé las bases de algoritmos de ordenamiento y búsqueda que vimos en clase.
Lo apliqué para que pueda ordenar una lista de calificaciones de menor a mayor utilizando merge sort. Además de poder realizar búsquedas de alguna calificación.

# Fase 2. Estructuras Lineales
La segunda fase implementé un algoritmo de estructuras lineales, siendo más específico un algoritmo de listas doblemente ligadas.
Con este algoritmo se crea una lista con los datos ya ordenados de la fase anterior, con los cuales podemos realizar diversas acciones, como agregar, buscar, o eliminar elementos.

# Fase 3. Árboles
La tercera fase del proyecto integré un árbol splay. Donde creo una estructura de las materias que imparte el profesor. Dentro de este algoritmo se pueden
realizar diferentes funciones, como agregar un dato, obtener un dato, eliminar un dato, imprimirlo de diferentes maneras, entre otros. Las que yo utilicé fue
agregar un dato e imprimir los datos que tiene el árbol.

---

# SICT0302B: Toma decisiones
## Selecciona un algoritmo de ordenamiento adecuado al problema
### Algoritmo de Ordenamiento
Para este proyecto utilicé un **algoritmo de ordenamiento** merge sort, debido a que mi lista tenía elementos aleatorios.
Merge sort a comparación de los otros algoritmos que vimos en clase es más rápido ordenando listas aleatorias.

### Estructuras Lineales
En la sección de **estructura lineal**, utilicé una lista doblemente ligada. Esto porque es la forma más completa en la que podemos hacer manejo de los datos.
Contiene más opciones de manejo de datos que la lista ligada.

### Estructura Árbol
Utilicé un **árbol splay** debido a que la manera de trabajar con los datos priorizados es mejor que los demás árboles. Además, en la búsqueda de algún elemento
es mucho más rápido que los otros tipos de árboles vistos en clase.

---

# SICT0301B: Evalúa los componentes
## Presenta casos de prueba para todas las funciones y procedimientos del programa
En el proyecto *IntegralA_A01067963_casos-prueba*, se implementan los diferentes casos prueba que incluyen las funciones
de los diferentes algoritmos que se utilizan en el programa.

## Hace un análisis de complejidad correcto y completo para todo el programa y sus componentes

### Algoritmo de Ordenamiento
En la **búsqueda secuencial** tenemos un ciclo while, el cual depende de que la variable low sea menor a la variable high. Esta función tiene una complejidad de O(n).

La **función de merge split** tiene una complejidad de O(n log n). O(n) debido a que realiza llamadas recursivas dependiendo del tamaño de la lista.
O (log n) debido a que al dividir el vector, va dividiendo a la mitad. Esto se puede ver como una función logarítmica.

La **función merge sort** es de complejidad O(n), porque siempre utiliza la función merge split.

### Estructuras Lineales
Los **primeros constructores** de ambas clases tienen una complejidad de O(1), porque siempre realizan las mismas instrucciones.

La **función insertion** tiene tres ifs lo cual tiene complejidad de O(1), debido a que sea cual sea el if en el que entre, realizará las mismas instrucciones que estén dentro de él.

La **función search** utiliza un ciclo while para poder iterar dentro de la lista. Como esta función tiene un ciclo que depende del número de elementos que tenga la lista,
tiene complejidad de O(n). Dentro del while hay un if con complejidad O(1), sin embargo se toma en consideración la peor complejidad.

La **función delete first** y delete last tienen la misma complejidad, O(1), porque siguen las mismas líneas de instrucciones.

La **función deleteAt** tiene un ciclo while para iterar en la lista, por lo que tiene una complejidad de O(n).

### Estructura Árbol
La **función add** no hace un recorrido total del árbol, solamente va analizando los nodos izquierdos y derechos y en base a eso
inserta el nuevo nodo. Por lo que tiene una complejidad de **O(log n)**.

En la **función remove** también hace recorridos analizando los nodos izquierdos y derechos. Por lo que tiene una complejidad de **O(log n)**.

Al igual que las funciones anteriores, la **función find** realiza recorridos en base a los nodos izquierdos y derechos. No va recorriendo
todo el árbol a ciegas. Entonces tiene una complejidad de **O(log n)**.

La **función size** solamente regresa la variable de size, entonces es **O(1)**.

---

# SICT0303B: Implementa acciones científicas
## Utiliza algún mecanismo de consulta de información, lectura de archivos o escritura de archivos.

### Mecanismo de consulta de información.
El programa en la sección de *Buscar calificación* se utiliza un método de listas doblemente ligadas para buscar alguna calificación
que desee consultar el usuario. 