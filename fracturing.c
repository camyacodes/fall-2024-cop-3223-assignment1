//********************************************************
// Programming Assignment 1: Fracture
// Author: Camya Robinson
// UCFID: 3822634
// Class: COP 3223, Professor Parra
// //********************************************************

#define PI 3.14159
#include <stdio.h>
#include <math.h>




double calculateDistance(){
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
    double distance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
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
    scanf("%d", &x1);
    printf("Please enter second x point: ");
    scanf("%d", &x2);
    // Get y points
    printf("Please enter first y point: ");
    scanf("%d", &y1);
    printf("Please enter second y point: ");
    scanf("%d", &y2);
    // Calculate and print perimeter
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);

    double distance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    double perimeter = PI * distance;
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
    scanf("%d", &x1);
    printf("Please enter second x point: ");
    scanf("%d", &x2);
    // Get y points
    printf("Please enter first y point: ");
    scanf("%d", &y1);
    printf("Please enter second y point: ");
    scanf("%d", &y2);
    // Calculate and print area
    printf("Point #1 entered: x1 = %d; y1 = %d \n", x1, y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n", x2, y2);

    double distance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    double area = PI * pow(distance/2, 2);
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
    double width = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
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
    double height = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
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