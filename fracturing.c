//********************************************************
// Programming Assignment 1: Fracture
// Author: Camya Robinson
// UCFID: 3822634
// Class: COP 3223, Professor Parra
// //********************************************************

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Getting the user's typed in values for each point
double askForUserInput(){
    int point = 0;
    scanf("%d", &point);
    return point; 
}

// Print the x and y coordinates that the user entered
void printCoordinates(int x1, int y1, int x2, int y2){
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);
}

// formula for calculating diameter or distance between 2 points
double diameterFormula(int x1, int y1, int x2, int y2){
 return sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
}

// helper function that grabs user defined coordinates a calculates the diameter of the circle / city
double getPointsAndDiameter(){

    // Get x points
    printf("Please enter first x point: ");
    int x1 = askForUserInput(); 
    printf("Please enter second x point: ");
    int x2 = askForUserInput();

    // Get y points
    printf("Please enter first y point: ");
    int y1 = askForUserInput();
    printf("Please enter second y point: ");
    int y2 = askForUserInput();
    
    printCoordinates(x1, y1, x2, y2);

    // Calculate and print distance
    double diameter = diameterFormula(x1, y1, x2, y2);

    return diameter;
}

double calculateDistance(){

    double distance = getPointsAndDiameter();

    printf("The distance between the two points is %.3lf \n", distance);

    return distance;    
}

// Calculate and print perimeter
double calculatePerimeter(){

    double diameter = getPointsAndDiameter();
    
    double perimeter = PI * diameter;

    printf("The perimeter of the city encompassed by your request is %.3lf \n", perimeter);

    return 1;
}

// Calculate and print area
double calculateArea(){

    double diameter = getPointsAndDiameter();

    double area = PI * pow(diameter/2, 2);

    printf("The area of the city encompassed by your request is %.3lf \n", area);

    return 1;
}

// Calculate and print width / diameter
double calculateWidth(){

    double width = getPointsAndDiameter();

    printf("The width of the city encompassed by your request is %.3lf \n", width);

    return 1;    
}

// Calculate and print height / diameter
double calculateHeight(){

    double height = getPointsAndDiameter();

    printf("The height of the city encompassed by your request is %.3lf \n", height);

    return 1;    
}

int main (int argc, char **argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}