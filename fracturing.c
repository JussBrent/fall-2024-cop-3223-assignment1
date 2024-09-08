// Brentley Dorsainvil
// 9/8/2024
// Class: COP 3223, Professor Parra
// Purpose: This program is supposed to calculate the distance, perimeter, height, and width of a circle
// Input: 3 4 5 6
// Output: Calculations with the numbers that were entered
// Limitations: Limited to numbers as program will not recognize words


#include <stdio.h>
#include <math.h>

#define PI 3.14159 //define pi

//calculating the distance for circle with x and y points
double calculate_distance(){

int x1, x2, y_1, y_2;

printf("Enter Point #1: ");
scanf("%d %d", &x1, &y_1);

printf("Enter Point #2: ");
scanf("%d %d", &x2, &y_2);

printf("Point #1 entered: x1 = %d; y1 = %d\n", x1, y_1);
printf("Point #2 entered: x2 = %d; y2 = %d\n", x2, y_2);

//distance formula
double distance = sqrt((x2 - x1) * (x2-x1) + (y_2-y_1) * (y_2-y_1));

return distance;

}

double calculatePerimeter(){

double distance = calculate_distance();

//perimeter formula
double perimeter = 2 * PI * distance; 

printf("The perimeter of the city encompassed by your request is %.3lf\n", perimeter);

//rating the difficulty of this function
return 2.5;

}

double calculateArea(){

double distance = calculate_distance();

//area function
double area = PI * distance * distance;

printf("The area of the city encompassed by your request is %.3lf\n", area);

return 3.0;

}


double calculateWidth(){

double distance = calculate_distance();

double width = 2 * distance;

printf("The width of the city encompassed by your request is %.3lf\n", width);

return 2.0;

}

double calculateHeight(){

double distance = calculate_distance();

double height = 2 * distance;

printf("The height of the city encompassed by your request is %.3lf.\n", height);


return 3.0;

}


int main(int argc, char** argv){

//calling all functions to the main function

calculate_distance();
calculatePerimeter();
calculateArea();
calculateWidth();
calculateHeight();

return 0;

} 