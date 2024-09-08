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
    double point = 0;
    scanf("%lf", &point);
    return point; 
}

// formula for calculating diameter or distance between 2 points
double diameterFormula(int x1, int y1, int x2, int y2){
 return sqrt(((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)));
}

// Print x and y coordinates the user entered
void printCoordinates(int x1, int y1, int x2, int y2){
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);
}

double calculateDistance(){
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;

    // Get x points
    printf("Please enter first x point: ");
    x1 = askForUserInput(); 
    printf("Please enter second x point: ");
    x2 = askForUserInput();

    // Get y points
    printf("Please enter first y point: ");
    y1 = askForUserInput();
    printf("Please enter second y point: ");
    y2 = askForUserInput();
    
    printCoordinates(x1, y1, x2, y2);

    // Calculate and print distance
    double distance = diameterFormula(x1, y1, x2, y2);
    printf("The distance between the two points is %.3lf \n", distance);

    return distance;    
}

double calculatePerimeter(){
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
    
    // Get x points
    printf("Please enter first x point: ");
    x1 = askForUserInput(); 
    printf("Please enter second x point: ");
    x2 = askForUserInput();

    // Get y points
    printf("Please enter first y point: ");
    y1 = askForUserInput();
    printf("Please enter second y point: ");
    y2 = askForUserInput();

    printCoordinates(x1, y1, x2, y2);

    // Calculate and print perimeter
    double diameter = diameterFormula(x1, y1, x2, y2);
    double perimeter = PI * diameter;
    printf("The perimeter of the city encompassed by your request is %.3lf \n", perimeter);

    return 1;
}

double calculateArea(){
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
       // Get x points
    printf("Please enter first x point: ");
    x1 = askForUserInput(); 
    printf("Please enter second x point: ");
    x2 = askForUserInput();

    // Get y points
    printf("Please enter first y point: ");
    y1 = askForUserInput();
    printf("Please enter second y point: ");
    y2 = askForUserInput();
    
    printCoordinates(x1, y1, x2, y2);

    // Calculate and print area
    double diameter = diameterFormula(x1, y1, x2, y2);
    double area = PI * pow(diameter/2, 2);
    printf("The area of the city encompassed by your request is %.3lf \n", area);

    return 1;
}

double calculateWidth(){
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
       // Get x points
    printf("Please enter first x point: ");
    x1 = askForUserInput(); 
    printf("Please enter second x point: ");
    x2 = askForUserInput();

    // Get y points
    printf("Please enter first y point: ");
    y1 = askForUserInput();
    printf("Please enter second y point: ");
    y2 = askForUserInput();
    
    printCoordinates(x1, y1, x2, y2);

    // Calculate and print width
    double width = diameterFormula(x1, y1, x2, y2);
    printf("The width of the city encompassed by your request is %.3lf \n", width);

    return 1;    
}

double calculateHeight(){
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
       // Get x points
    printf("Please enter first x point: ");
    x1 = askForUserInput(); 
    printf("Please enter second x point: ");
    x2 = askForUserInput();

    // Get y points
    printf("Please enter first y point: ");
    y1 = askForUserInput();
    printf("Please enter second y point: ");
    y2 = askForUserInput();
    
    printCoordinates(x1, y1, x2, y2);

    // Calculate and print height
    double height = diameterFormula(x1, y1, x2, y2);
    printf("The height of the city encompassed by your request is %.3lf \n", height);

    return 1;    
}

int main (int argc, char **argv)
{
    calculatePerimeter ();
    calculateArea ();
    calculateWidth ();
    calculateHeight ();
    calculateDistance ();

    return 0;
}