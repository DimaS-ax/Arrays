#pragma once
#include"stdafx.h"
#include"constants.h"

void ShiftLeft(double arr[], const int n, const int Shifts);
void ShiftLeft(int arr[], const int n, int Shifts);
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts);
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts);

void Shiftright(int arr[], const int n, const int Shifts);
void Shiftright(double arr[], const int n, const int Shifts);
void Shiftright(int arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts);
void Shiftright(double arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts);