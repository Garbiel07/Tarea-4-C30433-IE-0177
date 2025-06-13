# Tarea 4
## Ejercicio 1

El código necesario en stack.c define una estructura de datos de tipo stack. Esta estructura es del tipo last in first out (es decir, solo permite tomar el valor en la posición más alta del stack)

### void stack_init();
Inicializa el stack como vacío utilizando la función top = 0

### int stack_push(unsigned int data);
Agrega un dato en la cima del stack. Si el stack está lleno devuelve -1, y si está vacío retorna 0 e incrementa el valor de top en 1. 

### int stack_pop();
Elimina y devuelve el dato de la cima. Si el stack está vacío devuelve -1, y si está lleno retorna 0 e incrementa el valor de top en 1. 

### unsigned int stack_size();
Da la cantidad de elementos que hay en el stack retornando top

### int stack_is_full();
Indica si el stack está lleno retornando top >= STACK_MAX, lo cuál es un valor inválido ya que STACK MAX es el tamaño máximo del stack. 

### int stack_is_empty();
Indica si el stack está vacío utilizando el mismo medio que antes pero con top == 0

## Ejercicio 2
El programa linked_list.c implementa la estructura tradicional de una lista enlazada simple (Nodo de la lista enlazada, un puntero a la cabeza de la lista y el tamaño de la lista) así como la serie de funciones necesarias para 

### void linked_list_init()
Establece el puntero head en NULL e inicializa el contador size en 0

### linked_list_append(int data)
Agrega un nuevo nodo al final de la lista. Si la lista está vacía crea el primer nodo. Sino, la recorre hasta el último y enlaza el nuevo nodo al final. Si falla en crear un nuevo nodo retorna -1, sino retorna 0.

### int linked_list_prepend(int data) 
Agrega un nuevo nodo al principio de la lista. Crea un nuevo nodo y hace que apunte al head. Luego actualiza el head al nuevo nodo en incrementa el tamaño de la lista en 1. 

### int linked_list_remove(int data)
Elimina el primer nodo que contenga el valor data. Si el nodo que debe eliminar está en la posición head, lo ajusta. Sino lo recorre y ajusta los punteros. Además, libera la memoria del nodo eliminado. Como antes, devuelve 0 si lo encontró y eliminó y sino devuelve -1.

### int linked_list_contains(int data)
Busca un valor en la lista recorriendo nodo por nodo. Imprime 1 si lo encuentra y 0 sino

### unsigned int linked_list_size()
Devuelve la cantidad de nodos (o sea el contador size)

### void linked_list_print()
Imprime los elementos de lista en orden recorriendo cada nodo desde el head y mostrando el espacio data.

## Construcción del programa
Basta con dejar todos los archivos dentro del directorio principal y compilar con make.
Luego se utiliza ./mi_programa para ejecutar. Esto ejecuta tanto la implementación de stack.c como de linked_list.c

![Screenshot from 2025-06-12 23-37-56](https://github.com/user-attachments/assets/555cc0bd-2e2d-4596-b3a7-019558bbd567)
