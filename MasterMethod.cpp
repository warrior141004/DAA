#include <iostream>
#include <cmath>
using namespace std;

void applyMasterTheorem(int a, int b, double f_n_exp) {
    double log_b_a = log(a) / log(b);
    cout << "log_b(a) = " << log_b_a << endl;

    if (f_n_exp < log_b_a) {
        cout << "Case 1 applies: T(n) = Theta(n^" << log_b_a << ")" << endl;
    }
    else if (fabs(f_n_exp - log_b_a) < 1e-6) { 
        cout << "Case 2 applies: T(n) = Theta(n^" << log_b_a << " * log n)" << endl;
    }
    else {
        cout << "Case 3 applies: T(n) = Theta(n^" << f_n_exp << ")" << endl;
    }
}

int main() {
    int a, b;
    double f_n_exp;

    cout << "Enter the values of a and b: ";
    cin >> a >> b;

    cout << "Enter the exponent of f(n) (e.g., if f(n) = n^2, enter 2): ";
    cin >> f_n_exp;

    applyMasterTheorem(a, b, f_n_exp);

    return 0;
}
