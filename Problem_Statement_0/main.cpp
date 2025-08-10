#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
    // welcome to my scientific calculator //

    cout << "Welcome to my scientific calculator " << endl;

    bool(isAddition);
    cout << "Do you want addition ? (1 for Yes , 0 for No)" << endl;
    cin >> isAddition;

    bool(isSubtraction);
    cout << "Do you want subtraction ? (1 for Yes , 0 for No)" << endl;
    cin >> isSubtraction;

    bool(isMultiplication);
    cout << "Do you want multiplication ? (1 for Yes , 0 for No)"<< endl;
    cin >> isMultiplication;

    bool(isDivision);
    cout << "Do you want division ? (1 for Yes , 0 for No)" << endl;
    cin >> isDivision;

    bool(isPower);
    cout << "Do you want power ? (1 for Yes , 0 for No)" << endl;
    cin >> isPower;

    bool(isRoot);
    cout << "Do you want square root ? (1 for Yes , 0 for No)" << endl;
    cin >> isRoot;

    double a , b ;
    cout << "Enter the first number :"  << endl;
    cin >> a ;

    cout << "Enter the second number :" << endl;
    cin >> b ;

    if (isAddition && !isSubtraction && !isMultiplication && !isDivision && !isPower && !isRoot) {
       cout <<  a+b << endl;
    }
    else if (isSubtraction && !isMultiplication && !isDivision && !isPower && !isRoot) {
        cout << a - b << endl;
    }
    if (isMultiplication && !isDivision && !isPower && !isRoot) {
       cout << a * b << endl;
    }
    if (isDivision && !isPower && !isRoot) {
        cout << a/b << endl;
    }
    if (isPower && !isRoot) {

        cout << "Result :" << pow(a,b)<< endl;
    }
    if (isRoot) {
        cout << "Result :" << sqrt(a) << endl;

    }

    else   {
        cout << " no operation selected  " << endl;
    }

        return 0;
    }