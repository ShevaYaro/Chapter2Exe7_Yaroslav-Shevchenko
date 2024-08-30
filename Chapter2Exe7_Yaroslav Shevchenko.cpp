/*
Tite Chapter 2 Exercise 7 - Ocean levels
File name:Chapter2Exe7_YaroslavShevchenko.cpp
Programmer: Yaroslav Shevchenko
Date: 08/30/2024
Requirements: 
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write a program that displays:

• The number of millimeters higher than the current level that the ocean’s level will be in 5 years.

• The number of millimeters higher than the current level that the ocean’s level will be in 7 years.

• The number of millimeters higher than the current level that the ocean’s level will be in 10 years.

Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so

that the user can enter the number of the number of millimeters the ocean level rises per year..



*/


#include <iostream>
using namespace std;
const double levelRise = 1.5;


int main()
{
    double fiveYearLater = levelRise * 5;
    double sevenYearLater = levelRise * 7;
    double tenYearLater = levelRise * 10;
    cout << "After 5 years the ocean will rise on: " << fiveYearLater << endl;
    cout << "After 7 years the ocean will rise on: " << sevenYearLater << endl;
    cout << "After 10 years the ocean will rise on: " << tenYearLater << endl;
    return 0;
}

