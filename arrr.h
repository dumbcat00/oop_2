#pragma once
#include <iostream>
#include <ctime>
using namespace std;

int summ(int*, int);
int* allocate_arr(int);
int* fill_arr(int);
void print_arr(int*, int);
void delete_arr(int*, int);
void invert(int*, int);
void sort1(int*, int);
void sort2(int*, int);
void (*univfoo(int, int*)) (int*, int);
