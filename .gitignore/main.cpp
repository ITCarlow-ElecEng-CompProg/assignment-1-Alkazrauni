/** Salman Al-kazrauni
 *  C00199530
 *  Exercise 1
 *  Celsius to Fahrenheit Temperature conversion
 */





#include <iostream>

using namespace std;

/**< main function */
int main()
{
    /**< variable function */
    double C , F;

    cout << "Celsius to Fahrenheit Temperature conversion" << endl;

    /**< ask the user to insert the temp. in Celsius */
    cout << "\ninsert the the Teperature in Celsius : ";
    cin >> C ;

    /**< the Equation */
    F = (9.0 / 5.0) * C + 32;

    /**< Display the Temp. in Fahrenheit */
    cout << "\nthe Temperature in Fahrenheit is : " << F << endl;

    return 0;
}
