# Fase 1. Ordenamiento y Búsqueda de Calificaciones
En la primera fase del proyecto realicé un código donde utilicé las bases de algoritmos de ordenamiento y búsqueda que vimos en clase.
Lo apliqué para que pueda ordenar una lista de calificaciones de menor a mayor utilizando merge sort. Además de poder realizar búsquedas de alguna calificación.

# Fase 2. Estructuras Lineales
La segunda fase implementé un algoritmo de estructuras lineales, siendo más específico un algoritmo de listas doblemente ligadas. 
Con este algoritmo se crea una lista con los datos ya ordenados de la fase anterior, con los cuales podemos realizar diversas acciones, como agregar, buscar, o eliminar elementos. 

# SICT0302B: Toma decisiones
## Selecciona un algoritmo de ordenamiento adecuado al problema
### Algoritmo de Ordenamiento
Para este proyecto utilicé un **algoritmo de ordenamiento** merge sort, debido a que mi lista tenía elementos aleatorios. 
Merge sort a comparación de los otros algoritmos que vimos en clase es más rápido ordenando listas aleatorias.

### Estructuras Lineales
En la sección de **estructura lineal**, utilicé una lista doblemente ligada. Esto porque es la forma más completa en la que podemos hacer manejo de los datos. 
Contiene más opciones de manejo de datos que la lista ligada. 

# SICT0301B: Evalúa los componentes
## Hace un análisis de complejidad correcto y completo para todo el programa y sus compenetes

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
