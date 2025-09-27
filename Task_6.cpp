# include <iostream>
# include <cmath>

using namespace std;

int main() {
    bool isIncorrect;
    double x, k, z, C, D, A, B, Y;
    do {
        cout << "Введите значение x, k, z, C, D: ";
        cin >> x >> k >> z >> C >> D;
        isIncorrect = false;
        if (cin.fail()) {
            cout << "*Ошибка ввода!!! Попробуйте еще раз!" << endl;
            cin.clear();
            while(cin.get() != '\n');
            isIncorrect = true;
            continue;
        }
        if (x <= 0) {
            cout << "*Ошибка: логарифм с данным аргументом не существует!!!"<< '\n' << "Введите другое значение x! " << endl;
            isIncorrect = true;
            continue;
        }
        if (z < 0) {
            cout << "*Ошибка: корень квадратный не находится из отрицательного числа!!!" << '\n' << "Введите другое значение z!" << endl;
            isIncorrect = true;
        }
        A = log(x) - k;
        if (A == 0) {
            cout << "*Ошибка: знаменатель не может быть равен нулю!!!"<< '\n' << "Введите другие значения для x и(или) k! " << endl;
            isIncorrect = true;
        }
    } while (isIncorrect);
    B = sqrt(z);
    Y = pow(D, 2) + pow(C, 2) / (0.75 * A) + B;
    cout << "Соотношение, Вариант 10, Y = " << Y << endl;
    return 0;
}