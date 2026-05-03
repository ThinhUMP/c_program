#ifndef IMPORT_H
#define IMPORT_H

#include "prime.c"
int is_prime(unsigned n);
void prime(void);

#include "grid.c"
void grid(void);

#include "triangle.c"
void triangle(void);

#include "increase.c"
void increase(void);

#include "fibonacci.c"
void fibonacci(void);

#include "cubes.c"
int cubes();

#include "power_ex.c"
double power_ex();

#include "convert_binary.c"
int convert_binary(void);

#include "convert_time.c"
int convert_time(void);

#include "date_month_year.c"
int isleap(int year);
int daysPerMonth(int month, int year);
int validDate(int day, int month, int year);
int ordinal(int day, int month, int year);

#include "inputeof.c"
int inputeof(void);

#include "interval.c"
int interval(void);

#include "monotone.c"
void monotone(void);

#include "odd.c"
void odd(void);

#include "pow.c"
double power(double b, unsigned n);

#include "array.c"
int array(void);
void printElement(int a[], int size);
double avgArr(int a[], int size);
int minArr(int a[], int size);
void printArr2D(int row, int col, int a[row][col]);
ModeGrade mode_grade();
void sortArr(int arr[], int size);
void guessing(int arr[], int size);
void merge(int a[], int size_a, int b[], int size_b, int c[]);
void mergeSort(int arr[], int size);
int readLine(char line[], int max);

#include "pointer.c"
void swap(int *x, int *y);
void reverse(int arr[], int size);
void reverse_pointer(int *arr, int size);
void printMatrix(int rows, int cols, int (*m)[cols]);
int sumMatrix(int rows, int cols, int (*m)[cols]);
void printMatrixFlatten(int rows, int cols, int (*m)[cols]);
void modifyMatrix(int rows, int cols, int (*m)[cols], int row, int column, int value);
int* minimum(int *a,int *b);
void normalize(int *n, int *d);
void nextDate(unsigned *month, unsigned *date, unsigned *year);

#include "recursive.c"
double power_rec(double base, unsigned n);
double power_eff(double base, unsigned n);
void move(unsigned n, unsigned source, unsigned dest, unsigned spare);
int sumFirst(int n);
unsigned gcd(unsigned a, unsigned b);
void pattern(int n);
void pattern_ite(int n);
void pattern_2(unsigned n);
int is_binary_num(unsigned n);
int * search(int val, int a[], int a_size);
int counter();
void printA();
int Fibonacci(int n);


#endif