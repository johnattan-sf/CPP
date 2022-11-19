#ifndef POINT2D_H
#define POINT2D_H


class point2d {
    public:
        point2d();                          // construtor padrão, inicia com valores padrões
        point2d(float nx, float ny);        // construtor parametrizado, serve para inserir valor ao instanciar o objeto
        point2d(const point2d &p);          // construtor de cópia, serve para ensinar o compilador a copiar esse objeto
        virtual ~point2d() {}               // destrutor, destroi o objeto, nunca chama-lo
        void setX(float nx);
        void setY(float ny);
        float getX() const {return this->x;}
        float getY() const {return this->y;}
    protected:
        float x;
        float y;
};

#endif // POINT2D_H
