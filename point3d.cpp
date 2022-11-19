#include "point3d.h"

// construtor padrão
point3d::point3d() : point2d()    // aqui o construtor da classe 3d chama o da classe 2d antes
{
    this->z = 0.0;
}

// construtor parametrizado
point3d::point3d(float nx, float ny, float nz) : point2d(nx, ny)    // aqui chamamos a função 2d para retornar os valores de x e y para a 3d
{
    this->z = nz;
}

// construtor de cópia
point3d::point3d(const point3d &p)
{
    this->setX(p.getX());   // aqui deve-se utilizar o setter para não violar encapsulamento
    this->setY(p.getY());   // pois estamos acessando atributos da classe pai/mãe
    this->z = p.getZ();     // aqui não é necessário, pois estamos em um atributo da mesma classe
}

// setter da classe 3d:
void point3d::setZ(float nz)
{
    this->z = z;
}
