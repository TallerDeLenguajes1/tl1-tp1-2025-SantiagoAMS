#include <stdio.h>

int Cuadrado(int n);
void CuadradoReferencia(int *n);
void Invertir(int *a, int *b);
void Orden(int *a, int *b);


int main(){
    
    int a, b;

    printf("\nIngresa el valor \"a\": ");
    scanf("%d",&a);
    
    printf("\nIngresa el valor \"b\": ");
    scanf("%d",&b);
    
    printf("\n--------- CUADRADO POR VALOR ---------");
    printf("\nCuadrado de a (%d): %d",a,cuadrado(a));
    printf("\nCuadrado de a (%d): %d",b,cuadrado(b));
    printf("\n--------- CUADRADO POR REFERENCIA ---------");
    printf("\nCuadrado de a (%d): ",a);
    cuadradoReferencia(&a);
    printf("%d",a);
    
    printf("\nCuadrado de a (%d): ", b);
    cuadradoReferencia(&b);
    printf("%d",b);
    
    printf("\n--------- INVERSION ---------");
    printf("\na = %d",a);
    printf("\nb = %d",b);
    printf("\n INVIERTO");
    Invertir(&a,&b);
    printf("\na = %d",a);
    printf("\nb = %d",b);
    
    printf("\n--------- ORDENAR ---------");
    printf("\na = %d",a);
    printf("\nb = %d",b);
    printf("\n REORDENO ");
    Orden(&a,&b);
    printf("\na = %d",a);
    printf("\nb = %d",b);
    
    return 0;    
}

int Cuadrado(int n){
    return n*n;    
}

void CuadradoReferencia(int *n){
     printf("\nDireccion: %x",n);
     printf("\nContenido: %d",*n);
     *n = (*n) * (*n);
}

void Invertir(int *a, int *b){
     int c = *a;
     *a = *b;
     *b = c;
}

void Orden(int *a, int *b){
     if (*a >*b){
          int c = *a;          
          *a = *b;
          *b = c;
     }
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
