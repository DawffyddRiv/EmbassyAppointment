
//Programa en el que se ingresan 5 títulos de libros, su año de publicación y autor. 
//El programa compara el año de publicación y hace el acomodo (ordenar) del más antiguo al más reciente 

#include <stdio.h>
#define NO_LIBROS 3 //Se puede cambiar el valor de 5 por el numero natural que se desee
//Definicion de estructura para los registros
typedef struct{
	int anio;
	char nombreLibro[30];
	char nombreAutor[30];
	
}libro;

//Prototipo de la función para ordenar los registros
void ordenarLibros(libro[]);
int main(){
	libro libreria[NO_LIBROS];//Definimos una estructura tipo "Libro"de tamaño 5
	int i;
	//i=0;
	//Introducción de los registros por teclado
	printf("****************************************\n");
	printf("Programa que ordena los libros por anio\n");
	printf("****************************************\n\n\n");
	printf("<Libros ordenados ascendente>\n");
	for (i=0;i<NO_LIBROS;i++){
	
		printf("Introduce el nombre del libro\n");
		gets(libreria[i].nombreLibro);
		printf("Introduce el nombre del autor\n");
		gets(libreria[i].nombreAutor);
		printf("Introduce el anio del libro\n");
		scanf("%d",&libreria[i].anio);
		printf("\n");
		fflush(stdin);
	
	}
	//Llamada a la función para ordenar los registros
	ordenarLibros(libreria);
	
	printf("\n\tLos libros son\n\n");
	//Impresión de los registros en pantalla
	for(i=0;i<NO_LIBROS;i++){
		printf("Autor: %s\n",libreria[i].nombreAutor);
		printf("Titulo Libro %s\n",libreria[i].nombreLibro);
		printf("Anio %d\n\n",libreria[i].anio);
		printf("-----------------------------------------\n");
		
	}
	printf("Fin del programa\n");
	printf("David Riv\n");
	printf("Matricula: ES20 \n");
	
}

void ordenarLibros(libro xlibros[]){
	int i,j;
	libro aux;
	for(i=0;i<NO_LIBROS;i++){
		for(j=i+1;j<NO_LIBROS;j++){
			if(xlibros[i].anio > xlibros[j].anio){
				aux=xlibros[i];
				xlibros[i]=xlibros[j];
				xlibros[j]=aux;
				
			}
		}
	}
	
}
