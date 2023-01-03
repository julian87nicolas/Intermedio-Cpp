# Contenido
* [Conceptos básicos de la programación orientada a objetos](#conceptos-básicos-de-la-programación-orientada-a-objetos)
* [Pilas: una mirada desde dos perspectivas diferente](#pilas-una-mirada-desde-dos-perspectivas-diferentes)
* [Componentes de clase](#componentes-de-clase)
# Conceptos básicos de la programación orientada a objetos
El lenguaje C++ fue creado como una herramienta universal para la programación orientada a objetos. Esto no significa que no podamos usarlo para otra metodología de programación. 

## Clases y objetos
En el enfoque de programación por procedimientos se pueden distinguir dos mundos diferentes: el mundo de los **datos** y el mundo del **código**. El mundo de los datos está poblado por variables de diferentes tipos, mientras que el mundo del código está habitado por código agrupado en funciones.

El enfoque orientado a objetos sugiere una forma diferente de pensar. Los datos y el código están juntos en el mismo mundo, divididos en clases. Cada clase es como un recipiente que puede ser usado cuando buscamos crear un objeto útil. Cada objeto tiene un conjunto de rasgos, llamados **propiedades** y un conjunto de actividades llamados **métodos**.

El "recipiente" puede ser modificado si no es adecuado para ciertos propósitos, en efecto, nuevas clases pueden ser creadas. Las nuevas clases **heredan** propiedades y métodos de los originales y usalmente añaden nuevos, creando nuevas y más específicas herramientas.

## Clases - ¿Qué son?
Para nuestros propósitos `clase` se refiere a una "categoría" o "género". Por ejemplo hablemos de *vehículos*. Todos los vehículos están relacionados por una caracteristica importante: la habilidad de moverse. La clase "vehículo" es una clase muy amplia por lo que necesitamos definir algunas clases más especificas. Las clases más específicas son llamadas, o serán llamadas, **subclases**. La clase vehículo es la **superclase** de las subclases. La jerarquía de clases crece desde arriba hacia abajo, como las raíces de un árbol. La clase más general y amplia está siempre arriba (super) mientras que sus descendientes abajo (subs).

Hay muchas clasificaciones para subclases de vehículo, por ejemplo:
* Vehiculos terrestres
* Vehiculos acuáticos
* Vehiculos aéreos
* Vehiculos espaciales

![](img/clase-vehiculos.png)

Las direcciones de las flechas siempre apuntan a la superclase. La clase superior es una expecion, no tiene una superclase.

## Objetos - ¿Qué son?
Un objeto es un ser perteneciente a una clase. Es una encarnación de los requetimientos, rasgos y cualidades asignados a una clase. Teniendo en cuenta la jerarquía de clases, un objeto perteneciente a una clase pertenece a todas las superclases de la misma.

Por ejemplo: un vehiculo particular pertenece a la clase "vehiculos con ruedas". Este ademas pertenece a todas las superclases de su clase principal, es decir, es un miembor de la clase "vehiculos" tambien.

![](img/objetos-vehiculos.png)

## Herencia
Cualquier objeto encuadernado a un nivel específico de una jerarquía de clases hereda todos sus rasgos (así como requerimientos y cualidades) definides en todas las superclases. La clase madre del objeto define nuevos rasgos que serán heradados por sus subclases.

## ¿Qué tiene cualquier objeto?
La programacion orientada a objetos asume que cada objeto existente debe ser equipado con tres diferentes grupos de atributos:
1. **Nombre**: el nombre identifica a un objeto único cno su namespace propio (aunque pueden existir objetos anónimos tambien).
2. **Propiedades**: el conjunto de propiedades lo hacen original, único y diferente (existe la posibilidad de que existan objetos sin propiedades).
3. **Actividades**: un objeto tiene un conjunto de habilidades para realizar actividades específicas que pueden cambiar al mismo objeto o a otros objetos.

Una idea que puede ayudar a identificar estos 3 atributos es pensar que cuando describimos un objeto usamos:
* Un **sustantivo** para definir el **nombre** del objeto.
* Un **adjetivo** para definir las **propiedades** del objeto.
* Un **verbo** para definir las **actividades** del objeto.

Por ejemplo - *"Mas es un gato grande que duerme todo el día"*:
```
Object name = Max
Home class = Cat
Property = Size (large)
Activity = Sleep (all day)
```

## ¿Qué es todo esto?
La programación de objetos es el arte de definir y expandir clases. Las clases son modelos de una parte muy especifica de la realidad que refleja propiedades y actividades encontradas en la vida real. Las clases definidas al principio usualmente son muy generales e imprecisas para cubrir la gran cantidad de casos reales. Por lo tanto, las clases se pueden extender y modificar para crear nuevas clases más específicas y precisas, mediante la herencia. Las nuevas clases pueden añadir nuevas propiedades y actividades y ser más útiles en aplicaciones específicas.

La creacion de las clases no tiene nada que ver con la creación de objetos: **la existencia de una clase no significa que cualquier objeto compatible será automáticamente creado**. La clase en sí no es capaz de crear un objeto - debemos crearlo nosotros. Pero el lenguaje C++ nos permite hacer esto.

Es momento de observar como definir la clase más simple y cómo crear un objeto. Veamos un ejemplo:
```cpp
class OurClass {};
```

Hemos definido una clase. Esta lcase es bastante pobre, no tiene propiedades ni actividades. Esto no importa por ahora. Cuanto más simple la clase mejor para nuestro propósito.

La definición de la clase comienza con la palabra reservada `class` seguida de un **identificador** que nombra a la clase. Luego añadimios un par de llaves cuyo contenido interior define las propiedades y actividades de la clase.

En este caso nuestra clase está vacía. 

La nueva clase definida se convierte en un equivalente a un **type** y podemos usarla como un nombre de type. Si queremos crear un objeto de nuestra clase `OurClass` declaramos la variable donde almacenaremos los objetos de esta clase y crearemos un objeeto al mismo tiempo:
```cpp
OurClass object;
```

# Pilas: una mirada desde dos perspectivas diferentes
Una pila o *stack* es una estructura desarrollada para almacenar datos de una forma muy especifica. Imaginemos una pila como una pila de monedas, podemos ir apilandolas una a una, pero para obtener una moneda debemos sacar la de la ubicación superior, no podemos quitar la de la base. Si deseamos hacer esto último debemos sacar una a una todas las monedas.

El nombre alternativo de una fila es **LIFO**, el cual es una abreviación de la descripción del comportamiento de las pilas: *"Last In - First Out"* (Primero en entrar, ultimo en salir).

Una pila es un objeto de dos operaciones elementales convencionales llamadas *"push"* (cuando un nuevo elemento es ubicado en la cima) y *"pop"* (cuando un elemento existente es tomado desde la cima).

## Pilas o LIFO
Primero debemos decidir como almacenar valores que lleguen a nuestra pila. Se sugiere usar el método más simple con un vector para este trabajo. Asumiremos de forma imprudente que no hay más de 100 valores en la pila al mismo tiempo. Además supondremos que el elemento del indice 0 es la base de la pila.

La pila en si es declarada aquí:
```cpp
int stack[100];
```

## Puntero a pila
El arreglo no es suficiente para implementar una pila. Necesitamos algunos detalles adicionales. Por ejemplo, necesitamos una variable que sea la responsable de almacenar un numero de elementos almacenados actualmente en la pila. Esta variable es generalmente llamada *"stack pointer"* o puntero a pila, abreviado **SP**.

Inicialmente, la pila está vacía, por lo que al SP se le deberá asignar un valor de 0.
```cpp
int SP = 0;
```

## Push
Estamos listos para definir una función que ubique un valor en la pila. Esto es lo que supondremos:
* El nombre de la función será `push`.
* La función obtiene un argumento del tipo `int`.
* La función no retorna nada.
* La función coloca el valor del argumento en el primer elemento libre en el vector e incrementa el SP.

Así es como lo haremos:
```cpp
void push(int value) {
    stack[SP++] = value;
}
```

## Pop
Es momento de crear la función para tomar un valor de la pila. Así es como la imaginamos:
* El nombre de la función es `pop`.
* La función no tiene ningún argumento.
* La función lee el valor de la cima de la pila y decrementa el SP-
* La función retorna el valor tomado de la pila.

La función resulta:
```cpp
int pop() {
    return stack[--SP];
}
```

> [Código de ejemplo de pilas](ejemplos/Stacks.cpp)

## Pros y contras
Nuestra pila está lista. Por supuesto tiene algunas falencias y la implementación puede ser mejorada de muchas formas, pero la idea general está bien y podemos usar nuestra pila si la necesitamos.

Pero ...

Mientras más la usemos, más **desventajas** descubriremos. Veamos algunas de ellas:
* Dos variables esenciales (`stack` y `SP`) son completamente vulnerables; cualquiera puede modificarlas de formas incontrolables, destruyendo el efecto de la pila, esto no significa que sea malicioso, por el contrario, esto podría suceder como resultado de un descuido; imagina que por error escribimos algo como: 
    ```cpp
    SP = 100;
    ```
    El funcionamiento de la pila sería completamente desorganizado.
* Podría suceder que un día necesitemos más de una pila; deberemos entonces crear otro vector para el almacenamiento de la pila, otro SP para el nmuevo vecto y probablemente más funciones `push()` y `pop()`.
* Podría además suceder que no solo necesitemos funciones `push()` y `pop()` sino algunas otras cosas; podemos implementarlas pero intenta imaginar que sucede cuando tenemos docenas de pilas implementadas por separado.
* Hemos usado el `int` para la pila, pero podríamos querer usar otras pilas definidas para otros tipos: floats, strings o incluso arrays y estructuras.

El enfoque objetivo provee soluciones para cada uno de estos problemas. Nombremos cada uno primero.

* La habilidad para ocultar (proteger) valores seleccionados contra accesos no autorizados es llamado **encapsulación**; los valores encapsulados no pueden ser accedidos ni modificados si deseamos usarlos de forma exclusiva.
* Cuando tenemos una clase implementando todos los comportamientos necesitamos, podemos producir tantas pilas como deseemos; no necesitamos copiar o replicar ninguna parte de código.
* La habilidad de enriquecer una pila con nuevas funciones proviene de la **herencia**; podemos crear una nueva clase (o más precisamente una **subclase**) que herede todos los rasgos existentes desde la superclase añadiendo algunas nuevas.
* Podemos crear una **plantilla** que es una clase generalizada y parametrizada, lista para materializarla en muchas diferentes encarnaciones; su código puede adaptarse para requerimientos variados y, por ejemplo, crear pilas listas para trabajar con otros tipos de datos.

Escribiremos una nueva implementación de una pila desde cero. Usaremos el enfoque objetivo, guiandonos paso por paso en el mundo de la programación de objetos.

## Pilas desde cero
Usaremos un vector como almacen de la pila y un `int` como SP. Solo debemos colocar ambos en una clase:
```cpp
class Stack {
    int stackStore[100];
    int sp;
}
```

Buscamos encapsular ambas variable y hacerlas inaccesibles desde fuera de la clase. Este tipo de data es llamado **privado** en programación de objetos. Es privada porque solo la clase misma puede accederlas y modificarlas.

Si deseamos marcar alguna parte de los datos de la clase como privados, debemos añadir la keyword `private` antes de la declaración.
```cpp
class Stack {
    private:
        int stackStore[100];
        int sp;
};
```

Realmente no necesitamos usar la keyword `private` en este punto ya que se asigna por defecto cuando no hay otra opción implicitamente especificada. Sin embargo, es preferible ser estricto de todos modos.

## La pila en acción
Ahora es momento de las dos funciones que implementen las operaciones `push` y `pop`. El lenguaje C++ asume que una funcion de este tipo (siendo una actividad de clase) puede describirse en dos formas diferentes:
* **Dentro de la clase**, cuando el cuerpo de la clase contiene una implementación completa del método.
* **Fuera de la clase**, cuando el cuerpo contiene solo el header de la función; el cuerpo de la función es ubicado fuera de la clase.

Es una decisión propia cuál elegir. Veremos ambos y decidiremos implementar la función `pop()` dentro del cuerpo de la clase, mientras que implementaremos la función `push()` fuera de la clase.

Buscamos invocar estas funciones por lo que serán accesibles para usuarios de la clase (en contraste con las variables declaradas que son ocultas del usuario ordinario de la clase). Este tipo de componente es llamado `public` y usaremos esta keyword para enfatizar este hecho.

La declaración final resuta:
```cpp
class Stack {
    private:
        int stackStore[100];
        int sp;
    public:
        void push(int value);
        int pop() {
            return stackstore[--sp];
        }
};

void Stack::push(int value) {
    stackStore[sp++] = value;
}
```

La función que implementa las actividades de la clase y es ubicada fuera del cuerpo de la clase necesita ser descripta en una forma muy específica. Sus nombres deben ser **clasificados** usando el nombre de la clase y el operador `::`.

Nuestra clase no está lista para ser usada aún. Observar que el valor de `sp` no está inicializado. Debemos añadir otra función a nuestra clase, la cual será invocada implicitamente cada vez que una nueva pila sea creada. Llamamos a esta clase **constructor** porque es la responsable de la construcción apropiada de cada nuevo objeto de la clase.

Desafortunadamente no podemos nombrar esta función de la forma que queramos. Su nombre es determinado por los requerimientos del lenguaje C++. Debe ser nombrada igual que la clase.

Hay otro punto importante: **los constructores no son funciones reales**. Estos no retornan ningun type, ni siquiera `void`. Debemos tomar esto en consideración cuando declaramos o definimos un nuevo constructor.

La clase está completa en el siguiente snippet:
```cpp
class Stack {
    private:
        int stackStore[100];
        int sp;
    public:
        Stack() {
            sp = 0;
        }

        void push(int value);
        int pop() {
            return stackStore[--sp];
        }
};

void Stack::push(int value) {
    stackStore[sp++] = value;
}
```

> [Código de ejemplo de pilas con POO](ejemplos/POOStacks.cpp)

Ahora haremos algo más. buscamos una nueva clase que no solo manipule pilas sino que también sea capaz de evaluar una suma de todos los elementos actualmente almacenados en la pila.

Además no deseamos modificar la pila definida anteriormente, en otras palabras, buscamos consturir una **subclase** de la clase `Stack`.

Así es como se verá:
```cpp
class AddingStack : Stack {
};
```
La clase no define ningún nuevo componente aún, pero esto no significa que está vacío. **Esto deriva todos los componentes definidos por su superclase** - el nombre de la superclase es escrito directamente luego de los dos puntos, siguientes al nombre de la nueva clase.

Cualquier objeto de la clase `AddingStack` puede hacer todo lo que los objetos de la clase `Stack` hacen.

Ahora vamos a añadirle algunos nuevos trucos:
1. Buscamos que la función `push` no solo pushee el valor en la pila, sino que tambien agregue el valor de la varaible `sum`.
2. Buscamos que la función `pop` no solo saque valores de la pila, sino que substraiga el valor de la variable `sum`.

Primero añadimos una nueva variable a la clase. Está será privada, como las varaibles previas.

Luego cambiaremos la funcionalidad de las funciones sin cambiar su nombre. Podemos decir más precisamente que la interface de la clase sigue siendo la misma cuando cambiamos la implementación al mismo tiempo.

```cpp
class AddingStack : Stack {
    private:
        int sum;
    public:
        void push(int value);
        int pop();
};
```

Comenzaremos con la implementación de la función `push()`. Esto es lo que esperamos de ella:
* Que añada el valor a la variable `sum`.
* Que pushee el valor a la pila.

Esta es la nueva función `push`:
```cpp
void AddingStack::push(int value) {
    sum += value;
    Stack::push(value);
}
```

La primer sentencia es clara y no requiere explicación, pero al ver la segunda linea vemos que **no necesitamos definir la operación** de push nuevamente. La implementación de esta actividad es implementada dentro de la clase `Stack`. Lo unico que debemos hacer es usarla, pero debemos indicar claramente la clase que contiene la función para evitar confusiones con cualquier otra función con el mismo nombre.

Por esto es que colocamos el prefijo `Stack::` en la invocación.

De manera similar, esta es la nueva función `pop`:
```cpp
int AddingStack::pop() {
    int val = Stack::pop();
    sum -= val;
    return val;
}
```

Ahora definimos una nueva función, que llamaremos `get_sum` que retornará el valor de `sum`.
```cpp
int AddingStack::get_sum() {
    return sum;
}
```

Otra cosa que debemos tener en consideración es la inicialización de este valor `sum`. Este debe ser cero cuando el objeto es creado, lo cual hacemos en el constructor. Ya sabemos escribir un constructor, pero hay un punto en el que debemos enfatizar.

Cuando creamos un objeto de la clase `AddingStack` debemos tener en cuenta la inicialización de la superclase también. Veamos el nuevo constructor:
```cpp
AddingStack::AddingStack() : Stack() {
    sum = 0;
}
```

La frase `: Stack()` es una petición a invocar el **constructor de la superclase** antes de que el constructor actual comience su trabajo.

Veamos el código completo de la nueva clase:
```cpp
class AddingStack: Stack {
    private:
        int sum;
    public:
        AddingStack();
        void push(int value);
        int pop();
        int get_sum();
}

AddingStack::AddingStack() : Stack () {
    sum = 0;
}

void AddingStack::push(int value) {
    sum += value;
    Stack::push(value);
}

int AddingStack::pop() {
    int val = Stack::pop();
    sum -= val;
    return val;
}

int AddingStack::get_sum(){
    return sum;
}
```
> [Código de ejemplo subclase de Stack](ejemplos/POOStackSubClass.cpp)

# Componentes de clase
1.3.1.1
