# include <iostream>
# include <cmath>

using namespace std;

int main() {
    bool isIncorrect;
    double x, d, C, K, A, B, Y;
    do {
        cout << "Введите значение x, d, C, K: ";
        cin >> x >> d >> C >> K;
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
        if (x <= 0) {
            cout << "*Ошибка!!! Логарифм с данным аргументом не существует!!!"<< '\n' << "Введите другое значение x! " << endl;
            isIncorrect = true;
        }
    } while (isIncorrect);
    A = log10(x);
    B = x + exp(d);
    Y = (A + B) - pow(C, 2) / K;
    cout << "Соотношение, Вариант 8, Y = " << Y << endl;
    return 0;
}