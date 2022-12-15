#include <math.h>
#include <string>
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    while(true){
        double x, y;

        cout << "задано уравнение: z=(sin(x)^2+cos(x)^2)*2\n";
        cout << "введите x = ";
        cin >> x;
        cout << "введите y = ";
        cin >> y;
        double rez = (pow(sin(x), 2) + pow(cos(y), 2))*2;
        cout << "z = " << rez;

        string vblbor="0";
        while(vblbor!="1"&&vblbor!="2") {
            cout << "\n\n выберите действие и напишите цифру:" <<
                "\n1 Продолжить\n2 Выйти из программы" <<
                "\nВы выбрали = ";
            cin >> vblbor;
            cout << endl;
            if (vblbor == "1") {
                continue;
            }else if(vblbor=="2") {
                return -1;
            }else{
                cout << "\nВы выбрали несуществующее действие, попробуйте ещё раз";
            }
        }
    }
}