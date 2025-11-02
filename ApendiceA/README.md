## Parcial I: Recursividad y Gestión de Datos en C

## Curso: 
Estructuras de Datos

# Estudiante:
- Karen Lizeth Gonzalez Gonzalez

## Descripción del Proyecto

Este proyecto tiene como objetivo el desarrollo de una aplicación en consola utilizando el lenguaje C para gestionar una lista de estudiantes. La aplicación debe ser capaz de realizar varias operaciones como mostrar la lista, buscar la nota máxima, calcular el promedio y ordenar a los estudiantes por código. Todo esto utilizando recursividad, punteros y estructuras.

El sistema utilizará un algoritmo recursivo para ordenar los estudiantes mediante Selection Sort y empleará funciones recursivas para la búsqueda de la nota máxima y el cálculo del promedio. Este enfoque permite profundizar en la comprensión de la recursividad, la gestión de datos en memoria, y el uso de punteros en C, todo dentro de un contexto de programación estructurada.

## Objetivos del Proyecto

Desarrollar una aplicación de consola en C para gestionar una lista de estudiantes usando recursividad, estructuras, punteros y algoritmos de ordenamiento. El programa debe incluir las siguientes competencias:

- Uso de funciones recursivas.

- Manejo de estructuras y arreglos en C.

- Implementación recursiva de Selection Sort.

- Compilación con el compilador GCC.

- Uso de Git y GitHub para control de versiones.

## Requisitos Funcionales

# El programa debe cumplir con las siguientes funciones:

- Mostrar la lista de estudiantes en consola.

- Buscar la nota máxima usando una función recursiva.

- Calcular el promedio de las notas utilizando recursividad.

- Ordenar los estudiantes por código utilizando Selection Sort recursivo.

- Salir del programa de manera ordenada.

## Estructura de Datos

Los estudiantes se definen a través de un arreglo de estructuras. Cada estudiante tiene un código único y una nota. Los datos de los estudiantes son los siguientes:

## // Estudiantes: {código, nota}
1. {2024105, 4.0}  
2. {2024102, 3.2}  
3. {2024104, 5.0}  
4. {2024101, 4.5}  
5. {2024103, 2.8}  

## Menú de Opciones

# El programa debe presentar un menú interactivo con las siguientes opciones:

- Ver estudiantes

- Buscar la nota máxima (usando recursividad)

- Calcular el promedio del curso (usando recursividad)

- Ordenar estudiantes por código (con Selection Sort recursivo)

- Salir del programa

## Instrucciones de Compilación

# Para compilar el programa, utiliza el siguiente comando en la terminal:

- gcc parcial1.c -o parcial1.exe

# Luego, ejecuta el archivo generado con:

- ./parcial1.exe