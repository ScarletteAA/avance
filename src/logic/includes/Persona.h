#ifndef TALLER1_PERSONA_H
#define TALLER1_PERSONA_H
#include<iostream>
using namespace cv;
using namespace std;

class Persona{
    private:
        string path = "imagen.png";
        Mat imagen = imread(path);
        int contEntrada;
        int conSalida;

    public:
        Persona();
        Persona(Mat imagen);
        void setP(Persona p);
        Persona geP();
        ~Persona();

};
#endif //TALLER1_PERSONA_H