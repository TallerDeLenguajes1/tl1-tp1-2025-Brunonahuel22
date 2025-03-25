[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

# Todo sobre git ignore

## ¿Por qué es conveniente incluirlo?

_Para ocultar alguna **informacion sensible** que no puede ser de publico conocimiento_

- Evita subir archivos innecesarios: Archivos temporales, binarios, logs, dependencias generadas, entre otros.

- Mejora el rendimiento del repositorio: Mantiene el repositorio limpio y liviano.

- Protege información sensible: Previene la inclusión accidental de claves API, credenciales u otros datos privados.

## Configurar GitIgnore

_Ábrelo con un editor de texto como Visual Studio Code, Nano o Notepad y agrega las reglas necesarias._
_Si quieres ignorar archivos ejecutables (.exe) y otros archivos generados en la compilación de C, el contenido del .gitignore puede ser_

### Ignorar ejecutables de C

\*.exe

### Ignorar archivos objeto generados por la compilación

\*.o
