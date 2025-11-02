🔷 Taller 1 – Ordenamiento en C

📖 Asignatura
- Estructura de Datos

👥 Participantes

- Karen Lizeth Gonzalez Gonzalez
- Andrick Alain Preciado

🔢 Algoritmos trabajados

Selection Sort (ascendente)

Insertion Sort (descendente)

📝 Planteamiento del problema

Se tiene un arreglo con 10 números enteros positivos que representan los minutos que tarda en resolverse un ticket de soporte.

El objetivo del programa es:

👉 Permitir al usuario registrar los tiempos manualmente, verificando que no existan valores negativos.

👉 Mostrar los tiempos almacenados en cualquier momento.

👉 Aplicar Selection Sort para ordenarlos de menor a mayor, mostrando el proceso paso a paso.

👉 Aplicar Insertion Sort para ordenarlos de mayor a menor, también con detalle de cada inserción.

👉 Usar un menú de opciones que guíe la interacción del usuario.

📷 Ejemplo de salida del programa
🖥 Menú inicial
==== MENU ====
1. Llenar array
2. Mostrar array
3. Ordenar (Selection Sort)
4. Ordenar (Insertion Sort)
5. Salir
Ingrese una opción:

🔽 Ejecución Selection Sort (ascendente)
Paso 1: [3, 10, 7, 8, 5, 6, 2, 9, 4, 1]
Paso 2: [1, 10, 7, 8, 5, 6, 2, 9, 4, 3]
...
Resultado final: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

🔼 Ejecución Insertion Sort (descendente)
Paso 1: [10, 3, 7, 8, 5, 6, 2, 9, 4, 1]
Paso 2: [10, 9, 7, 8, 5, 6, 2, 3, 4, 1]
...
Resultado final: [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]

⚡ Menú de funcionalidades

✍ Registrar datos (llenar array)

👀 Mostrar valores actuales

🔽 Ordenar con Selection Sort (ascendente)

🔼 Ordenar con Insertion Sort (descendente)

🚪 Salir del programa

⚙ Compilación y ejecución
🔧 Compilar
gcc primertaller.c -o primertaller.exe

▶ Ejecutar
primertaller.exe