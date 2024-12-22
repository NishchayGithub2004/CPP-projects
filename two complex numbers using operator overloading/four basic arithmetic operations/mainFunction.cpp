#include "four_basic_arithmetic_operations.hpp"
#include "four_basic_arithmetic_operations.cpp"

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
    Complex result;

    int option;

    while (true)
    {
        cout << "\n\nMAIN MENU\n\n";
        cout << "1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Exit";

        cout << "\n\nEnter your choice : ";
        cin >> option;

        switch (option)
        {
            case 1:

            result = c1 + c2;
            cout << "\nAddition of both the complex numbers give : ";
            result.display();
            break;

            case 2:

            result = c1 - c2;
            cout << "\nSubtraction of both the complex numbers give : ";
            result.display();
            break;

            case 3:

            result = c1 * c2;
            cout << "\nMultiplication of both the complex numbers give : ";
            result.display();
            break;

            case 4:

            try 
            {
                result = c1 / c2;
                cout << "\nDivision of both the complex numbers give : ";
                result.display();
            } 
            
            catch (runtime_error& e) cout << e.what();

            case 5:

            cout << "\nProgram exited successfully";
            return 0;

            default:

            cout << "\nPlease enter a valid option";
            break;
        }
    }
}