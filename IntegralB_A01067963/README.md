# Descripción del Programa
Este programa empieza solicitando tu primer nombre, sin espacios y de preferencia sin acentos.
Después te da la bienvenida al programa. El programa es diseñado para mostrar moléculas, la conexión entre sus átomos, 
número de átomos que tiene, y caminos que se toman para llegar de un átomo a otro. Para continuar se inserta una *i*.
A continuación se mostrará un menú, con diferentes opciones.

Las opciones de 1 a 3 son para las moléculas incluídas en el programa. Al seleccionar cualquiera de estas opciones
te llevará a otro menú donde puedes manipular la información que existe en el programa acerca de dichas moléculas. 

La opción 4 es para que el usuario del programa pueda dejar el nombre de alguna molécula que desee que el sistema tenga. 
Este nombre tiene que ser reemplazando los espacios por un dash **-**. El programa creará un archivo de texto donde escribirá
el nombre de la molécula. **Nota:** Solamente funciona ingresando un sólo nombre.

La opción 5 es para finalizar el programa. Se ingresa un **5**, y el programa finalizará con un mensaje de despedida.

## Segundo menú de opciones 1 a 3
Dentro de este nuevo menú existen 4 opciones.

La primera opción es para mostrar una matriz de conexión entre los átomos de la molécula. Solamente se ingresa **1**, y 
muestra la matriz.

La segunda opción es para mostrar algún camino que desea saber entre átomos. Dentro de esta opción se pide ingresar el átomo 
de inicio, donde ingresa el número del átomo que quiere iniciar (por ejemplo 0), despúes tecleando enter. Y lo mismo para 
el átomo meta. El programa desplegará el camino que realizó para llegar del átomo de partida al átomo meta.

La opción tres es para mostrar el número de átomos que tiene la molécula. Solamente se selecciona esa opción con el número 
**3** y el programa muestra el valor que tiene cada átomo y la cantidad.

La útlima opción es para regresarse al menú principal. Se selecciona ingresando un **4** y volverá a aparecer el menú principal.

## Comentarios
En mi IDE los archivos de txt que se usan en el programa tienen que estar en la carpeta de *cmake-build-debug* debido a esto mi 
formativa no corría como debía. Hasta ahora pude solucionar el problema. En el directorio de la *Integral B* se adjuntan los archivos
en el mismo nivel que el main y los archivos .h, pero además se adjunta la carpeta de *cmake-build-debug*. Además, adjunto la 
imagen de referencia, en la que me base para crear las moléculas, con nombre *moleculasRef.png*.

---

# Fase 1. Grafos
En la primera fase del segundo proyecto se implementa una estructura de grafos con la utilización de archivos de texto. 
Dentro de esta fase se implementarán las funciones de loadGraphList, Depth-First Search y Breadth-First Search.  

# Fase 2. Hashes


---

# SICT0302B: Toma decisiones
## Selecciona un algoritmo de ordenamiento adecuado al problema

---
### Grafos para análisis de información y para algoritmo de búsqueda
En este proyecto utilizó el algoritmo de grafos visto en clase, donde se utilizan las funciones loadGraphList, loadGraphMat,
DFS y BFS. Principalmente se usa para hacer las conexiones entre los átomos de las moléculas, mostrarlas, y hacer la búsqueda 
de caminos entre moléculas.

### Hashes
Utilicé los hashes para almacenar los átomos de cada molécula con su respectiva cantidad. De esta manera el usuario
puede ver de cuántos átomos está hecho cada molécula. 

---

# SICT0301B: Evalúa los componentes
## Hace un análisis de complejidad correcto y completo para todo el programa y sus componentes

---
### Función Graph
La función Graph solamente inicializa los edgeslist y edgesmat en 0. Siempre hace única linea de código y no depende de variables.
Tiene una complejidad de **O(1)**.

### Función loadGraphList
La función loadGraphList abre el archivo de texto que recibió, y por cada coordenada que tenga se va agregar un edgeAdjList.
Esta función depende de cuantos nodos se manejan en el grafo, por lo que tiene una complejidad de **O(n)**.

### Función loadGraphMat
La función loadGraphMat al igual que loadGraphList depende de los nodos que utiliza el grafo. Tiene una complejidad de **O(n)**.

### Función addEdgeAdjMatrix
addEdgeAdjMatrix solamente añade nuevas conexiones con nodos a la matriz, tiene tres lineas de código secuenciales. Tiene
una complejidad de **O(1)**.

### Función addEdgeAdjList
De la misma manera que addEdgeAdjMatrix agrega nuevos nodos a la lista, el algoritmo es secuencial y tiene una complejidad de
**O(1)**. 

### Función printAdjMat_clean


### Función DFS


### Función BFS


### Función put
La función put tiene una complejidad de **O(n)**. Esto debido a que los ciclos que haga la
función dependen de la variable size.

### Función get
La función get es **O(1)**, porque tiene solamente un condicional y el algoritmo es secuencial.

---

# SICT0303B: Implementa acciones científicas
## Utiliza algún mecanismo de consulta de información, lectura de archivos o escritura de archivos.

--- 
## Hash
### Mecanismo de consulta de información.
El programa en la sección de *Buscar calificación* se utiliza un método de listas doblemente ligadas para buscar alguna calificación
que desee consultar el usuario.
