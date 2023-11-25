#define INTEGER
#include "function.h"


int main() {
#ifdef INTEGER
    const int size = 8;
    int intArray[size] = { 1, 2, 3, 4, 5, 6, 7, 8 };

    myarray(intArray, size);
    print(intArray, size);
    cout << "Min: " << min(intArray, size) << endl;
    cout << "Max: " << max(intArray, size) << endl;
    showInt(intArray, size);
#endif

#ifdef DOUBLE
    const int sizeDouble = 5;
    double doubleArray[sizeDouble] = { 1.2, 2.3, 3.4, 4.5, 5.6 };

    array(doubleArray, sizeDouble);
    print(doubleArray, sizeDouble);
    cout << "Min: " << min(doubleArray, sizeDouble) << endl;
    cout << "Max: " << max(doubleArray, sizeDouble) << endl;
    showDouble(doubleArray, sizeDouble);
#endif

#ifdef CHAR
    const int sizeChar = 5;
    char charArray[sizeChar] = { 'a', 'b', 'c', 'd', 'e' };

    array(charArray, sizeChar);
    print(charArray, sizeChar);
    cout << "Min: " << min(charArray, sizeChar) << endl;
    cout << "Max: " << max(charArray, sizeChar) << endl;
    showChar(charArray, sizeChar);
#endif

    return 0;
}