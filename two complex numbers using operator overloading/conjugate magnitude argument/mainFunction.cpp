#include "conjugate_magnitude_argument.hpp"
#include "conjugate_magnitude_arguemnt.cpp"

int main()
{
    double r, i;

    cout << "Enter real part of the complex number : ";
    cin >> r;

    cout << "\nEnter complex part of the complex number : ";
    cin >> i;

    Complex p(r,i);
    Complex result;
    double mag, arg;
    int option;

    while (true)
    {
        cout << "\n\nMAIN MENU\n\n";
        cout << "1. Conjugate";
        cout << "\n2. Magnitude";
        cout << "\n3. Arguemnt";
        cout << "\n4. Exit";

        cout << "\n\nEnter your option : ";
        cin >> option;

        switch(option)
        {
            case 1:

            result = ~p;
            cout << "\nInversion gives : ";
            result.display();
            break;

            case 2:

            mag = p.magnitude();
            cout << "\nMagnitude of the complex number is : " << mag;
            break;

            case 3:

            arg = p.argument();
            cout << "\nArgument of the complex number is : " << arg;
            break;

            case 4:

            cout << "\nProgram exited successfully";
            return 0;

            default:

            cout << "\nPlease enter a valid option";
            break;
        }
    }
}