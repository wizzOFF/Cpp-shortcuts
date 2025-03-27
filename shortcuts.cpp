/*
#include <iostream>
using namespace std;

int main()
{
   double nombre(5.3);
   nombre += 4.2;       //'nombre' vaut maintenant 9.5
   nombre *= 2.;        //'nombre' vaut maintenant 19
   nombre -= 1.;        //'nombre' vaut maintenant 18
   nombre /= 3.;        //'nombre' vaut maintenant 6
   return 0;
}
*/
/*
#include <iostream>
#include <cmath>  //Ne pas oublier cette ligne 
using namespace std;

int main()
{
    double const nombre(16); //Le nombre dont on veut la racine
                             //Comme sa valeur ne changera pas on met 'const'
    double resultat;         //Une case mémoire pour stocker le résultat

    resultat = sqrt(nombre);  //On effectue le calcul !

    cout << "La racine de " << nombre << " est " << resultat << endl;

    return 0;
}
*/

#include <iostream>
#include <cmath>  //Ne pas oublier !
using namespace std;

int main()
{
   double a(0), b(0); //Déclaration des variables utiles

   cout << "Bienvenue dans le programme de calcul de a^b !" << endl;

   cout << "Donnez une valeur pour a : "; //On demande le premier nombre
   cin >> a;

   cout << "Donnez une valeur pour b : "; //On demande le deuxième nombre
   cin >> b;

   double const resultat(pow(a, b)); //On effectue l'opération
   //On peut aussi écrire comme avant :
   //double const resultat = pow(a,b);
   //Souvenez-vous des deux formes possibles
   //De l'initialisation d'une variable

   cout << a << " ^ " << b << " = " << resultat << endl;
   //On affiche le résultat

   return 0;
}