# include <iostream>
# include <cmath>

using namespace std;

int main() {
    bool isIncorrect;
    double x, y, z, C, D, K, A, B, T;
    do {
        cout << "Введите занчение x, y, z, C, D, K: ";
        cin >> x >> y >> z >> C >> D >> K;
        isIncorrect = false;
        if (cin.fail()) {
            cout << "Ошибка ввода!!! Попробуйте еще раз!" << endl;
            cin.clear();
            while(cin.get() != '\n');
            isIncorrect = true;
        }
    } while (isIncorrect);
    A = x - y;
    B = sqrt(z);
    T = cos(x) + pow(A, 2) / (K - C * D) - B;
    cout << "Соотношение, Вариант 4, T = " << cos(x) << endl;
    return 0;
}