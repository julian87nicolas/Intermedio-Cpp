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

