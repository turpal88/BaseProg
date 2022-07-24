#include <iostream>
#include "windows.h"

#include "figure.h"
#include "triangle.h"
#include "recttriangle.h"
#include "equaltriangle.h"
#include "equalsidetriangle.h"
#include "quadrilateral.h"
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
        e.select_triangle_what_function();
    }
    try {
        RectTriangle recttriangle(10, 20, 30, 50, 40, 90);
    }
    catch (Except_class& e) {
        e.select_triangle_what_function();
    }
 
    
    
    try {
        EqualTriangle equaltriangle(10, 10, 10, 60, 60, 60);
    }
    catch(Except_class& e) {
        e.select_triangle_what_function();
    }
    try {
        EqualSideTriangle equalsidetriangle(10, 20, 10, 65, 50, 65);
    }
    catch (Except_class& e) {
        e.select_triangle_what_function();
    }


    try {
        Quadrilateral rect(10, 20, 30, 40, 20, 40, 60, 80);
    }
    catch (Except_class& e) {
        e.select_quadrilateral_what_function();
    }
    try {
        Rectang rectang(10, 20, 30, 40, 20, 40, 60, 80);
    }
    catch (Except_class& e) {
        e.select_quadrilateral_what_function();
    }
    try {
        Quadro quadro(20, 20, 20, 20, 90, 90, 90, 90);
    }
    catch (Except_class& e) {
        e.select_quadrilateral_what_function();
    }
    try {
        Parallelogram parallelogram(10, 20, 30, 40, 20, 40, 60, 80);
    }
    catch (Except_class& e) {
        e.select_quadrilateral_what_function();
    }
    try {
        Rhomb rhomb(10, 20, 30, 40, 20, 40, 60, 80);
    }
    catch (Except_class& e) {
        e.select_quadrilateral_what_function();
    }

    
    
   return 0;
}