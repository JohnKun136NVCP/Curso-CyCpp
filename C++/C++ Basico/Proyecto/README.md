<p align="right">
<img src = "https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg"
    width = "35px"
    align = "right">
</p>

# Proyecto final de C++ básico.💻

## Instrucciones de entrega. 🔎
- *Fecha límite*: **10 de febrero de 2023 a las 11:59 P.M**. 📆 
- El nombre del archivo de entrega debe ir en el siguiente formato *nombre_apellido_proyecto.cpp*. Ejemplo:
   ```
   akane_saotome_proyecto.cpp
   ``` 
-  El formato de entrega puede ser los siguientes:
    - Github.
    - Classroom.

<p align="right">
<img src = "https://img.icons8.com/color/96/null/github--v1.png"
    width = "30px"
    align = "right">
</p>


### En caso de Github. 
* Puede hacer un *folk* al repositorio y hacer un *Pull request**. Nada más con el *commit "Entrega C++ Proyecto* y con ello lo reviso.
* También es valido si se quiere hacer un *folk* y mostrarme sus cambios en el repositorio que modificaron nada más enviando el enlace del **repositorio con el *folk* en su perfil de Github** en *classroom* y también lo revisaré el proyecto desde ahí.

- Si les gustó el material del repositorio respositorio (no es obligatorio) pueden darle una ⭐.

<p align="right">
<img src = "https://img.icons8.com/arcade/64/null/classroom.png"
    width = "30px"
    align = "right">
</p>

### En el classroom.
* Con la misma nomenclatura como se indicó en la parte superior.
* Nada subir el archivo *.cpp*, no es necesario el ejecutable.


# Calculadora de matrices 🧮.

El proyecto final consiste en hacer una calculadora de matrices usando todo lo visto en C++ de nivel básico. Existe muchas maneras de hacer este ejercicio (*con apuntadores*, *vectors*,...) pero esos temas se ven a más profundidad en cursos más avanzados. Sin embargo, empezar con lo básico es escencial para enterder esos temas.


Para los que no sepan que es una matriz es un conjunto de tamaño bidimensional de números. Digamos como una cajita con numeritos.

Ejemplo:


$$A = \begin{pmatrix}
        2 & 5 & 0 \\ 
        7 & 3 & 8 \\
        3 & 0 & 1
       \end{pmatrix}$$

Eso es una matriz. 

Esos numeritos dentro de esa cajita se pueden manipular, es decir, la matrices también tiene operaciones como lo que hacemos con los numeritos cotidianamente (*suma*,*resta*,*multiplicación*,...). En las matrices pasa lo mismo pero cambia un poquito las cosas. En la matriz $A$ se le conoce como una matriz de 3x3 por que tiene 3 filas como 3 columnas, también a esa matriz se dice que es cuadrada, ya que tiene el mismo numero de filas como de columnas.

## Operaciones con matrices.

- Suma y Resta (Si las matrices son cuadradas.)
    $$A + B = C$$
    Donde $A,B,C$ son matrices. La suma se le conoce que es entrada por entrada. Ejemplo:

    
$$A = \begin{pmatrix} 
            1 & 2 \\
            3 & 4 
           \end{pmatrix}$$
           
$$B = \begin{pmatrix}
        5&6\\ 
        7&8
       \end{pmatrix}$$

   Entonces la suma que dará la matriz $C$ es:
    
$$C = \begin{pmatrix}
        6&8\\
        10&12
      \end{pmatrix} =
      \begin{pmatrix}
        1&2\\
        3&4
      \end{pmatrix} + 
      \begin{pmatrix}
        5&6\\
        7&8
        \end{pmatrix} $$
    
  Sería análogo a la resta.
- Producto por un escalar (un numerito), es decir que pasa esto, donde $\lambda$ (lambda) es numerito:


$$\lambda A= 2\cdot\begin{pmatrix}
                    1&2\\
                    3&4
                    \end{pmatrix} = 
                    \begin{pmatrix}
                        2&4\\
                        6&8
                    \end{pmatrix}$$

- Producto de matrices. Digamos que aquí las cosas cambian un poco, ya que se pueden hacer con matrices cuadradas y algunas medio raras. Para estas es necesario que la matriz $B$ sus filas sean iguales a las columnas de la matriz $A$.

