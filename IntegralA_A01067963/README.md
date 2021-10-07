# Ordenamiento y Búsqueda de Calificaciones
En esta primera fase del proyecto realicé un código donde utilicé las bases de algoritmos de ordenamiento y búsqueda que vimos en clase.
Lo apliqué para que pueda ordenar una lista de calificaciones de menor a mayor utilizando merge sort. Además de poder realizar búsquedas de alguna calificación.

# SICT0302B: Toma decisiones
## Selecciona un algoritmo de ordenamiento adecuado al problema
Para este proyecto utilicé un algoritmo de ordenamiento merge sort, debido a que mi lista tenía elementos aleatorios. 
Merge sort a comparación de los otros algoritmos que vimos en clase es más rápido ordenando listas aleatorias.

# SICT0301B: Evalúa los componentes
## Hace un análisis de complejidad correcto y completo para todo el programa y sus compenetes
La función de merge split tiene una complejidad de O(n log n). O(n) debido a que realiza llamadas recursivas dependiendo del tamaño de la lista.
O (log n) debido a que al dividir el vector, va dividiendo a la mitad. Esto se puede ver como una funcón logarítmica.

La función merge sort es de complejidad O(n), porque siempre utiliza la función merge split.

