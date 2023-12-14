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
void agregarMateria(struct Estudiante* estudiante, const char* nombre, float calificacion) {
    if (estudiante->numMaterias < MAX_MATERIAS) {
        strcpy(estudiante->materias[estudiante->numMaterias].nombre, nombre);
        estudiante->materias[estudiante->numMaterias].calificacion = calificacion;
        estudiante->numMaterias++;
    } else {
        fprintf(stderr, "Se ha alcanzado el limite de materias\n");
    }
}
void agregarAsistencia(struct Estudiante* estudiante, const char* fecha, const char* materia, const char* estado) {
    if (estudiante->numAsistencias < MAX_ASISTENCIAS) {
        strcpy(estudiante->asistencias[estudiante->numAsistencias].fecha, fecha);
        strcpy(estudiante->asistencias[estudiante->numAsistencias].materia, materia);
        strcpy(estudiante->asistencias[estudiante->numAsistencias].estado, estado);
        estudiante->numAsistencias++;
    } else {
        fprintf(stderr, "Se ha alcanzado el limite de asistencias\n");
    }
}




int main(){

}