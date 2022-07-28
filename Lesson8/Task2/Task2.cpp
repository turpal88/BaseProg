#include <iostream>
#include "windows.h"


#include "recttriangle.h"
#include "equaltriangle.h"
#include "equalsidetriangle.h"

#include "rectang.h"
#include "quadro.h"
#include "parallelogram.h"
#include "rhomb.h"
#include "except_class.h"


int main()
{
    

   SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    try {
        Triangle triangle(10, 20, 30, 40, 50, 90);
    }
    catch (Except_class& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    try {
        RectTriangle recttriangle(10, 20, 30, 70, 40, 70);
    }
    catch (Except_class& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
 
    
    
    try {
        EqualTriangle equaltriangle(10, 10, 10, 60, 60, 60);
    }
    catch(Except_class& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    try {
        EqualSideTriangle equalsidetriangle(10, 20, 10, 65, 50, 65);
    }
    catch (Except_class& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }


    try {
        Quadrilateral rect(10, 20, 30, 40, 65, 75, 105, 115);
    }
    catch (Except_class& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    try {
        Rectang rectang(30, 40, 30, 40, 90, 90, 90, 90);
    }
    catch (Except_class& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    try {
        Quadro quadro(20, 20, 20, 20, 90, 90, 90, 90);
    }
    catch (Except_class& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    try {
        Parallelogram parallelogram(10, 20, 30, 40, 20, 40, 60, 80);
    }
    catch (Except_class& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }
    try {
        Rhomb rhomb(10, 20, 30, 40, 20, 40, 60, 80);
    }
    catch (Except_class& e) {
        std::cout << e.what() << std::endl;
        std::cout << std::endl;
    }

    
    
   return 0;
}