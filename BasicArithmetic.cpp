#include <iostream>
using namespace std;

int main() {
    int Integer1;
    int Integer2;
    int Addition;
    int Subtraction;
    int Multiplication;
    int Division;
    int Modulo;

    cout << "Enter an Integer: ";
    cin >> Integer1;
    cout << "Enter an another Integer: ";
    cin >> Integer2; 
        Addition = Integer1 + Integer2;
        Subtraction = Integer1 - Integer2;
        Multiplication = Integer1 * Integer2;
        Division = Integer1 / Integer2;
        Modulo = Integer1 % Integer2;
    cout << Integer1 << " + " << Integer2 << " = " << Addition << endl;
    cout << Integer1 << " - " << Integer2 << " = " << Subtraction << endl;
    cout << Integer1 << " * " << Integer2 << " = " << Multiplication << endl;
    cout << Integer1 << " / " << Integer2 << " = " << Division << endl;
    cout << Integer1 << " % " << Integer2 << " = " << Modulo << endl;

return 0;
}