#include <iostream>
#include <string>
#include <ctime>

using namespace std;

#ifdef INTEGER
#define INTEGER 
void myarray(int arr[], const int size);
void print(int arr[], const int size);
int min(int arr[], const int size);
int max(int arr[], const int size);
void showInt(int arr[], const int size);
#endif

#ifdef DOUBLE
#define DOUBLE
void myarray(double arr[], const int size);
void print(double arr[], const int size);
double min(double arr[], const int size);
double max(double arr[], const int size);
void showDouble(double arr[], const int size);
#endif

#ifdef CHAR
#define CHAR
void myarray(char arr[], const int size);
void print(char arr[], const int size);
char min(char arr[], const int size);
char max(char arr[], const int size);
void showChar(char arr[], const int size);
#endif
