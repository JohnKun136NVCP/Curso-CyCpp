

# Introduccion a los lenguajes de programación.

## ¿Qué es un programa y programación?
### ¿Qué es un programa?
Un programa es un conjunto de instrucciones o algoritmos diseñados para ser interpretadas y ejecutadas por una computadora.

Aunque se suele usar el término software como sinónimo, la realidad es que un programa es solo una parte del software, y este a su vez está compuesto no sólo por programas, sino por bases de datos y otro tipo de archivos.

### ¿Qué es programación?

Un **programa de computadora** es una secuencia de instrucciones, escritas
para realizar una tarea específica en una computadora.

El **código fuente de un programa** informático es un conjunto de líneas de texto
con los pasos que debe seguir la computadora para ejecutar dicho programa.

```c++
#include <iostream>
int main(int argc, char *argv[]){
    std::cout<<"Hola Mundo"<<std::endl;
    return 0;
}
```

## Clásificacion de los lenguajes acuerdo con su nivel de abstracción.
## Lenguajes compilados e interpretados.

El código fuente de un programa debe ser implementado en un lenguaje de programación. Éste puede ser **interpretado** o **compilado**.


|Compilado|Intepretado|
|---------|-----------|
|Traducido por un compilador y convertido en ejecutable.|Ejecutado línea a línea por un intérprete.|
|Tipado estático.|Permite tipado dinámico.|
|Dependiente de la plataforma.|Independiente de la plataforma.|
|Ejecución relativamente rápida.|Ejecución relativamente lenta.|
<div>
<p>
<img src = "img/C_Logo.png"
    width = "104px"
    align = "left"/>
<img src = "img/python.png"
    width = "104 px"
    align = "right">
</p>
</div>
<br>
<br>
<br>
<br>
<br>
<br>

> El lenguaje de programación Python es un lenguaje interpretado mientras que C/C++ es compilado.


### Diseño de un programa.

Un **algoritmo** es un conjunto prescrito de instrucciones o reglas bien definidas,ordenadas y finitas que permite llevar a cabo una actividad.

Un **diagrama de flujo** es la representación gráfica de un algoritmo o proceso.

El **pseudocódigo** es una descripción de alto nivel compacta e informal del principio operativo de un programa informático u otro algoritmo.


### Diagramas de Flujo y Pseudocódigo.


<div align="center">


<p>
<img src = "img/diagrama_1.png"/>
</p>
<br>
<p>
<img src = "img/diagrama_2.png"/>
</p>
</div>

#### Ejercicios con diagramas de flujo.
 Las soluciones se encuentran en la carpeta *soluciones*.
Hacer los siguientes diagramas de flujo según el problema planteado.

1. Suma de dos números enteros.
2. Mayoría de edad (suponiendo que son 18 años).
3. Temporizador.
## Paradigmas de programación.

Los paradigmas de programación son modelos para resolver problemas. Se divide en 3.

1. La programación estructurada.

    Da claridad, calidad y tiempo de desarrollo.
2. La programación Orientada a Objetos.
    Se centra en crear objetos que tienen relación con la realidad.
3. La programación funcional.
    Uso de recursividad y además creación de funciones de alto nivel.
# Introducción al lenguaje C.

## Un poco de historia.
* A finales de los sesenta, Dennis Ritchie y Ken Thompson implementan el sistema operativo Unix para una computadora PDP-7 y posteriormente lo adaptan a una computadora PDP-11.

* En 1972, Ritchie desarrolla un nuevo lenguaje de programación por el deseo
de Thompson de crear utilidades para la PDP-11. Como se basa principalmente en el lenguaje B, nombra a su nuevo lenguaje C.

* En 1973, el kernel de Unix se empezó a reimplementar en C, convirtiéndose en uno de los primeros en ser implementados en un lenguaje diferente a
ensamblador.

<div>
<p align = "left">
<img src = "img/Dennis_Ritchie_2011.jpg"
    width = "250px"
    align = "left"/>
</p>
<p align = "right">
<img src = "img/kendennis.jpg"
    width = "170px"
    height = "190px"/>
</p>
</div>
<br>
<br>
<br>
<br>
<br>
<br>


