// P1 Assignment
// Author: Artem Bondarchuk
// Date:   1/17/2022
// Class:  CS270
// Email:  abond00@rams.colostate.edu

// Include files
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// example of a global array
int exampleGlobalArray[2];
double input[5];
double output[4];

// this function can be used as a guide for the funtions you will implement
//void computeCircle(double radius, double *addressOfArea)
//{
//    // Compute area
//    double result = 3.141593 * radius * radius;
//
    // Dereference pointer to return result
//    *addressOfArea = result;
//}
// function computereSphere (f#1)
void computeSphere(double radiusSphere, double *addressOfVolume)
{
    // Compute volume
    double result = (4.0 / 3.0) * 3.141593 * radiusSphere * radiusSphere * radiusSphere;

    // Dereference pointer to return result
    *addressOfVolume = result;
}
// function computeCube (f#2)
void computeCube(double sideCube, double *addressOfVolume)
{
    // Compute volume
    double result = sideCube * sideCube * sideCube;

    // Dereference pointer to return result
    *addressOfVolume = result;
}
// function computeTetrahedron (f#3)
void computeTetrahedron(double sideTetra, double *addressOfVolume)
{
    // Compute volume
    double result = 0.117851 * sideTetra * sideTetra * sideTetra;

    // Dereference pointer to return result
    *addressOfVolume = result;
}
// function computeCylinder (f#4)
void computeCylinder(double radiusCyl, double heightCyl, double *addressOfVolume)
{
    // Compute volume
    double result = 3.141593 * radiusCyl * radiusCyl * heightCyl;

    // Dereference pointer to return result
    *addressOfVolume = result;
}

int main(int argc, char *argv[])
{
    // Check number of arguments
    if (argc != 6) {
        printf("usage: ./P1 <double> <double> <double> <double> <double>\n");
        return EXIT_FAILURE;
    }

    // Parse arguments
    double radiusSphere = atof(argv[1]);
    double sideCube = atof(argv[2]);
    double sideTetra = atof(argv[3]);
    double radiusCyl = atof(argv[4]);
    double heightCyl = atof(argv[5]);

    // Local variable
    double area;

    // Call function
    computeCircle(radius, &area);
    computeSphere(radiusSphere, &volume);
    computeCircle(sideCube, &volume);
    computeCircle(sideTetra, &volume);
    computeCircle(radiusCyl, heightCyl, &volume);

    // Print area
    //printf("The area of a circle with radius %.5f equals %.5f.\n", radius, area);
    printf("SPHERE, radius = %.5f, volume = %.5f.\n", radius, volume);
    printf("CUBE, side = %.5f, volume = %.5f.\n", side, volume);
    printf("TETRAHEDRON, side = %.5f, volume = %.5f.\n", side, volume);
    printf("CYLINDER, radius = %.5f, height = %.5f, volume = %.5f.\n", side, height, volume);
    // Return success
    return EXIT_SUCCESS;
}