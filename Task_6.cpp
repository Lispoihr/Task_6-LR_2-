# include <iostream>
# include <cmath>

using namespace std;

int main() {
    bool isIncorrect;
    double x, D, b, A, S;
    do {
        cout << "Введите занчение x и D: ";
        cin >> x >> D;
        isIncorrect = false;
        if (cin.fail()) {
            cout << "Ошибка ввода!!! Попробуйте еще раз!" << endl;
            cin.clear();
            while(cin.get() != '\n');
            isIncorrect = true;
        }
    } while (isIncorrect);
    b = x + D;
    A = D * x / b;
    S = (pow(A, 2) + b * cos(x)) / (pow(D, 3) + (A + D - b));
    cout << "Соотношение, Вариант 1, S = " << S << endl;
}