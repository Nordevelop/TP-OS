                                        #Punteros en C
                                        
El manejo de punteros en lenguaje C puede ser un tema complejo para aquellos que están empezando a programar en C. 
Los punteros son variables que almacenan direcciones de memoria y se utilizan para acceder y manipular los valores en esas direcciones de memoria.

                              Conceptos claves  sobre los punteros en C:

Declaración de punteros: para declarar un puntero en C, debes especificar el tipo de datos que se almacenarán en la dirección de memoria,- 
a la que apunta el puntero. La sintaxis es la siguiente:

tipo_de_dato *nombre_del_puntero;
                           
Asignación de direcciones de memoria: para asignar una dirección de memoria a un puntero, debes usar el operador "&". 
Este operador devuelve la dirección de memoria de una variable. La sintaxis es la siguiente:
           
nombre_del_puntero = &variable;
                                    
Acceso a los valores a través de punteros: para acceder al valor almacenado en una dirección de memoria a través de un puntero, 
debes usar el operador "*". La sintaxis es la siguiente:

*nombre_del_puntero = valor;  // para asignar un valor
valor = *nombre_del_puntero;  // para obtener un valor

                                      
                                      Aritmética de Punteros en C
                                      
La aritmética de punteros en C permite realizar operaciones matemáticas con direcciones de memoria.- 
en lugar de con valores numéricos. 
Esto es útil cuando se necesita manipular los valores almacenados en una secuencia de direcciones de memoria, como un arreglo.
Aquí hay algunos conceptos clave sobre la aritmética de punteros en C:
Suma y resta de punteros: se pueden sumar o restar un número a un puntero para moverse a una dirección de memoria diferente. 
Por ejemplo, si tienes un puntero ptr que apunta a la dirección de memoria de un arreglo arr, puedes moverte.- 
al siguiente elemento del arreglo sumando 1 a ptr:    

ptr++;  // se mueve al siguiente elemento del arreglo

Diferencia de punteros: puedes calcular la diferencia entre dos punteros para obtener el número de elementos que hay entre ellos en una secuencia. 
Por ejemplo, para obtener el número de elementos entre dos punteros ptr1 y ptr2 que apuntan a un arreglo arr, puedes calcular ptr2 - ptr1.
Punteros y tamaño de datos: es importante tener en cuenta el tamaño de los datos a los que apuntan los punteros, 
cuando se realiza aritmética de punteros. Por ejemplo, si tienes un puntero ptr de tipo int, sumar 1 a ptr,- 
moverá el puntero a la siguiente dirección de memoria int, no a la siguiente dirección de memoria en general.

