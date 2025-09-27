# include <iostream>
# include <cmath>

using namespace std;

int main() {
    bool isIncorrect;
    double x, p, h, K, C, D, A, B, Y;
    do {
        cout << "Введите значение x, p, h, K, C, D: ";
        cin >> x >> p >> h >> K >> C >> D;
        isIncorrect = false;
        if (cin.fail()) {
            cout << "*Ошибка ввода!!! Попробуйте еще раз!" << endl;
            cin.clear();
            while(cin.get() != '\n');
            isIncorrect = true;
            continue;
        }
        if (K == 0) {
            cout << "*Ошибка!!! Знаменатель не может быть равен нулю!!!"<< '\n' << "Введите другое значение K! " << endl;
            isIncorrect = true;
        }
        if (C == 0) {
            cout << "*Ошибка!!! Знаменатель не может быть равен нулю!!!"<< '\n' << "Введите другое значение C! " << endl;
            isIncorrect = true;
        }
        if (D == 0) {
            cout << "*Ошибка!!! Знаменатель не может быть равен нулю!!!"<< '\n' << "Введите другое значение D! " << endl;
            isIncorrect = true;
        }
        if (h <= 0) {
            cout << "*Ошибка!!! Логарифм с данным аргументом не существует!!!"<< '\n' << "Введите другое значение h! " << endl;
            isIncorrect = true;
        }
    } while (isIncorrect);
    A = x - p;
    B = log(h);
    Y = 0.78 * B + pow(A, 3) /(K * C * D);
    cout << "Соотношение, Вариант 7, Y = " << Y << endl;
    return 0;
}