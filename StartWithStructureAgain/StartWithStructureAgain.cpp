#include <iostream>
#include "ExternalFiles.h"

using namespace std;

void main()
{
    int number = 6;
    showValue(number);
    cout << "The number after the function showValue: " << number <<endl; 

    showReference(number);
    cout << "The number after the function showReference: " << number << endl;
}
