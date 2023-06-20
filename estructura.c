#include <stdio.h>

struct Alumno {

    char nombre[100];

    char direccion[100];

    char carrera[100];

    float promedio;

};
int main() {

  // se ingresa la cantidad de alumnos

    struct Alumno alumnos[3];

    for (int i = 0; i < 3; i++) {
    

        printf("Ingrese los datos del alumno %d:\n", i+1);
      

       
        printf("Nombre: ");

        scanf("%s", alumnos[i].nombre);

        fflush(stdin);
      

        

        printf("Direccion: ");

        gets(alumnos[i].direccion);
      

        

        printf("Carrera: ");

        gets(alumnos[i].carrera);
      

        
        printf("Promedio: ");

        scanf("%f", &alumnos[i].promedio);

        fflush(stdin);
      

        printf("\n");

    }


    printf("Datos de los alumnos:\n");

    for (int i = 0; i < 3; i++) {

        printf("Alumno %d:\n", i+1);

        printf("Nombre: %s\n", alumnos[i].nombre); 

        printf("Direccion: %s\n", alumnos[i].direccion); 

        printf("Carrera: %s\n", alumnos[i].carrera); 

        printf("Promedio: %.2f\n\n", alumnos[i].promedio); 

    }
    return 0;

}


