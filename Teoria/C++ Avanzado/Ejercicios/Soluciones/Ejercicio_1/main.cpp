// Copyright A.T. Chamillard. All Rights Reserved.

//Coursera Course C++ and unreal engine c++.


#include <iostream>
#include <string>
#include <cmath>

// x and y coordenadas para puntos.
// x and y coordinates for points
float Point1X;
float Point1Y;
float Point2X;
float Point2Y;

//Obtiene los puntos desde un string.
void GetInputValuesFromString(std::string Input);

int main()
{
    //El ciclo while es donde se hara la entrada.
    // loop while there's more input
    std::string Input;
    std::getline(std::cin, Input);
    while (Input[0] != 'q')
    {
        //Extrae el punto de coordenadas de un string.
        // extract point coordinates from string
        GetInputValuesFromString(Input);
        int a,b;
        float c,alpha,angle;
        a = (int)Point2X - (int)Point1X;
        b = (int)Point2Y - (int)Point1Y;
        c = sqrt(pow(a,2) + pow(b,2));
        angle = atan2(b,a);
        alpha =angle*(180/M_PI);
        std::cout<<c<<" "<<alpha<<std::endl;
        std::getline(std::cin, Input);
    }
}

/**
 * Extracts point coordinates from the given input string
 * @param Input input string
*/
void GetInputValuesFromString(std::string Input)
{
    // extract point 1 x
    int SpaceIndex = Input.find(' ');
    Point1X = std::stof(Input.substr(0, SpaceIndex));

    // move along string and extract point 1 y
    Input = Input.substr(SpaceIndex + 1);
    SpaceIndex = Input.find(' ');
    Point1Y = std::stof(Input.substr(0, SpaceIndex));

    // move along string and extract point 2 x
    Input = Input.substr(SpaceIndex + 1);
    SpaceIndex = Input.find(' ');
    Point2X = std::stof(Input.substr(0, SpaceIndex));

    // point 2 y is the rest of the string
    Input = Input.substr(SpaceIndex + 1);
    Point2Y = std::stof(Input);
}
