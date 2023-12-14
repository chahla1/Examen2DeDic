#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MATERIAS 10
#define MAX_ASISTENCIAS 10

struct Materia {
    char nombre[50];
    float calificacion;
};
struct Asistencia {
    char fecha[20];
    char materia[50];
    char estado[20];  // "Asiste", "Falta", "Tarde"
};
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
    struct Materia materias[MAX_MATERIAS];
    struct Asistencia asistencias[MAX_ASISTENCIAS];
    int numMaterias;
    int numAsistencias;
};
void mostrarEstudiante(const struct Estudiante* estudiante) {
    printf("Nombre: %s\nEdad: %d\nPromedio: %.2f\n", estudiante->nombre, estudiante->edad, estudiante->promedio);

    printf("Materias:\n");
    for (int i = 0; i < estudiante->numMaterias; ++i) {
        printf("  - %s: %.2f\n", estudiante->materias[i].nombre, estudiante->materias[i].calificacion);
    }
    printf("Asistencias:\n");
    for (int i = 0; i < estudiante->numAsistencias; ++i) {
        printf("  - Fecha: %s, Materia: %s, Estado: %s\n",
               estudiante->asistencias[i].fecha, estudiante->asistencias[i].materia,
               estudiante->asistencias[i].estado);
    }
}





int main(){

}