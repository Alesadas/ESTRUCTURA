#include <stdio.h>

int main(){

struct persona


{

    int matricula;

    char nombre[20];

    char direccion[50];

    char carrera[25];

    float promedio;

    

}alumno1={1500,"juan","Quito","Software",9.2};

printf("%d %s %s %s %f",alumno1.matricula, alumno1.nombre, alumno1.direccion, alumno1.carrera, alumno1.promedio);

return 0;


}