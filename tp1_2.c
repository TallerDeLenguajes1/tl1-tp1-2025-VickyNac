
#include <stdio.h>
#include <stdlib.h>

//4 a)
int cuadrado (int num);
//4 b)
void cuadradoVoid (int num);
//4 c)
void variable (int num);
//4 d)
void invertir(int *a,int *b);
//4 e)
void orden (int *a, int *b);


int main (){
    //punto 4 a-b-c
    int num;
    printf ("Ingresa un numero: ");
    scanf ("%d", &num);
    
    printf ("\nCuadrado de %d usando la funcion cuadrado %d", num, cuadrado(num));
    
    printf("\n Usando el procedimiento: ");
    cuadradoVoid(num);
    
    printf ("\n funcion para ver el contenido de la variable ingresada");
    variable (num);
    
    
    //punto 4 f)
    int cant, a ,b ;
    int *puntA, *puntB;
    
    printf ("Ingrese la cantidad de pares de numeros que quiere cargar: ");
    scanf ("%d", &cant);
    
    
    for (int i = 0; i < cant; i++) {
         
        printf ("PAR DE NUMEROS [%d]", i+1);
        printf("\ningrese el primer numero: ");
        scanf ("%d", &a);
        printf("\ningrese el segundo numero: ");
        scanf ("%d", &b);
        puntA = &a;
        puntB = &b;
        
        invertir (puntA, puntB);
        orden (puntA, puntB);
        
        
        
    }
    
    
    
    return 0;
    
}



//4 a)
int cuadrado (int num){
    return num*num;
}


//4 b)
void cuadradoVoid (int num){
    printf ("el cuadrado de %d es %d", num, num*num);
    
}

//4 c)
void variable (int num){
    printf ("contenido de la variable: %d \n", num);
    
    printf ("direccion de la variable: %p", &num);
    
}

//4 d)

void invertir(int *a, int *b){
    printf ("numeros ingresados: \nA=%d \n B=%d", *a, *b );
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
    
    printf("numeros invertidos: \nA=%d \nB=%d", *a,*b);
}

//4 e)

void orden (int *a, int *b){
    printf ("numeros ingresados: \n a = %d  \n b = %d", *a, *b);
    if ( *b < *a ){
        
        int aux = *a;
        *a = *b;
        *b = aux;
    } 
    printf ("numeros ordenados: \n a = %d \n b = %d", *a, *b);
}

