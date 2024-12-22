#include "natural_exponent_and_logarithm_and_euler_form.hpp"
#include "natural_exponent_and_logarithm_and_euler_form.cpp"

int main()
{
    double r, i;

    cout << "Enter real part of the complex number : ";
    cin >> r;

    cout << "\nEnter complex part of the complex number : ";
    cin >> i;

    Complex p(r,i);
    Complex result;
    int option;
    double angle = 3.14 / 4;

    while (true)
    {
        cout << "\n\nMAIN MENU\n\n";
        cout << "1. Natural exponent";
        cout << "\n2. Natural logarithm";
        cout << "\n3. Euler form";
        cout << "\n4. Exit";

        cout << "\n\nEnter your option : ";
        cin >> option;

        switch(option)
        {
            case 1:

            result = ~p;
            cout << "\nNatural exponent of this complex number gives : ";
            result.display();
            break;

            case 2:

            result = !p;
            cout << "\nNatural logarithm of this complex number gives : ";
            result.display();
            break;

            case 3:

            result = Complex(0,1) ^ angle;
            cout << "\nEuler form at 45 degree is : ";
            result.display();
            break;

            case 4:

            cout << "\nProgram exited successsfully";
            return 0;

            default:

            cout << "\nPlease enter a valid option";
            break;
        }
    }
}