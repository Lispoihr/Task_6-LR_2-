# include <iostream>
# include <cmath>

using namespace std;

int main() {
    bool isIncorrect;
    double x, n, m, K, A, D, Y;
    do {
        cout << "Введите занчение x, n, m, K: ";
        cin >> x >> n >> m >> K;
        isIncorrect = false;
        if (cin.fail()) {
            cout << "Ошибка ввода!!! Попробуйте еще раз!" << endl;
            cin.clear();
            while(cin.get() != '\n');
            isIncorrect = true;
        }
    } while (isIncorrect);
    A = fabs(n + m);
    D = tan(x);
    Y = 1.29 + K / A + pow(D, 2);
    cout << "Соотношение, Вариант 5, Y = " << Y << endl;
    return 0;
}