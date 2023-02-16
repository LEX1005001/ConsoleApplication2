#include <iostream>
using namespace std;
int main() {  
    setlocale(LC_ALL, "Russian");
    /*float R1;
    float R2;
    float R3;
    float R0;
    cout << "R1:";
    cin >> R1;
    cout << "R2:";
    cin >> R2;
    cout << "R3:";
    cin >> R3;

    R0 = 1 / R1 + 1 / R2 + 1 / R3;

    cout << "1/R0 = " << 1 / R0 << "\n";
    cout<<"Задание 1\n";*/

    /*float L;
    float pi = 3.14;
    float R;
    float S;

    cout << "L: ";
    cin >> L;

    R = L / (2 * pi);
    S = pi * (R * R);

    cout << "S:" << S << "\n";
    cout << "Задание 2\n";*/

    float S1;
    float v;
    float t;
    float a;

    cout << "v:";
    cin >> v;
    cout << "t:";
    cin >> t;
    cout << "a:";
    cin >> a;

    S1 = v * t + (a * (t * t)) / 2;
    cout << "S:" << S1 << "\n";
    cout << "Задание 3\n";

}
