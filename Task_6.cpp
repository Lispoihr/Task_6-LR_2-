# include <iostream>
# include <cmath>

using namespace std;

int main() {
    bool isIncorrect;
    double x, y, C, K, A, D, S;
    do {
        cout << "Введите значение x, y, C, K: ";
        cin >> x >> y >> C >> K;
        isIncorrect = false;
        if (cin.fail()) {
            cout << "*Ошибка ввода!!! Попробуйте еще раз!" << endl;
            cin.clear();
            while(cin.get() != '\n');
            isIncorrect = true;
            continue;
        }
        if (C == 0) {
            cout << "*Ошибка!!! Знаменатель не может быть равен нулю!!!"<< '\n' << "Введите другое значение C! " << endl;
            isIncorrect = true;
        }
        if (K == 0) {
            cout << "*Ошибка!!! Знаменатель не может быть равен нулю!!!"<< '\n' << "Введите другое значение K! " << endl;
            isIncorrect = true;
        }
    } while (isIncorrect);
    A = x + y;
    D = fabs(C - A);
    S = 10.1 + A / C + D / pow(K, 2);
    cout << "Соотношение, Вариант 6, S = " << S << endl;
    return 0;
}