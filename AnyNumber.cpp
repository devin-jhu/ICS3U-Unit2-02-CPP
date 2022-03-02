// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on March 2022
// The area and perimeter calculator


#include <iostream>

int main() {
    // this function calculates the area and perimeter of a rectangle
    int Height;
    int Width;
    int AreaRectangle;
    int PerimeterRectangle;

    // input
    std::cout << "Enter width of rectangle: (mm): ";
    std::cin >> Width;
    std::cout << "Enter height of rectangle: (mm): ";
    std::cin >> Height;

    // process
    AreaRectangle = Height * Width;
    PerimeterRectangle = 2 * (Width + Height);

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << AreaRectangle << " mm²." << std::endl;
    std::cout << "Perimeter is " << PerimeterRectangle << " mm." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
