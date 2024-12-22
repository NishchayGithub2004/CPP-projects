#include "polynomial.hpp"
#include "insertTerm.cpp"
#include "createPolynomial.cpp"
#include "addition.cpp"
#include "subtraction.cpp"
#include "multiplication.cpp"
#include "differentiation.cpp"
#include "integration.cpp"
#include "evaluatePolynomial.cpp"
#include "display.cpp"
using namespace std;

int main()
{
    Polynomial p1, p2, p3;
    int choice;
    double result, x;

    p1.createPolynomial();
    p2.createPolynomial();

    while (true)
    {
        cout << "\n\nMAIN MENU\n\n";
        cout << "1. Add polynomials";
        cout << "\n2. Subtract polynomials";
        cout << "\n3. Multiply polynomials";
        cout << "\n4. Display first polynomial";
        cout << "\n5. Display second polynomial";
        cout << "\n6. Differentiate first polynomial";
        cout << "\n7. Differentiate second polynomial";
        cout << "\n8. Integrate first polynomial";
        cout << "\n9. Integrate second polynomial";
        cout << "\n10. Evaluate first polynomial";
        cout << "\n11. Evaluate second polynomial";
        cout << "\n12. Evaluate differential of first polynomial";
        cout << "\n13. Evaluate differential of second polynomial";
        cout << "\n14. Evaluate integral of first polynomial";
        cout << "\n15. Evaluate integral of second polynomial";
        cout << "\n16. Exit";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:

            p3 = p1 + p2;
            cout << "\nAddition of both the polynomials give : ";
            p3.display();
            break;

            case 2:

            p3 = p1 - p2;
            cout << "\nSubtraction of both the polynomials give : ";
            p3.display();
            break;
            
            case 3:

            p3 = p1 * p2;
            cout << "\nMultiplication of both the polynomials give : ";
            p3.display();
            break;

            case 4:

            cout << "\nFirst polynomial is : ";
            p1.display();
            break;

            case 5:

            cout << "\nSecond polynomial is : ";
            p2.display();
            break;

            case 6:

            p3 = p1.differentiation();
            cout << "\nDifferentiation of first polynomial gives : ";
            p3.display();
            break;

            case 7:

            p3 = p2.differentiation();
            cout << "\nDifferentiation of second polynomial gives : ";
            p3.display();
            break;

            case 8:

            p3 = p1.integration();
            cout << "\nIntegration of first polynomial gives : ";
            p3.display();
            break;

            case 9:

            p3 = p2.integration();
            cout << "\nIntegration of second polynomial gives : ";
            p3.display();
            break;

            case 10:

            cout << "\nEnter value to evaluate first polynomial at : ";
            cin >> x;
            result = p1.evaluatePolynomial(x);
            cout << "\nEvaluation of first polynomial at " << x << " gives " << result;
            break;

            case 11:

            cout << "\nEnter value to evaluate second polynomial at : ";
            cin >> x;
            result = p2.evaluatePolynomial(x);
            cout << "\nEvaluation of second polynomial at " << x << " gives " << result;
            break;

            case 12:

            p3 = p1.differentiation();
            cout << "\nEnter value to evaluate differential at : ";
            cin >> x;
            result = p3.evaluatePolynomial(x);
            cout << "\nEvaluation of differential of first polynomial at " << x << " gives " << result;
            break;

            case 13:

            p3 = p2.differentiation();
            cout << "\nEnter value to evaluate differential at : ";
            cin >> x;
            result = p3.evaluatePolynomial(x);
            cout << "\nEvaluation of differential of second polynomial at " << x << " gives " << result;
            break;

            case 14:

            p3 = p1.integration();
            cout << "\nEnter value to evaluate integral at : ";
            cin >> x;
            result = p3.evaluatePolynomial(x);
            cout << "\nEvaluation of integral of first polynomial at " << x << " gives " << result;
            break;

            case 15:

            p3 = p2.integration();
            cout << "\nEnter value to evaluate integral at : ";
            cin >> x;
            result = p3.evaluatePolynomial(x);
            cout << "\nEvaluation of integral of second polynomial at " << x << " gives " << result;
            break;

            case 16: cout << "\nProgram exited successfully"; return 0;

            default: cout << "\nPlease enter a valid option"; break;
        }
    }
}