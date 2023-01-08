# Tareas 🗒️✍🏻
Las tareas es programar basicamente con lo que se vio en clase, no son muy complejas, pero si surgen dudas de ellas pueden preguntar al inicio de la clase o con el contacto de los intructores que estamos. 

Las entregas pueden por *classroom* o por *Github*.

- Github. Mediante la carpeta llamada *Entregas* y hacer su entrega mediante un *Pull Request*.

- Classroom. La entrega es mediante la asignación y nada más con el archivo *.cpp*.

## Tarea 1. 
- Captura de tener instalado el compilador y correr desde consola o terminal el siguiente texto *hola tu_nombre*. Me refiero al nombre de ustedes.

## Tarea 2. 
- Resolver las siguientes operaciones (5 total). Tendrán que programarlas y poner los valores correspondientes a cada una (evaluar en cada formulita): 

$$
\frac{n(n+1)}{2}
$$

Esto con $n = 5$. Dato curioso: Para comprobar que están bien, sumen $1+2+3+4+5$ a esto se le conoce como la suma de *Gauss*.

$$
m\left(\frac{r+\frac{k}{l}}{2r+4m}\right)
$$

Donde $m = 1/2, r = 4/2,k = 3,l= 1$

$$
\lambda \leq\frac{(r+a)(b-a)}{b-c}<\pi
$$

Con $\lambda = 1/2,r = 1/5,a = 1,c = 1, b= 2 $. Ojo aquí, el resultado que se pida es que si esa expresión es cierta o falsa, es decir, el resultado tendrá que ser 0 o 1. Recuerden los booleanos.

$$
r^{2}+12r+36 = (r+6)(r+6)
$$

Con $r = 453210$. Verifiquen si es cierta esa operación con ese número. Para el cuadrado solamente es una expresión que se puede ver como $r\cdot r$.


Si  $i$ es par y $j$ es impar son distinos y también si $i$ es menor que $j$ pero  si cierto $p$ donde la suma de $p+j+i$ es menor que $j$. 

Vea si el argumento es cierto o falso dando ciertas condiciones:
Con $i = -2,j = 7,p =0$. Con $i = 2,j = 3, p=0$. Con $i = 2,j = 3, p=-5$. Finalmente  con $i = 2,j = 3, p=5$.

Ayuda 💡.
1. Si un numero es par tiene que ser su *modulo* o *resto* tiene que ser 0, si es impar tiene que ser distinto de 0. 
2. En el primer argumento dice *"y también si $i$ es menor que $j$..."*, en este caso ese "y" se puede representar como el operador lógico &&. 
3. En el segundo argumento tendrán que usar el operador "OR" donde en C++ se representa como ||.

## Tarea 3.
Programar los siguientes problemas usando estructuras de control.

1. Obtener el promedio de 5 materias, en las cuales el promedio definirá la calificación final del alumno. Si es menor a 6 tendrá que ir un anuncio diciendo que no aprobó el curso o algo por el estilo, así para cada calificación llegando hasta 10.

## Tarea 4.
1. Hacer un programa donde se le pregunte el tamaño del arreglo de tamaño $n$ que sea de numeros enteros Se tiene que sacar la suma, resta y multiplicación de todos los elementos en el array. *Sugerencia*: Para la suma, resta inicialicen la variable en 0 y para la multiplicación en 1.

## Tarea 5.

1. Hacer una calculadora sencilla. (Operaciones por dos números)
    - Todas la operaciones tiene que estar definidas por funciones.
    - Una función menú.
    - En el caso de la división si el denominador es 0 ver una condición que se pueda utilizar para ese caso.
