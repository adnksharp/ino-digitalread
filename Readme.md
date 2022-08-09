# digital Read

[![dread-bb.png](https://i.postimg.cc/1RV0YM6S/dread-bb.png)](https://postimg.cc/0rxJzYcX)
Lectura de entradas digitales.

## Hardware y software necesarios
- Placa de desarrollo Arduino.
- Resistencia 10 $\displaystyle K\Omega$
- Interruptor push button
- [Arduino IDE](https://www.arduino.cc/en/software) o [Arduino CLI](https://arduino.github.io/arduino-cli/0.23/installation/).

## Funcionamiento
#### Variables
- ```Input```: Pin a leer.
- ```Change```: Variable auxiliar para imprimir en el puerto serial dentro de un bucle una sola vez.

#### Funcionamiento
El programa se encarga de leer si se activa el boton (la entrada se pone en ```alto```). Si es así, se muestra un mensaje sobre el estado del botón una sola vez dentro de un bucle de tipo ```while```.

Al dejar de ser presionado, el bucle while termina y se muestra el mensaje nuevamente.