$$A = \begin{pmatrix}
            1&2\\
            3&4
            \end{pmatrix}$$
            
$$B = \begin{pmatrix}
        5\\
        7
        \end{pmatrix}$$

$$C = \begin{pmatrix}
        19\\
        43
      \end{pmatrix} =
      \begin{pmatrix}
        1&2\\
        3&4
      \end{pmatrix} \cdot
      \begin{pmatrix}
        5\\
        7
        \end{pmatrix} $$

Entonces la matriz $A$ es de 2x2 y la $B$ es de 2x1. En este caso se puede efectuar la operación pero si fuera que $B$ 1x2 no se podría. Ahora ¿Cómo se puede hacer una operación? Dejaré un video detallado para que puedan observar como se haría. Algo más que es importante, ⚠️ la multiplicación **no** es conmutativa, es decir, que si multiplico $A\cdot B \not= B\cdot A$.

[![Multiplicación de matrices](https://i.ytimg.com/vi/jyOmqlo9CNk/maxresdefault.jpg)](https://youtu.be/jyOmqlo9CNk)

- Matríz transpuesta. En este caso es cambiar el orden de los cofactores. Es decir, si tenemos a $B$.

$$B = \begin{pmatrix}
            5\\
            7
        \end{pmatrix}$$
 
 $$B^{T} = \begin{pmatrix}
            5&7
            \end{pmatrix}$$
            
 En el caso de la matriz $A$.
 
 $$A = \begin{pmatrix}
            1&2\\
            3&4
        \end{pmatrix}$$
 
 $$A^{T} = \begin{pmatrix}
                1&3\\
                2&4
           \end{pmatrix}$$

<p align="center">
<img src = "https://upload.wikimedia.org/wikipedia/commons/e/e4/Matrix_transpose.gif"
    width = ""
    align = "center">
</p>

> *Wikipedia* Transpuesta de una matriz.

## Especifiaciones. 🔎

- Hacer una calculadora de matrices de $m$ x $n$ con las operaciones.
    - Suma y Resta.
    - Multiplicación.
    - Producto Escalar.
    - Transposición de matrices.
    - Regla de Cramer (Opcional).
    - Aplicar función trigonometrica. (Opcional)
    - Salir del programa.
- Debe de tener:
    - Cada de las operaciones deben ser definidas por funciones.
    - Una función que verifique si mi matriz o matrices son cuadradas. (En el caso de la transpuesta no es necesario, pero el de la multiplicación a que tener cuidado).
    - Una función **menú**.
    - En el **menú** no se podrá salir el usuario hasta que escoja la opción "Salir del programa o Salir".
- Sobre los opcionales:
    - [Regla de Cramer](https://www.youtube.com/watch?v=lLPcHVAqY80): Utilizado para resolver sistemas de ecuaciones (Sí también se pueden representar de manera de matriz), en la cual tiene que dar la soluciones para $(x_{1},x_{2},...,x_{n})$ donde $x_{1},...,x_{n}$ son las incognitas de un sistema de ecuaciones de $n$ variables.
    > Puntos +1
    - Solamente están permitidas aplicar *coseno, seno* ya que son funciones de valores reales y pueden evaluarla en todos los números y también usar *#include\<cmath\>* para hacer las operaciones correspondientes.
    > Puntos + 0.5
    - Los puntos extra es sobre calificación final del curso. Recuerden que para aprobar el curso es que tengan calficación mayor a 8 y que tengan el 80% de asistencia.
### Anuncio final.

Gracias por tomar este curso y darnos su invaluable tiempo. 頑張ってください(がんばってください) *Ganbatte kudasai* En japonés significa "hacer el mejor esfuerzo"

<p align = "left">
<img src = "https://static.wikia.nocookie.net/wonder-egg-priority/images/3/36/Chibi_Ai.png/revision/latest?cb=20210120102537"width = "190px" height  = "260px" align = "left">
</p>
<p align= "right">
<img src = "https://kotobanogimon.life/wp-content/uploads/2019/12/pose_ganbarou_man-300x300.png"width = "270px" height  = "280" align = "right">
</p>


