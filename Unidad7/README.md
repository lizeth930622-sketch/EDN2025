✈️ Proyecto: Sistema de Gestión de Tiquetes de Vuelo con Listas Enlazadas

💻 Asignatura:

- Estructura de Datos

👩‍💻 Estudiante:

- Karen Lizeth González González

🧠 Resumen del Proyecto

- Este proyecto implementa un sistema de gestión de tiquetes aéreos desarrollado en lenguaje C, utilizando los principios de memoria dinámica y listas enlazadas (simples y dobles).

- El programa simula el registro, venta y abordaje de pasajeros, controlando la capacidad del avión y gestionando los casos de sobreventa de forma automatizada.

🎯 Propósito del Proyecto

El objetivo principal es aplicar estructuras de datos dinámicas para representar procesos reales del manejo de pasajeros en un vuelo.

A través del desarrollo se busca:

- Comprender el uso de la asignación dinámica de memoria (malloc y free).

- Implementar estructuras enlazadas simples y dobles para el almacenamiento y gestión de información.

- Representar reglas de negocio reales como sobreventa, capacidad limitada y orden de abordaje.

- Consolidar habilidades en programación modular y control por menú en consola.

⚙️ Versiones del Sistema
Versión	Tipo de Lista	Archivo	Descripción
🧩 V1	Lista Enlazada Simple	simple.c	Maneja el registro secuencial de pasajeros en una estructura de lista simple.
🧩 V2	Lista Doblemente Enlazada	doble.c	Permite recorrer la lista en ambos sentidos (adelante y atrás) con punteros dobles.
🧭 Menú Principal del Sistema
Opción	Acción
1️⃣	Definir capacidad del avión. Determina cuántos pasajeros pueden abordar.
2️⃣	Vender tiquete. Registra un nuevo pasajero si el abordaje no ha comenzado y no se excede la sobreventa.
3️⃣	Iniciar abordaje. Procesa a los pasajeros en orden de compra hasta llenar el avión.
4️⃣	Mostrar abordados. Lista los pasajeros que lograron subir.
5️⃣	Mostrar no abordados. Presenta los pasajeros que quedaron fuera por sobreventa.
6️⃣	Salir. Termina la ejecución del programa.

📋 Reglas Lógicas del Sistema

- Sobreventa permitida: Hasta un 10 % adicional de la capacidad total.

- Cierre de ventas: No se pueden vender tiquetes una vez iniciado el abordaje.

- Orden de abordaje: Los pasajeros ingresan según el orden de compra.

- Lista de no abordados: Se almacenan los pasajeros que compraron, pero no alcanzaron asiento.

🧱 Estructura de los Nodos
🔗 Lista Simple
typedef struct nodo {
    char genero[20];
    char apellido[30];
    struct nodo *sig;
} nodo;

🔗 Lista Doble
typedef struct nodo {
    char genero[20];
    char apellido[30];
    struct nodo *ant;
    struct nodo *sig;
} nodo;


# Cada nodo representa un pasajero, y contiene:

- genero: Identificación del género del pasajero.

- apellido: Primer apellido registrado.

- sig y ant: Punteros que permiten enlazar los nodos según el tipo de lista.

🧮 Ejemplo de Ejecución (simple.c)
=== MENÚ PRINCIPAL - SISTEMA DE ABORDAJE ===

1. Establecer capacidad del avión
2. Vender tiquete
3. Iniciar abordaje
4. Ver pasajeros abordados
5. Ver pasajeros no abordados
6. Salir

Seleccione una opción: 1
Ingrese la capacidad máxima (máx. 50): 5
Capacidad registrada correctamente.

Seleccione una opción: 2
Ingrese el apellido del pasajero: Pérez
Tiquete vendido exitosamente.

Seleccione una opción: 3
¿El pasajero Pérez abordó? (s/n): s
Abordaje completado.

Seleccione una opción: 4
Total de abordados: 1

📁 Estructura del Proyecto

- Archivo	Descripción
simple.c	Contiene la versión del programa con lista enlazada simple.
doble.c	Implementa la versión con lista doblemente enlazada.
README.md	Documentación y guía técnica del proyecto.

🧩 Conclusión
- El proyecto "Sistema de Tiquetes de Avión" demuestra cómo las estructuras dinámicas en C pueden emplearse para simular procesos reales, gestionando información de manera flexible y eficiente.
Además, consolida conceptos esenciales de listas enlazadas, punteros y gestión de memoria, aplicados a una situación práctica y fácilmente comprensible.