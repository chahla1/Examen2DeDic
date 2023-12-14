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

