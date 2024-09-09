#include <stdio.h>
#include <math.h>
// assignment 1
// Author: Zachary Urmos
// UCF ID: 5590948
// Date: 9/7/24
// Class: COP 3223, Professor Parra
// Purpose: This program prints a specific message to the
// command line. The main purpose of this assignment is to
// use nested functions
// Input: x and y cooridantes 
//
// Output: (to the command line) showing user inputs

// Defining PI
#define PI 3.14159

// Functions
double calculateDistance(double x1, double y1, double x2, double y2);
double calculatePerimeter(double x1, double y1, double x2, double y2);
double calculateArea(double x1, double y1, double x2, double y2);
double calculateWidth(double x1, double x2);
double calculateHeight(double y1, double y2);

// function to read points then print prompt for input
void readPoints(double *x1, double *y1, double *x2, double *y2) {
    printf("Enter coordinates for point 1 (x1 y1): ");
    scanf("%lf %lf", x1, y1);
    printf("Enter coordinates for point 2 (x2 y2): ");
    scanf("%lf %lf", x2, y2);
}

int main(void) {
    // Variables for cooridantes
    double x1, y1, x2, y2;

    
    readPoints(&x1, &y1, &x2, &y2);

    //calling functions with new points
    calculateDistance(x1, y1, x2, y2);
    calculatePerimeter(x1, y1, x2, y2);
    calculateArea(x1, y1, x2, y2);
    calculateWidth(x1, x2);
    calculateHeight(y1, y2);

    return 0;
}

double calculateDistance(double x1, double y1, double x2, double y2) {
    // Calculating the distance
    double distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    // results
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

double calculatePerimeter(double x1, double y1, double x2, double y2) {
    // Calculating width and height for perimeter
    double width = fabs(x2 - x1);

     double height = fabs(y2 - y1);
    double perimeter = 2 * (width + height);

    //results
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

    // Return difficulty
    return 2.0;
}

double calculateArea(double x1, double y1, double x2, double y2) {
    // Calculating width and height for area
    double width = fabs(x2 - x1);
    double height = fabs(y2 - y1);
    double area = width * height;

    //results
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The area of the city encompassed by your request is %.2f\n", area);

    // Return the difficulty again
    return 1.5; 
}

double calculateWidth(double x1, double x2) {
    // Calculating width
    double width = fabs(x2 - x1);

    // Output the results
    printf("Point #1 entered: x1 = %.2f; y1 = 0.00\n", x1);
    printf("Point #2 entered: x2 = %.2f; y2 = 0.00\n", x2);
    printf("The width of the city encompassed by your request is %.2f\n", width);

    // Return
    return 1.0; 
}

double calculateHeight(double y1, double y2) {
    // Calculating height
    double height = fabs(y2 - y1);

    //results
    printf("Point #1 entered: x1 = 0.00; y1 = %.2f\n", y1);
    printf("Point #2 entered: x2 = 0.00; y2 = %.2f\n", y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);

    // Return difficulty
    return 1.0;
}