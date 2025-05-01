#pragma once
#ifdef DYNAMICLIB_EXPORTS
#define DYNAMICLIB_API __declspec(dllexport)
#else
#define DYNAMICLIB_API __declspec(dllimport)
#endif
const int ROWS = 4;
const int COLS = 5;

extern DYNAMICLIB_API void FillRand(int arr[], const int n);
extern DYNAMICLIB_API void FillRand(double arr[], const int n);
extern DYNAMICLIB_API void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
extern DYNAMICLIB_API void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);

extern DYNAMICLIB_API void Print(int arr[], const int n);
extern DYNAMICLIB_API void Print(double arr[], const int n);
extern DYNAMICLIB_API void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
extern DYNAMICLIB_API void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);

extern DYNAMICLIB_API void Sort(double arr[], const int n);
extern DYNAMICLIB_API void Sort(int arr[], const int n);
extern DYNAMICLIB_API void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
extern DYNAMICLIB_API void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);

extern DYNAMICLIB_API int Sum(int arr[], const int n);
extern DYNAMICLIB_API double Sum(double arr[], const int n);
extern DYNAMICLIB_API int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
extern DYNAMICLIB_API double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);

extern DYNAMICLIB_API double AVG(double arr[], const int n);
extern DYNAMICLIB_API double AVG(int arr[], const int n);
extern DYNAMICLIB_API double AVG(int arr[ROWS][COLS], const int ROWS, const int COLS);
extern DYNAMICLIB_API double AVG(double arr[ROWS][COLS], const int ROWS, const int COLS);

extern DYNAMICLIB_API int MinValue(int arr[], const int n);
extern DYNAMICLIB_API double MinValue(double arr[], const int n);
extern DYNAMICLIB_API int MinValue(int arr[ROWS][COLS], const int ROWS, const int COLS);
extern DYNAMICLIB_API double MinValue(double arr[ROWS][COLS], const int ROWS, const int COLS);

extern DYNAMICLIB_API int MaxValue(int arr[], const int n);
extern DYNAMICLIB_API double MaxValue(double arr[], const int n);
extern DYNAMICLIB_API int MaxValue(int arr[ROWS][COLS], const int ROWS, const int COLS);
extern DYNAMICLIB_API double MaxValue(double arr[ROWS][COLS], const int ROWS, const int COLS);

extern DYNAMICLIB_API void ShiftLeft(double arr[], const int n, const int Shifts);
extern DYNAMICLIB_API void ShiftLeft(int arr[], const int n, int Shifts);
extern DYNAMICLIB_API void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts);
extern DYNAMICLIB_API void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts);

extern DYNAMICLIB_API void Shiftright(int arr[], const int n, const int Shifts);
extern DYNAMICLIB_API void Shiftright(double arr[], const int n, const int Shifts);
extern DYNAMICLIB_API void Shiftright(int arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts);
extern DYNAMICLIB_API void Shiftright(double arr[ROWS][COLS], const int ROWS, const int COLS, const int Shifts);

