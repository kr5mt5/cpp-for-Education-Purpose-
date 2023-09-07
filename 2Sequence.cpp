/*
Στη δομή ακολουθίας, οι εντολές τοποθετούνται η μία κάτω από την άλλη. Εκτελούνται όλες οι εντολές
η μία μετά την άλλη.

Παράδειγμα:
Διαβάζονται δύο αριθμοί (integers) από το πληκτρολόγιο, το άθροισμά τους εκχωρείται σε μία μεταβλητή και εμφανίζεται το
άθροισμα στην οθόνη.
*/


#include <iostream>
using namespace std;

int main ()
    {
    int x, y, z;    //Variable Declaration
    cout << "Enter number: ";
    cin >> x;
    cout << "Enter number: ";
    cin >> y;
    z = x + y;
    cout << "Sum is: " << z;
    return 0;
    }
