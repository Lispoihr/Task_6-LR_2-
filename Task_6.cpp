# include <iostream>
# include <cmath>

using namespace std;

int main() {
    bool isIncorrect;
    double x, y, z, C, D, K, A, B, T;
    do {
        cout << "Введите значение x, y, z, C, D, K: ";
        cin >> x >> y >> z >> C >> D >> K;
        isIncorrect = false;
        if (cin.fail()) {
            cout << "*Ошибка ввода!!! Попробуйте еще раз!" << endl;
            cin.clear();
            while(cin.get() != '\n');
            isIncorrect = true;
            continue;
        }
        if (K - C * D == 0) {
            cout << "*Ошибка: знаменатель равен нулю!!!" << '\n' << "Введите другие значения переменных K и(или) C и(или) D!" << endl;
            isIncorrect = true;
        }
        if (z < 0) {
            cout << "*Ошибка: корень квадратный не находится из отрицательного числа!!!" << '\n' << "Введите другое значение z!" << endl;
            isIncorrect = true;
        }
    } while (isIncorrect);
    A = x - y;
    B = sqrt(z);
    T = cos(x) + pow(A, 2) / (K - C * D) - B;
    cout << "Соотношение, Вариант 4, T = " << T << endl;
    return 0;
}