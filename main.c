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





int main(){

}