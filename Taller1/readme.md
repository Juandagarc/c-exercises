# PROGRAMACION II TALLER DE EXPRESIONES

## Ejercicios de instrucciones sobre variables

### PROGRAMA 1

Si x, v y p son variables de tipo real; cont, i y k son variables de tipo entero; letra y c son variables de tipo carácter, band y terminar son variables de tipo booleano; MAX es una constante de tipo entero y PI es una constante de tipo real, determinar cuáles de las siguientes instrucciones son válidas. Se debe justificar la respuesta.

- leer (letra)
- escribir ( MAX)
- leer (cont)
- escribir (x)
- leer (MAX)
- leer (v)
- x := enteroAreal(k) + 2.0 * PI
- letra :=‘p’
- letra :=“p”
- letra :=p
- letra :=c
- p:=v/x*raiz2(p)–band
- x :=“3.2444” + “1.4e-4”
- x :=3.2444 + 1.4e-4
- x :=‘v’ + ‘p’
- terminar :=p > v >=x
- terminar :=verdadero
- terminar :=“falso”
- terminar :=‘f’ <=letra
- x+3.0:=v
- v :=x * p + enteroAreal(caracterAentero(letra))
- band :=(x+v)*p I terminar I cont <= k + i
- k := caracterAentero ( letra + caracterAentero (c) ) + k

### PROGRAMA 2

Si x, v y p son variables de tipo real, con valores 3.5, 1.4 y 6.0 respectivamente, determinar el valor de la variable z de tipo real al realizar cada una de las asignaciones siguientes:

- z:=v-p/(x+p /x–v)
- z:=p/x/v+p/x*v
- z:=(v–3.0*x/p)/(4.0–v/(5.0+p/x))
- z :=2.0*p – 4.0/v + 5.0*x/(3.0+v*p – x)

### PROGRAMA 3

Suponga que x, v y p son variables de tipo real, con valores 3.5, 1.4 y 6.0 respectivamente; i, k y cont son variables enteras con valores 5, 2 y –4, respectivamente; letra y c son variables de tipo carácter con valores ‘p’ y ‘t’; y bandera y terminar de tipo booleano con valores falso y verdadero respectivamente. Determine el valor de cada una de las variables, después de ejecutar las siguientes instrucciones, en el orden en que aparecen.

- x :=v + enteroAreal( caracterAentero( letra ) )
- k :=( k–2*cont )* ( k–2*cont ) + i*( cont – k / 2.0 )/cont
- v :=x + (p – raiz2(x) * ( v – x ) + 3.0) * p
- bandera :=(terminar ı¬(i+2 <>cont ıp>=v)) ı( x+v) = p
- cont :=cont + 1
- i:= cont * realAentero(x * v – p/2.0) + k – i
- p :=p + x – enteroAreal( piso( p+x) + 5 )
- letra :=enteroAcaracter( k )
- k :=( k + cont ) mod ( piso( p ) + techo( v ) )

### PROGRAMA 4

Suponga que x, v y p son variables de tipo real, con valores 3.5, 1.4 y 6.0 respectivamente; i, k y cont son variables enteras con valores 5, 2 y –4, respectivamente; letra y c son variables de tipo carácter con valores ‘p’ y ‘t’; y bandera y terminar de tipo booleano con valores falso y verdadero respectivamente. Determinar el valor de cada una de las variables después de ejecutar las siguientes instrucciones, en el orden en que aparecen.

- v :=x + (p – raiz2(x) * ( v – x ) + 3.0) * p
- bandera :=(terminar ı~(i+2 <=cont ıp>=v)) ı(x+v = p)
- i :=cont * realAentero(x * v – p/2.0) + k – i
- k :=( k–2*cont ) ( k–2*cont ) + i*( cont – k / 2.0 )/cont
- x :=v + enteroAreal(caracterAentero( letra ) )
- cont :=cont + 1
- letra :=enteroAcaracter( k )
- k :=( k + cont ) mod ( piso( p ) + techo( v ) )
- p :=p + x – enteroAreal( piso( p+x) + 5 )

## Ejercicios de expresiones

### PROGRAMAS 5

Si tiempo, velocidad y peso son variables de tipo real; contador, itera y suma son de tipo entero; letra y primo son de tipo carácter y bandera es de tipo booleano, determinar cuáles de las siguientes expresiones son válidas y cuales no; se debe justificar la respuesta.

a. (tiempo + itera) / (velocidad + peso)
b. piso(tiempo) + contador < itera * suma & ~bandera
c. tiempo * velocidad < bandera & peso >=0.0
d. letra + contador * suma
e. techo(velocidad) * suma + piso(tiempo) * itera

### PROGRAMA 6

Si tiempo, velocidad y peso son variables de tipo real; contador, itera y suma son de tipo entero; letra y primo son de tipo carácter y bandera es de tipo booleano, con valores 3.0, -4.5, 8.0, 5, -2, 30 y falso respectivamente, evaluar las siguientes expresiones

a. itera + piso(tiempo + velocidad) / (suma + itera)
b. letra <>primo & techo(tiempo) / piso(velocidad) + cuenta < 5
c. peso * velocidad / ( tiempo + 5.6 )
d. contador + ((itera)*(itera)* suma) / 4 – itera
e. bandera &(raiz2(tiempo) <=peso * velocidad)
f. contador < suma ı tiempo > 1.0 & ~(suma = itera)
