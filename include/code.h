/*/ code.h - Header file for Lab 4
 * 
 * Instructions:
 *1. At the top, add include guards to prevent multiple inclusion:   #ifndef CODE_H
 *    #define CODE_H
 * 
 *2. Write function prototypes below
 * 
 * 3. At the bottom, add:
 *    #endif
 */
#ifndef CODE_H
#define CODE_H
/*
 * STEP 1: int_Point struct and init function
 * 
 * Define a struct named int_Point with two int fields: x and y
 * Write a function prototype to initialize it
 */
struct int_Point
 {
    int x;
    int y;

};

void init_int_point(struct int_Point *point, int x, int y);



/* TODO: struct int_Point { } */
/* TODO: void init_int_point(struct int_Point *point, int x, int y); */
/*
 * STEP 2: double_Point struct and init function
 * 
 * Define a struct named double_Point with two double fields: x and y
 * Write a function prototype to initialize it
 */
struct double_Point

{
    double x;
    double y;

} ;
void init_int_point(struct double_Point *point, int x, int y);

/* TODO: struct double_Point { } */


/* TODO: void init_double_point(struct double_Point *point, double x, double y); */

/*
 * STEP 4: Basic math functions
 * 
 * Write prototypes for add, subtract, and multiply
 * Each takes two floats and returns a float
 */

/* TODO: float add(float a, float b); */
/* TODO: float sub(float a, float b); */
/* TODO: float mul(float a, float b); */
/* TODO: float divide(float a, float b); */
float add(float a, float b); 
float sub(float a, float b); 
float mul(float a, float b); 
float divide(float a, float b); 

/*
 * STEP 5: Function pointer callback
 * 
 * Write a function that:
 * - Takes a pointer to float array
 * - Takes array length
 * - Takes a function pointer (operation: float (*)(float, float))
 * - Applies the operation to all elements
 * - Returns result as double
 */

/* TODO: double apply_operation(float *arr, int length, float (*operation)(float, float)); */
double apply_operation(float *arr, int length, float (*operation)(float, float));
/*
 * STEP 6: Typedef for function pointer
 * 
 * Define a typedef for the binary operation function pointer:
 * typedef float (*BinaryOp)(float, float);
 */
typedef float (*BinaryOp)(float, float);
/* TODO: typedef ... BinaryOp; */

/*
 * STEP 7: Typedef struct double_Point
 * 
 * Define a typedef for double_Point struct
 * Rewrite the init function prototype using the typedef
 */

/* TODO: typedef struct { double x; double y; } DoublePoint; */
typedef struct
{
    double x;
    double y;
}
doublePoint;

/* TODO: void init_double_point_typedef(DoublePoint *point, double x, double y); */
 void init_double_point_typedef(doublePoint *point, double x, double y);
/*
 * STEP 8: Calc struct with function pointer fields
 * 
 * Define a struct Calc with:
 * - float a
 * - float b
 * - BinaryOp add, sub, mul, div (function pointers)
 */

/* TODO: struct Calc { } */
struct Calc 
{
    float a;
    float b;
    BinaryOp add, sub, mul, div;
 };
/* TODO: void init_calc(struct Calc *calc); */
void init_calc(struct Calc *calc);

#endif