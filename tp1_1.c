#include <stdio.h>
#include <stdio.h>


//punto 3 a)
int main(){
    //punto 3 a)
    
    printf("Hola Mundo");
    
    //punto 3 e)
    
    char aux;
    char *pAux = & aux;
    
    //1-
    printf("contenido del puntero: %c \n", *pAux);
    
    //2-
    printf("direccion de memoria almacenada por el puntero: %p \n", pAux);
    
    //3- 
    printf("direccion de memoria de la variable: %p \n", &aux);
    
    //4-
    printf("direccion de memoria del puntero: %p \n", &pAux);
    
    //5-
    printf ("tamaño de la memoria que utiliza la variable aux: %zu \n", sizeof(aux));
    
    return 0;
}

/* El resultado de mostrar la dirrecion de memoria almacenada por el puntero y la dirrecion de memoria de la variable es el mismo porque el puntero pAux apunta a la dirrecion de memoria de la variable Aux.
    En el punto 4 se obtiene la dirrecion de memoria del puntero, es distinto el resultado a el de los otros puntos porque se apunta a la dirrecion del puntero, no la de la variable a la que apunta. */
    