> Imagen tomada de [Wikipedia](https://es.wikipedia.org/wiki/Dennis_Ritchie#/media/Archivo:Dennis_Ritchie_2011.jpg) e igualmente [Ken Thompson y Dennis Ritchie](https://es.wikipedia.org/wiki/Dennis_Ritchie#/media/Archivo:Ken_Thompson_and_Dennis_Ritchie--1973.jpg) 


* En 1977, Ritchie y Stephen C. Johnson hacen cambios
a C para hacerlo más portátil, lo cual a su vez lo hizo
más popular.
* En 1978, se publica la primera edición de The C Programming Language.

* Durante los años setenta y ochenta, se crean varias
versiones del lenguaje C.
* En 1989, se crea un estándar internacional para el
lenguaje llamado ANSI C, ISO C o C89 basado en la
segunda edición de The C Programming Language.

<div>
<p align = "left">
<img src = "img/C_language.png"
    width = "195px"
    align = "left"/>
</p>
<p align  = "right">
<img src = "img/C_anime.jpg"
    width  = "170px"
    align = "center"/>
</p>

</div>
<br>

> Imagen del libro [THE C PROGRAMMING LANGUAGE](https://upload.wikimedia.org/wikipedia/commons/thumb/3/35/The_C_Programming_Language_logo.svg/1200px-The_C_Programming_Language_logo.svg.png) 


## ¿Qué es el lenguaje C?

C es un lenguaje de programación:

* Compilado.
* Imperativo.
* Estructurado.
* De tipado estático y débil.
* De alto nivel.
* Orientado (pero no limitado) a la implementación de sistemas operativos.

## Versiones del lenguaje C.
* **C estándar: ANSI C, ISO C o C89** garantiza funcionar en todos lados.
* **C99** agrega nuevos tipos de dato y soporte para caracteres Unicode.
* **C11** incrementa la compatibilidad con C++, entre otras cosas.
* **C18** corrige errores y defectos de C11.
* **C2x** aún no se crea. Se espera que inicie en 2023.
## ANSI C.
ANSI C es un estándar publicado por el **Instituto Nacional Estadounidense de Estándares (ANSI)**, para el lenguaje de programación C. Se recomienda a los desarrolladores de software en C que cumplan con los requisitos descritos en el documento para facilitar así la portabilidad del código. [Wikipedia](https://es.wikipedia.org/wiki/ANSI_C)
### Usos actuales de C.
* Desarrollo de nuevas versiones del Sistema operativo Linux.

* Desarrollo en aplicaciones de Windows.
* También en macOS.
* Microprocesadores.
* Fundamento y contrucción también de lenguaje Python.
* Desarrollo de Git.

### Logros del lenguaje
<p align = "center">
<img src = "img/ranking_language.png">
</p>

> Todos los lenguajes en esta lista basaron su sintaxis en la de C de manera directa o indirecta. La mayoría de los compiladores o intérpretes de estos lenguajes están hechos en C.

# Introducción a la programación C.
## Fases de desarrollo de un programa.

- Análisis.
- Diseño.
- Implementación.
- Pruebas.

### Análisis.
Especialmente va relacionada con la pregunta ¿Qué tiene que hacer el programa?  Requerimientos y características. 
<p align = "center">
<img src = "img/analisis.png"/>
</p>

### Diseño.
Decir y construir la estructura general del programa.
<p align = "center">
<img src = "img/diseno.png"/>
</p>

### Implementación.
Escoger una herramienta que nos facilite el trabajo.

* Identificar correctamente las variables y su alcance.

* Elegir algoritmos y estructuras de datos adecuadas para el problema.

* Mantener la lógica de la aplicación lo más 
sencilla posible.
* Documentar y comentar adecuadamente el código de los programas.
* Facilitar la interpretación visual del código utilizando reglas de formato de
código.

<p align = "center">
<img src = "img/implementacion.png"/>
</p>

### Pruebas.
También conocido como *depuración*, en donde se detecta fallos y corregirlos.
<p align = "center">
    <img src = "img/test.png"/>
</p>

## Herramienta de desarrollo.
* Compilador.
* Editor de texto.
* IDE.
* Compilador online.

<p align = "center">
    <img src = "img/tools.png"/>
</p>


## Instalación.
### Linux.
Algunas distribuciones de Linux ya lo tienen implementado entonces solamente falta por verificar si es así. Abrir una Terminal y teclear el siguiente comando.
```
    gcc --version
```
Si sale el siguiente mensaje (en este caso mostrará para distribución en Ubuntu).

```    
gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Copyright (C) 2019 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```
Si no apareció el mensaje entonces se realiza los siguientes pasos:

**Ubuntu o distribuciones en Debian.** 

1. Hacer las actualizaciones del equipo.
```
    sudo apt update
```
2. Instalar el paquete ```build-essential```.

```
    sudo apt install build-essential
```
3. Instalar los paquetes necesarios incluidos ```gcc```, ```g++``` y ```make```.
```
    sudo apt-get install manpages-dev
```
4. Finalmente verificamos si se instaló correctamente.
```
    gcc --version
```
Lo que tendrá que aparecer:
```    
gcc (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Copyright (C) 2019 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```
Para las demas distribuciones se anexa los siguientes enlaces:

* [Fedora](https://developer.fedoraproject.org/tech/languages/c/c_installation.html)
* [Arch](https://linuxhint.com/install-gcc-arch-linux/)

### Windows.
Para instalar en Windows:
1. El compilador se tendrá que descargar e instalar que aquí [estará](https://sourceforge.net/projects/mingw/files/latest/download). 
2. Después de descargarlo puedes seguir este [tutorial](https://platzi.com/tutoriales/1469-algoritmos/1901-como-instalar-gcc-para-compilar-programas-en-c-desde-la-consola-en-windows/#:~:text=GCC%20(GNU%20Compiler%20Collection)%20es,la%20consola%20en%20entorno%20Windows) y para comprobar si se instaló correctamente se teclea en una CMD el comando ```gcc --version``` y aparecerá el mensaje de que se mostró al inicio de esta subsección.

### Compiladores en linea.
En el dado caso que no quiera instalar nada en el equipo puede usar el compilador en linea.
* [Onlinegdb](www.onlinegdb.com)
* [Programiz](www.programiz.com/c-programming/online-compiler/) 

## El "Hola Mundo" de C.

El "Hola Mundo" es el primer programa que se hace cuando uno aprende un lenguaje de programación nuevo. En este caso veremos que para hacer un "hola mundo" seguiremos estos pasos:

1. Abrimos el editor de textos de su preferencia (Sublinetext, Bloc de notas, etc.)

2. Generamos un nuevo archivo llamado "hola_mundo.c" es importante que tenga la extención .c ya que sabrá el compilador que se trata de un programa hecho en C y no lo tomará de otra manera.

3. El script está en la carpeta de *scripts* pero ahí está la demostración de la escritura:

    ```C
    #include <stdio.h>

    int main()
    {
        printf("Hola Mundo en C\n");
        return 0;
    }
    ```
    Para hacer comentarios en un programa en C, se pueden hacer por linea que es poniendo ``` //Esto es un comentario en una linea``` o también puede ser para varias lineas ``` /*Esto es un comentario para varias lineas*/```.

4. Compilamos el programa con el compilador ya instalado.
5. Abrimos una terminal o CMD.
6. En la terminal escribimos el siguiente comando:

    ```
    gcc hola_mundo.c -o hola 
    ```
    Lo que estamos generando con ``` -o``` es que lo pueda "traducir" a lenguaje máquina. Lo cual nos dará como salida un resultado un ejecutable *.exe* en el caso para Windows o nada más un archivo binario para Linux. El nombre de 'hola' puede cambiar a uno que nosotros queramos.
7. Ejecutamos el archivo saliente. 
    
    Para Windows nada más es dar Clic en ejecutable y se ejecutará saldrá el mensaje o tambien se puede hacer desde la CMD como:
    ```
    hola.exe
    ``` 
    Para Linux nada más en la misma temrinal se ejecuta como:
    ```bash
    ./hola
    ```

# Variables y tipos de datos primitivos.

## Variables.

<p>
<img src = "img/variables.png"
    align = "right"
    width = "220px"/>
</p>

Las variables son una herramienta utilizada en la programación para almacenar y manipular datos relevantes para la ejecución de un programa.

Están conformadas por:

* Un espacio en memoria (RAM).
* Un nombre simbólico (identificador).
* Un dato o valor.

## Tipos de datos.
<p align = "center">
<img src = "img/tipo_datos.png" align = "center">
</p>

> 1. El modificador unsigned agrega el rango de los negativos a la parte positiva, permitiendo almacenar únicamente números positivos.

# Declaración de variables.

Para **declarar (crear)** una variable en C y C++ utilizamos la siguiente sintaxis:

```
    <tipo> <identificador>;
```
Para asignar un valor a una variable en C y C++ utilizamos la siguiente sintaxis:

```
    <identificador> = <valor>;
```
Para declarar y asignar un valor a una variable en C y C++ utilizamos la siguiente sintaxis:
```
    <tipo> <identificador> = <valor>;
```
Para acceder al valor de una variable, basta con escribir su identificador.


### TIPS. 

<p aling>
<img src = "https://static.wikia.nocookie.net/wonder-egg-priority/images/3/36/Chibi_Ai.png/revision/latest?cb=20210120102537"width = "190px" height  = "260px" align = "left">
</p>

* Únicamente se pueden utilizar combinaciones de letras, números y guiones bajos para nombrar variables y funciones.
* No puede haber dos variables o funciones con el mismo identificador.
* El identificador de una variable no puede ser una palabra reservada.
* Todos los identificadores de variables y funciones deberían empezar con
una letra minúscula.
* Si el identificador de una variable o función está compuesto por dos o
más palabras, éstas se deben separar con guiones_bajos.
* Los identificadores y tipos de las variables deberían ser representativos
de lo que almacenan.

Ver declaración de variables en el archivo **variables.c** en *scripts*.

<br>
<br>
<br>

# Flujo estandar.
Los flujos son canales de comunicación interconectados mediante los cuales los programas pueden interactuar con su entorno durante su ejecución.
Hay tres tipos de flujos estándar:
* Entrada estándar **(stdin)**, suele ser el teclado.
* Salida estándar **(stdout)**, suele ser el monitor.
* Error estándar **(stderr)**, también suele ser el monitor.

Para leer un valor desde el teclado y almacenarlo en una variable durante la ejecución de un programa en C se utiliza la siguiente sintaxis:

```c
    scanf(“%<esp> ... %<esp>”, &<id1>,..., &<idn>);
```
Donde ```<esp>``` es un especificador de tipo y puede ser:

<p align = "center">
<img src = "img/entrada_std.png" align="center">
</p>

Para **imprimir el valor de una variable en pantalla** durante la ejecución de un programa en C se utiliza la siguiente sintaxis:

```c
    printf(“%<esp> ... %<esp>”, <id1>,..., <idn>);
```
Donde ```<esp>``` es un especificador de tipo y puede ser:

<p align = "center">
<img src = "img/impresion_std.png" align="center">
</p>


Además del especificador de tipo, la función **printf** acepta otros especificadores (por ejemplo de longitud y precisión) que ayudan a dar formato a las impresiones en pantalla.

<p align = "center">
<img src = "img/printf_std.png" align = "center">
</p>

# Operadores.
Un operador es un elemento de programa que se aplica a uno o varios operandos en una expresión
o instrucción. Los operadores que requieren un operando, como el operador de incremento se conocen como operadores unarios. Es decir, es un símbolo matemático que indica que se debe llevar a cabo una operación específica sobre un cierto número de operandos.
## Asignacion.

Este tipo de operadores permiten la asiganación de un valor especifico a una variable. En C y C++ se encuentrar disponibles los siguientes operadores:

|Operador|Accion               |Ejemplo  |Resultado |
|:------:|:-------------------:|:-------:|:--------:|
|    =   |Asignación Básica    |x = 6    | x vale 6 |
|   *=   |Asignación Producto  |x *= 5   | x vale 30|
|   /=   |Asignación División  |x /= 2   | x vale 3 |
|   +=   |Asignación Suma      |x += 4   | x vale 10|
|   -=   |Asignación Resta     |x -= 1   | x vale 5 |
|   %=   |Asignación Básica    |x %= 5   | x vale 1 |
## Aritméticos.
|Operador|Accion               |Sintaxis  |
|:------:|:-------------------:|:-------:|
|    +   |Suma dos operandos   |a + b;    |
|    -   |Resta dos operandos  |a-b;   |
|    *   |Multiplica dos operandos|a * b;|
|    /   |Divide dos operandos  |a / b;|
|    %   |Obtiene el residuo de una división de enteros|a % b;| 
|   ++   |Incrementa uno al valor de un operando    |a++; ++a;|
|   --   |Decrementa uno al valor de un operando    |a--; --a;|

## Lógicos.
|Operador|Accion               |Sintaxis  |
|:------:|:-------------------:|:-------:|
|    &&  |Devuelve true sólo si a y b son true. (Conjunción lógica)  |a && b;|
|   \| \|   |Devuelve true si a o b es true. (Disyunción lógica)  |a \| \| b;   |
|    !   |Niega el valor de la variable a. (Negación lógica)|!a;|

## Relacionales.
## Condicionales.

# Entrada y salida estandar.

## Impresion de datos con *print*.
### Estilos.

## Lectura de datos con *scanf*.

# Estructuras de control.

## Seleccion.

### If.

### Else.

### If-else.

## Repetición.
### For.
### While.
### Switch-case.

# Arreglos.

## Unidimensionales.
## Bidimensionales.

# Funciones.

## Variables globales y locales.

## Paso de parámetro por valor.

## Recursividad. 

#### Fin