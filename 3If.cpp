/*
Στη δομή απλής επιλογής, αν ισχύει η συνθήκη, τότε εκτελείται το block των εντολών εντός των '{...}'. Η εκτέλεση
συνεχίζεται με την πρώτη εντολή μετά το '}'


Παράδειγμα:
Διαβάζεται ένας αριθμός (integer) από το πληκτρολόγιο. Αν ο αριθμός που διαβάστηκε είναι μεγαλύτερος του μηδενός τότε να
εμφανίζει στην οθόνη το μήνυμα "Θετικός αριθμός".
*/

#include <iostream>
using namespace std;

int main ()
    {
    int x;    //Variable Declaration
    cout << "Enter number: ";
    cin >> x;
    if (x > 0)  //Condition: x>0
        {
        cout << "possitive number\n";
        }
    cout << "Good night\n";
    return 0;
    }
