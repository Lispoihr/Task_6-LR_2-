# include <iostream>
# include <cmath>

using namespace std;

int main() {
    bool isIncorrect;
    double x, n, m, K, A, D, Y;
    do {
        cout << "Введите значение x, n, m, K: ";
        cin >> x >> n >> m >> K;
        isIncorrect = false;
        if (cin.fail()) {
            cout << "Ошибка ввода!!! Попробуйте еще раз!" << endl;
            cin.clear();
            while(cin.get() != '\n');
            isIncorrect = true;
            continue;
        }
        A = fabs(n + m);
        if (A == 0) {
            cout << "*Ошибка: знаменатель равен нулю!!!" << '\n' << "Введите другие значения переменных n и(или) m!" << endl;
            isIncorrect = true;
        }
        if (cos(x) == 0) {
            cout << "Ошибка: тангенс не существует!!!" << '\n' << "Введите другое значение x!" << endl;
            isIncorrect = true;
        }
    } while (isIncorrect);
    D = tan(x);
    Y = 1.29 + K / A + pow(D, 2);
    cout << "Соотношение, Вариант 5, Y = " << Y << endl;
    return 0;
}