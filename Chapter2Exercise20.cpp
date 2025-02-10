/* Program File Name:  Chapter2Exercise20.cpp
Programmer: Bryan Hurley
Date:Feburary 2025
Requirements: A particular brank of paint covers 340 square feet per gallon. Write a program to determine and
report approximately how many gallons of paint will be needed to paint two coats on a wooden
fence that is 6 feet high and 100 feet long*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double height, width, areaPerGal, total;
    height = 6;
    width = 100;
    areaPerGal = 340;
    total = round((height * width / areaPerGal)*100.0)/100.0;
    std::cout << "You will need " << round(total) << " gallons (Rounded from " << total <<  " gallons) of paint to paint this fence." << endl;
}