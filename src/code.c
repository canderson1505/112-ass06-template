// Corey Anderson
// CSCI 112 Fall 2026
//"I acknowledge that I have worked on this
// assignment independently, except where explicitly noted and referenced.
// Any collaboration or use of external resources has been properly cited.
// I am fully aware of the consequences of academic dishonesty and agree to
// abide by the university's academic integrity policy.";

// code.c — student implementation only
/*
 * code.c - Implementation file for Lab 4
 * 
 * Instructions:
 * 1. Include code.h at the top: #include "code.h"
 * 2. Include stdio.h for any printing: #include <stdio.h>
 * 3. Implement each TODO below
 */

#include  "code.h"
#include <stdio.h>

/*
 * ============================================================================
 * STEP 1: Initialize int_Point struct
 * ============================================================================
 * 
 * Function: init_int_point
 * 
 * Task:
 * - Takes a pointer to struct int_Point
 * - Takes two integers (x and y values)
 * - Sets the struct fields to these values
 * 
 * Example:
 *   struct int_Point p;
 *   init_int_point(&p, 10, 20);
 *   // Now p.x = 10, p.y = 20
 */

void init_int_point(struct int_Point *point, int x, int y)
{
    point->x = x;
    point->y = y;
}

/*
 * ============================================================================
 * STEP 2: Initialize double_Point struct
 * ============================================================================
 * 
 * Function: init_double_point
 * 
 * Same pattern as init_int_point, but for double values
 */

void init_double_point(struct double_Point *point, double x, double y)
{
    point->x = x;
    point->y = y; 
}

/*
 * ============================================================================
 * STEP 4: Basic math functions
 * ============================================================================
 * 
 * These are simple functions that will later be passed as callbacks
 */

float add(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    /* TODO: Return a - b; */
    return a - b;
}

float mul(float a, float b)
{
    /* TODO: Return a * b; */
    return a * b;
}

float divide(float a, float b)
{
     /* TODO: Return a / b; (handle division by zero if needed
     ) */
      return a / b;
}

/*
 * ============================================================================
 * STEP 5: Apply operation to array via function pointer
 * ============================================================================
 * 
 * Function: apply_operation
 * 
 * This is the KEY function for understanding function pointers!
 * 
 * Algorithm:
 * 1. Start with arr[0] as the result
 * 2. Loop through arr[1] to arr[length-1]
 * 3. For each element, call operation(result, arr[i])
 * 4. Update result with the return value
 * 5. Return result as double
 * 
 * Example:
 *   float arr[] = {1.5, 2.5, 3.5, 4.5};
 *   double result = apply_operation(arr, 4, add);
 *   // result = ((1.5 + 2.5) + 3.5) + 4.5 = 12.0
 * 
 * Note: The function pointer is called like: operation(a, b)
 */

double apply_operation(float *arr, int length, float (*operation)(float, float))
{
    float result = arr[0];

    for (int i = 1; i < length; i++)
    {
        result = operation(result, arr[i]);

    
    }
    return (double)result;
}

/*
 * ============================================================================
 * STEP 7: Initialize double_Point using typedef
 * ============================================================================
 * 
 * Function: init_double_point_typedef
 * 
 * Same as Step 2, but uses the DoublePoint typedef
 */

// void init_double_point_typedef(DoublePoint *point, double x, double y)
// {
//     /* TODO:*/
// }
void init_double_point_typedef(doublePoint *point, double x, double y)

{
    point->x = x;
    point->y = y;
}
/*
 * ============================================================================
 * STEP 8: Initialize Calc struct
 * ============================================================================
 * 
 * Function: init_calc
 * 
 * Algorithm:
 * 1. Set calc->a = 0.0f
 * 2. Set calc->b = 0.0f
 * 3. Assign function pointers:
 *    calc->add = add;      (note: no & operator for functions!)
 *    calc->sub = sub;
 *    calc->mul = mul;
 *    calc->div = divide;
 * 
 * Example:
 *   struct Calc calc;
 *   init_calc(&calc);
 *   // Now calc.add, calc.sub, etc. point to the functions
 */

void init_calc(struct Calc *calc)
{
    calc->a = 0.0f;
    calc->b = 0.0f;

    calc->add = add;
    calc->sub = sub;
    calc->mul = mul;
    calc->div = divide;

}
//test 3