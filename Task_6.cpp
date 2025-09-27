# include <iostream>
# include <cmath>

using namespace std;

int main() {
    bool isIncorrect;
    double x, z, p, C, K, D, A, B, Y;
    do {
        cout << "Введите значение x, z, p, C, K, D: ";
        cin >> x >> z >> p >> C >> K >> D;
        isIncorrect = false;
        if (cin.fail()) {
            cout << "*Ошибка ввода!!! Попробуйте еще раз!" << endl;
            cin.clear();
            while(cin.get() != '\n');
            isIncorrect = true;
            continue;
        }
        if (C == 0) {
            cout << "*Ошибка!!! Знаменатель не может быть равен нулю!!!"<< '\n' << "Введите другое значение C! " << endl;
            isIncorrect = true;
        }
        if (D == 0) {
            cout << "*Ошибка!!! Знаменатель не может быть равен нулю!!!"<< '\n' << "Введите другое значение D! " << endl;
            isIncorrect = true;
        }
    } while (isIncorrect);
    A = sin(x) - z;
    B = fabs(p - x);
    Y = pow(A + B, 2) - K / (C * D);
    cout << "Соотношение, Вариант 9, Y = " << Y << endl;
    return 0;
}