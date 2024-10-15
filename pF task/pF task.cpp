#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "ENTER THE VALUE:" << endl;
    cin >> a >> b;
    int add = a + b;
    cout << "ADDITION OF THE VALUE IS:" << add << endl;
    int sub = a - b;
    cout << "SUBSTRACTION OF THE VALUE IS:" << sub << endl;
    int mul = a * b;
    cout << "MULTIPLICATION OF THE VALUE IS:" << mul << endl;
    float divide = a / b;
    cout << "DIVISION OF THE VALUE IS:" << divide << endl;
    return 0;
}