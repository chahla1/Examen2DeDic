#include <iostream>
#include <vector>
#include <stdexcept>

struct Materia {
    std::string nombre;
    float calificacion;
};
struct Asistencia {
    std::string fecha;
    std::string materia;
    std::string estado;  // "Asiste", "Falta", "Tarde"
};
class Estudiante {
public:
    std::string nombre;
    int edad;
    float promedio;
    std::vector<Materia> materias;
    std::vector<Asistencia> asistencias;

    void mostrarEstudiante() const {
        std::cout << "Nombre: " << nombre << "\nEdad: " << edad << "\nPromedio: " << promedio << "\n";

        std::cout << "Materias:\n";
        for (const auto& materia : materias) {
            std::cout << "  - " << materia.nombre << ": " << materia.calificacion << "\n";
        }
        std::cout << "Asistencias:\n";
        for (const auto& asistencia : asistencias) {
            std::cout << "  - Fecha: " << asistencia.fecha << ", Materia: " << asistencia.materia
                      << ", Estado: " << asistencia.estado << "\n";
        }
    }



    int main(){

    }
}
