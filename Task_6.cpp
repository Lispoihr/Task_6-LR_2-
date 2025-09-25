# include <iostream>
# include <cmath>

using namespace std;

int main() {
    bool isIncorrect;
    double x, p, K, D, C, B, A, Y;
    do {
        cout << "Введите значение x, p, K, D, C: ";
        cin >> x >> p >> K >> D >> C;
        isIncorrect = false;
        if (cin.fail()) {
            cout << "*Ошибка ввода!!! Попробуйте еще раз!" << endl;
            cin.clear();
            while(cin.get() != '\n');
            isIncorrect = true;
            continue;
        }
        A = x + sin(p);
        if (A == 0) {
            cout << "*Ошибка: знаменатель не может быть равен нулю!!!"<< '\n' << "Введите другое значение x и(или) p!" << endl;
            isIncorrect = true;
        }
    } while (isIncorrect);
    B = exp(K);
    Y = 1 + pow(K, 2) / (2 * A * B) - B + D * C;
    cout << "Соотношение, Вариант 2, Y = " << Y << endl;
    return 0;
}