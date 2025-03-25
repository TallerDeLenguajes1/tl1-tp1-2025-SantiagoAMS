[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

# Preguntas y respuestas

## Preguntas del archivo `.gitignore`
> ### 1 - ¿Por que es conveniente incluir el archivo `.gitignore`?

Algunas veces cuando tenemos archivos que no son codigo como algun documento, imagen, video, asset (en algunos rubros), dependencias, o incluso API KEYS, como desarrolladores **NO QUEREMOS** que se vean en el repositorio, y algunas de las razones serian:
- Dar acceso a una API KEY a personas no autorizadas suele conllevar a bastantes problemas.
- Rellenaria el repositorio con contenido que no va al caso como dependencias o recursos, ya que algunas veces solo el código es importante, y al excluir las dependencias se simplifica el repositorio de manera considerable.
- Algun contenido de la zona de trabajo podria contener informacion sensible del desarrollo que el resto del equipo o quienes accedan al repositorio no deberian conocer (aparte de una API KEY).
 
> ### 2 - ¿Cuándo se debe hacer?
Cuando hayan archivos que no necesitamos hacer publicos en el repositorio, que sean redundantes, o cuando tengamos dependencias.
 
> ### 3 - ¿Cómo configuraría el archivo .gitignore?
Desde este enlace [gitignore.io](https://www.toptal.com/developers/gitignore) se puede generar una base inicial, y el resto se haria manualmente
 
## Preguntas del archivo tp1_1.c
> ### 1 - ¿Por que los apartados 2 y 3 dan el mismo resultado?
Porque `p` esta apuntando a la direccion de memoria de `var`, y `&var` devuelve la dirección de memoria de `var`.

> ### 2 - ¿Que obtiene en el punto 4? ¿Es igual a los anteriores?
En el punto 4 se devuelve la direccion de memoria donde se esta almacenando la direccion de memoria de `var` (es decir el contenido de `p`). 

No son las mismas direcciones ya que la direccion donde se almacena el contenido de `p` no puede ser igual a la de `var` ya que esto significaria que `p` se esta apuntando a si mismo y `p` es un *puntero a entero*, no un *puntero de puntero a entero*. 
