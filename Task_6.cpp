# include <iostream>
# include <cmath>

using namespace std;

int main() {
    bool isIncorrect;
    double x, p, n, K, D, B, C, Q;
    do {
        cout << "Введите значение x, p, n, K, D: ";
        cin >> x >> p >> n >> K >> D;
        isIncorrect = false;
        if (cin.fail()) {
            cout << "*Ошибка ввода!!! Попробуйте еще раз!" << endl;
            cin.clear();
            while(cin.get() != '\n');
            isIncorrect = true;
            continue;
        }
        if (K == 0) {
            cout << "*Ошибка: знаменатель равен нулю!!!" << '\n' << "Введите другое значение переменной K!" << endl;
            isIncorrect = true;
        }
        if (D == 0) {
            cout << "*Ошибка: знаменатель равен нулю!!!" << '\n' << "Введите другое значение переменной D!" << endl;
            isIncorrect = true;
        }
    } while (isIncorrect);
    C = p - n;
    B = cos(x);
    Q = pow(B, 2) / (K * D) + B * pow(C, 3);
    cout << "Соотношение, Вариант 3, Q = " << Q << endl;
    return 0;
}