/*
 * main.c - Sandbox for testing
 * 
 * To use the functions you implemented in code.c, you must include the header:
 *   #include "code.h"
 * 
 * This tells the compiler where to find the function prototypes.
 * Without this include, the compiler won't know about your functions!
 */

#include <stdio.h>
#include "code.h"
int main(void)
{
// Test Step 1: int_Point
    struct int_Point p1;
    init_int_point(&p1, 10, 20);
    printf("int_Point: x=%d, y=%d\n", p1.x, p1.y);
    // Test Step 2: double_Point
    struct double_Point p2;
    init_double_point(&p2, 3.14, 2.71);
    printf("double_Point: x=%f, y=%f\n", p2.x, p2.y);

    // Test Step 4: Basic math operations
    printf("add(5, 3) = %f\n", add(5.0f, 3.0f));
    printf("sub(5, 3) = %f\n", sub(5.0f, 3.0f));
    printf("mul(5, 3) = %f\n", mul(5.0f, 3.0f));
    printf("divide(6, 2) = %f\n", divide(6.0f, 2.0f));

    // Test Step 5: apply_operation with function pointers
    float arr[] = {1.0f, 2.0f, 3.0f, 4.0f};
    printf("Sum via apply_operation: %f\n", apply_operation(arr, 4, add));
    printf("Product via apply_operation: %f\n", apply_operation(arr, 4, mul));

    // Test Step 8: Calc struct with function pointers
    struct Calc calc;
    init_calc(&calc);
    calc.a = 10.0f;
    calc.b = 5.0f;
    printf("calc.add(10, 5) = %f\n", calc.add(calc.a, calc.b));
    printf("calc.mul(10, 5) = %f\n", calc.mul(calc.a, calc.b));

    return 0;
}