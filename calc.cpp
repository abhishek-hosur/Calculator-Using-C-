#include <iostream>
using namespace std;

int main ()
{
    int var1,var2;

    cout << "enter the first number: " << endl;
    cin >> var1;
    cout << "enter the second number: " << endl;
    cin >> var2;

    cout << "what operation you wanna undertake? " << endl;
    cout << "+ - add" << endl;
    cout << "- - sub" << endl;
    cout << "* - mul" << endl;
    cout << "/ - div" << endl;

    char decision;
    cin >> decision;
    switch (decision)
    {

        case '+':
        cout << var1 << " + " << var2 << "=" << (var1 + var2) << endl;
        break;
        case '-':
        cout << var1 << " + " << var2 << "=" << (var1 + var2) << endl;
        break;
        case '*':
        cout << var1 << " * " << var2 << "=" << (var1 * var2) << endl;
        break;
        case '/':
        cout << var1 << " / " << var2 << "=" << (var1 / var2) << endl;
        break;


    }
}

