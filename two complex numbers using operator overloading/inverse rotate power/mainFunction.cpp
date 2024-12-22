#include "inverse_rotate_power.hpp"
#include "inverse_rotate_power.cpp"

int main()
{
    double r, i;

    cout << "Enter real part of the complex number : ";
    cin >> r;

    cout << "\nEnter complex part of the complex number : ";
    cin >> i;

    Complex p(r,i);
    Complex result;
    double mag, arg, angle = 3.14 / 4;
    int option, power;

    while (true)
    {
        cout << "\n\nMAIN MENU\n\n";
        cout << "1. Inverse";
        cout << "\n2. Rotate";
        cout << "\n3. Power";
        cout << "\n4. Exit";

        cout << "\n\nEnter your option : ";
        cin >> option;

        switch(option)
        {
            case 1:
            
            result = p / 1;
            cout << "\nThe inverse of this complex number is : ";
            result.display();
            break;

            case 2:

            result = p * angle;
            cout << "\nAfter rotating by 45 degrees, the complex number becomes : ";
            result.display();
            break;

            case 3:

            cout << "\nEnter power you want to raise the complex number to : ";
            cin >> power;
            result = p ^ power;
            cout << "\nAfter raising the complex number by " << power << ", the complex number becomes : ";
            result.display();
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