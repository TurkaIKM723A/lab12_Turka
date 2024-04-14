#include <iostream>

using namespace std; 

bool isPerfect(int number) {

    int sum = 0;

    for (int i = 1; i <= number / 2; ++i) {

        if (number % i == 0) {

            sum += i;

        }
    }

    return sum == number;

} 

int main() {

    setlocale(LC_CTYPE, "ukr"); 

    int N;

    cout << "Введiть число N: ";
    std::cin >> N;

    int perfectNumbers[1000]; 
    int count = 0; 
    int sum = 0; 

    for (int i = 2; i < N; ++i) {

        if (isPerfect(i)) {

            perfectNumbers[count++] = i;

            sum += i;

        }
    }

    cout << "Досконалi числа менше " << N << ": ";

    for (int i = 0; i < count; ++i) {

        cout << perfectNumbers[i] << " ";
    }
    cout << '\n';

    cout << "Сума досконалих чисел: " << sum << '\n';

    return 0;
}
