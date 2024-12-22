#include "comparison.hpp"
#include "comparsion.cpp"

int main()
{
    double r1, i1, r2, i2;

    cout << "Enter real part of first complex number : ";
    cin >> r1;

    cout << "\nEnter imaginary part of first complex number : ";
    cin >> i1;

    cout << "\nEnter real part of second complex number : ";
    cin >> r2;

    cout << "\nEnter imaginary part of second complex number : ";
    cin >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    int option;

    while (true)
    {
        cout << "\n\nMAIN MENU\n\n";
        cout << "1. Equal to (==)";
        cout << "\n2. Unequal to (!=)";
        cout << "\n3. Less than (<)";
        cout << "\n4. Greater than (>)";
        cout << "\n5. Less than or equal to (<=)";
        cout << "\n6. Greater than or equal to (>=)";
        cout << "\n7. Exit";

        cout << "\n\nEnter your option : ";
        cin >> option;

        switch(option)
        {
            case 1:

            if (c1 == c2) cout << "\nc1 and c2 are equal";
            else cout << "\nc1 and c2 are not equal";
            break;

            case 2:

            if (c1 != c2) cout << "\nc1 and c2 are unequal";
            else cout << "\nc1 and c2 are not unequal";
            break;

            case 3:

            if (c1 < c2) cout << "\nc1 is less than c2";
            else cout << "\nc2 is less than c1";
            break;

            case 4:

            if (c1 > c2) cout << "\nc1 is greater than c2";
            else cout << "\nc2 is greater than c1";
            break;

            case 5:

            if (c1 <= c2) cout << "\nc1 is less than or equal to c2";
            else cout << "\nc1 is not less than or equal to c2";
            break;

            case 6:

            if (c1 >= c2) cout << "\nc1 is greater than or equal to c2";
            else cout << "\nc1 is not greater than or equal to c2";
            break;

            case 7:

            cout << "\nProgram exited successfully";
            return 0;

            default:

            cout << "\nPlease enter a valid option";
            break;
        }
    }
}