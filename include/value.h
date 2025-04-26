#pragma once
#include"stdafx.h"
#include"constants.h"

int MinValue(int arr[], const int n);
double MinValue(double arr[], const int n);
int MinValue(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MinValue(double arr[ROWS][COLS], const int ROWS, const int COLS);

int MaxValue(int arr[], const int n);
double MaxValue(double arr[], const int n);
int MaxValue(int arr[ROWS][COLS], const int ROWS, const int COLS);
double MaxValue(double arr[ROWS][COLS], const int ROWS, const int COLS);