#include <iostream>

using namespace std;

int main()
{
    int nbAnimaux(2);

    switch (nbAnimaux)
    {
        case 0:
            cout << "Vous n'avez pas d'animaux de compagnie" << endl;
            break;

        case 1:
            cout << "C'est super d'avoir un fidele compagnon !" << endl;
            break;

        case 2:
            cout << "Ca doit en faire du monde a la maison !" << endl;
            break;

        default:
            cout << "Votre budget croquettes doit etre important" << endl;
            break;
    }

    return 0;
}