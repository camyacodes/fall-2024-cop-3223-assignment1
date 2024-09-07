//********************************************************
// Programming Assignment 1: Fracture
// Author: Camya Robinson
// UCFID: 3822634
// Class: COP 3223, Professor Parra
// //********************************************************

#include <stdio.h>
#include <math.h>
#define PI = 3.14159

double calculateDistance(void){
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
    // Get x points
    printf("Please enter first x point: ");
    scanf("%d", &x1);
    printf("Please enter second x point: ");
    scanf("%d", &x2);
    // Get y points
    printf("Please enter first y point: ");
    scanf("%d", &y1);
    printf("Please enter second y point: ");
    scanf("%d", &y2);
    // Calculate and print distance
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);
    double distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("The distance between the two points is %lf \n", sqrt(distance));
}



int main (int argc, char **argv)
{
    calculateDistance ();
    // calculatePerimeter ();
    // calculateArea ();
    // calculateWidth ();
    // calculateHeight ();

    return 0;
}