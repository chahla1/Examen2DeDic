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
    void agregarMateria(const std::string& nombre, float calificacion) {
        materias.push_back({nombre, calificacion});
    }
    void agregarAsistencia(const std::string& fecha, const std::string& materia, const std::string& estado) {
        asistencias.push_back({fecha, materia, estado});
    }
};



    int main(){
        try {
            Estudiante estudiante;
            estudiante.nombre = "Chahla";
            estudiante.edad = 19;
            estudiante.promedio = 7.7;


    }
    return 0;
}
