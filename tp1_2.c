#include <stdio.h>

int cuadrado(int n);

int main(){
    
    
    return 0;    
}

int cuadrado(int n){
    return n*n;    
}

void cuadradoReferencia(int *n){
     *n = (*n) * (*n);
}

/*
a) Haga una función que devuelva el cuadrado de un número 
b) Haga la función anterior, pero devolviendo un tipo void 
c) Al recibir una variable muestre por pantalla la dirección y el contenido de 
la variable  
d) Dado dos parámetros de entrada, deberá invertir los valores entre 
ambos.   
void Invertir(a,b)  //deberá devolver en el valor de a en la 
variable b, y en el valor de b el valor de a  
e) Dado dos parámetros de entrada, deberá devolverlos de forma 
ordenada, en el primer parámetro el menor y en el segundo el mayor. 
void orden(a,b)  //deberá devolver en el valor de a el valor más 
chico, y en el valor de b el valor más grande 
f) 
Utilice las funciones anteriores para leer pares de valores e imprimirlos 
por pantalla. 
g) Al finalizar, debe subir todos los cambios al repositorio, usando los 
siguientes comandos. 
i. git add . 
ii. git commit -m “ejercicio 2.4 completado” 
iii. git push*/
