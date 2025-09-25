# include <iostream>
# include <cmath>

using namespace std;

int main() {
    bool isIncorrect;
    double x, D, b, A, S;
    do {
        cout << "Введите значение x и D: ";
        cin >> x >> D;
        isIncorrect = false;
        if (cin.fail()) {
            cout << "Ошибка ввода!!! Попробуйте еще раз!" << endl;
            cin.clear();
            while(cin.get() != '\n');
            isIncorrect = true;
            continue;
        }
        b = x + D;
        A = D * x / b;
        if (b == 0 || (pow(D, 3) + (A + D - b)) == 0) {
            cout << "*Ошибка: знаменатель = 0!!!" << '\n' << "Введите другие значения x и (или) D!" << endl;
            isIncorrect = true;
        }
    } while (isIncorrect);
    S = (pow(A, 2) + b * cos(x)) / (pow(D, 3) + (A + D - b));
    cout << "Соотношение, Вариант 1, S = " << S << endl;
    return 0;
}