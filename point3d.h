#ifndef POINT3D_H
#define POINT3D_H
#include "point2d.h"

class point3d : public point2d      // aqui ocorre a herança da classe 2d para a classe 3d
{
    public:
        point3d();
        point3d(float nx, float ny, float nz);
        point3d(const point3d &p);
        virtual ~point3d() {}
        void setZ(float nz);
        float getZ() const {return this->z;}
    protected:
        float z;
};

#endif // POINT3D_H
