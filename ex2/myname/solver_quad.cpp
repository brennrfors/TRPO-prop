
#include "solver_quad.h"
#include "math.h"

void solver_quad::solve_quadro(int aa, int bb, int cc) {
    int a = aa, b = bb, c = cc;
    float discriminant, realPart, imaginaryPart, x1, x2;
    if (a == 0) {
        cout << "This is not a quadratic equation";
    }else {
        discriminant = comput_discr(b, a, c);
        if (discriminant > 0) {
            x1 = (-b + sqrt(discriminant)) / (2*a);
            x2 = (-b - sqrt(discriminant)) / (2*a);
            cout << "Roots are real and different." << endl;
            cout << "Root 1 = " << x1 << endl;
            cout << "Root 2 = " << x2 << endl;
        } else if (discriminant == 0) {
            cout << "Roots are real and same." << endl;
            x1 = (-b + sqrt(discriminant)) / (2*a);
            cout << "Root 1 = Root 2 = " << x1 << endl;
        }else {
            realPart = (float) -b/(2*a);
            imaginaryPart =sqrt(-discriminant)/(2*a);
            cout << "\nRoots are complex and different." << endl;
            cout << "\nRoot 1 = " << realPart << " + " << imaginaryPart << "i" <<endl;
            cout << "\nRoot 2 = " << realPart << " - " << imaginaryPart << "i" <<endl;
        }
    }
}