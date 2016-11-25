#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main()
{
    int *arrayTest;
    cout << "&arrayTest = " << &arrayTest << endl;
    cout << "arrayTest = " << arrayTest << endl;
    cout << "*arrayTest = " << *arrayTest << endl;

    arrayTest = (int *)malloc(sizeof(int)*2);
    cout << "after malloc " << endl;
    cout << "&arrayTest = " << &arrayTest << endl;
    cout << "arrayTest = " << arrayTest << endl;
    cout << "*arrayTest = " << *arrayTest << endl;
    arrayTest++;

    cout << "after arrayTest++" <<endl;
    cout << "&arrayTest = " << &arrayTest << endl;
    cout << "arrayTest = " << arrayTest << endl;
    cout << "*arrayTest = " << *arrayTest << endl;

    free(arrayTest);
}
