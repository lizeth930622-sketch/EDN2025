🧠 Proyecto: Estructuras Dinámicas en C
🧩 Unidad 8 – Pilas y Colas
📘 Asignatura

Estructura de Datos

👤 Alumna

Karen Lizeth González González

📝 Descripción General

Este proyecto reúne una serie de ejercicios en lenguaje C que aplican los conceptos de memoria dinámica, pilas, colas y listas circulares.
Cada módulo representa una simulación práctica que refleja procesos del mundo real, como gestión de impresoras, atención bancaria o ejecución de procesos de CPU.

⚙️ Ejercicios Implementados
1️⃣ Simulador Undo/Redo (Dos Pilas)

Utiliza dos pilas dinámicas: UNDO y REDO.

Permite registrar acciones de texto y realizar operaciones de deshacer (undo) y rehacer (redo).

Muestra el estado actual de las pilas en cualquier momento.

Comandos disponibles:

1. cmd> accion
2. cmd> undo
3. cmd> redo
4. cmd> verundo
5. cmd> verredo
6. cmd> salir

2️⃣ Conversión de Expresión Infija → Postfija

Implementa el algoritmo Shunting-yard de Dijkstra.

Soporta operadores + - * / ^ y paréntesis ().

Convierte expresiones convencionales a notación polaca inversa (RPN).

Ejemplo:

Entrada: A+B*(C-D)
Salida:  A B C D - * +

3️⃣ Evaluación de Expresiones Postfijas

Evalúa expresiones numéricas postfijas utilizando una pila dinámica de operandos.

Los operadores se procesan en el orden de aparición, generando el resultado final.

Ejemplo:

Entrada: 2 3 4 * +
Salida:  14

4️⃣ Cola de Impresora

Simula una cola FIFO donde cada trabajo tiene un ID autoincremental y un número de páginas.

Permite agregar trabajos, procesarlos (desencolarlos) y visualizar la cola actual.

Operaciones:

🆕 Encolar trabajo

🖨️ Procesar siguiente trabajo

📋 Ver cola pendiente

5️⃣ Gestión de Turnos en Banco (Cola Circular)

Simula un sistema de atención al cliente con cola circular.

Cada cliente tiene un ID único generado automáticamente.

La cola circular permite atención continua sin pérdida de posiciones.

Opciones del menú:

➕ Ingresar cliente

👨‍💼 Atender cliente

👀 Ver cola actual

6️⃣ Cola de Prioridad

Implementa una cola enlazada con prioridad descendente.

Los elementos con mayor prioridad se atienden antes.

Ejemplo:

Enqueue (valor=10, prioridad=5)
Enqueue (valor=3, prioridad=8)
Dequeue → (valor=3, prioridad=8)

7️⃣ Planificación Round Robin (Cola Circular)

Simula la planificación de procesos Round Robin.

Cada proceso tiene un ID único y un tiempo restante de ejecución (burst).

Se utiliza un quantum fijo que regula cuánto tiempo ejecuta cada proceso antes de pasar al siguiente.

Ejemplo:

Proceso 1: burst=8
Proceso 2: burst=4
Quantum=3

Salida esperada:
Proceso 1 ejecutado 3, resta 5
Proceso 2 ejecutado 3, resta 1
Proceso 1 ejecutado 3, resta 2

🧮 Estructuras Utilizadas
🧱 Módulo	⚙️ Estructura de Datos
Undo/Redo	🧰 Pilas (LIFO)
Infija → Postfija	🧮 Pila de caracteres
Evaluación Postfija	🔢 Pila numérica
Cola de Impresora	🖨️ Cola FIFO
Turnos en Banco	🔄 Cola circular
Cola de Prioridad	🏁 Cola enlazada ordenada
Round Robin	🔁 Cola circular de procesos
🧰 Compilación y Ejecución

Compilar el programa:

gcc unidad8_ejercicios.c -o unidad8_ejercicios


Ejecutar el programa:

./unidad8_ejercicios

🧭 Menú Principal

Al iniciar la ejecución, el sistema muestra el menú general del módulo:

==== MENÚ PRINCIPAL - UNIDAD 8 ====
1. Simulador Undo/Redo
2. Conversión Infija → Postfija
3. Evaluación Postfija
4. Cola de Impresora
5. Gestión de Turnos Bancarios
6. Cola de Prioridad
7. Planificación Round Robin
0. Salir

🧼 Liberación de Memoria

Cada módulo libera la memoria asignada dinámicamente antes de finalizar la ejecución.
Esto incluye:

Liberación de pilas y colas mediante free()

Eliminación de nodos circulares y estructuras de procesos

Reinicialización de contadores de ID y estructuras auxiliares

🧩 Conclusión

Este proyecto ofrece una visión práctica y estructurada del manejo de estructuras dinámicas en C, reforzando los conceptos de:

Memoria dinámica con malloc(), calloc(), realloc() y free()

Gestión de datos en tiempo real mediante pilas, colas y listas circulares

Aplicación de algoritmos clásicos en contextos simulados

A través de estos ejercicios, se consolidan las bases necesarias para el desarrollo de sistemas más complejos en el ámbito de la programación estructurada y la gestión de datos dinámicos.