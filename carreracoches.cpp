
#include <iostream>
#include <ctime>

using namespace std;

int main(){

    srand(time(NULL));
    
    int longitud;

    cout << "\tDime la longitud de las pistas: " << endl;
    cin >> longitud;

    char pistaAzul[longitud];
    char pistaRojo[longitud];

    for(int i = 0; i <= longitud + 2; i++){

        if(i == 0){
            pistaAzul[i] = 91;
            pistaRojo[i] = 91;
        }else if( i > 0 && i <= longitud + 1){
            pistaAzul[i] = '_';
            pistaRojo[i] = '_';
        }else if( i == longitud + 2){
            pistaAzul[i] = 'A';
            pistaRojo[i] = 'R';
        }
    }

    int numTreesA = 1 + rand() % (4 - 1);
    int numTreesR = 1 + rand() % (4 - 1);

    cout << "El numero de arboles es: " << numTreesA << " " << numTreesR << endl;

    while (numTreesA > 0)
    {
        int arbol = 1 + rand() % (longitud);

        for(int i = 1; i <= longitud; i++){

            if(i == arbol){
                pistaAzul[i] = 'T';
                numTreesA--;
            }

        }        
    }

    while (numTreesR > 0)
    {
        int arbol = 1 + rand() % (longitud);

        for(int i = 1; i <= longitud; i++){

            if(i == arbol){
                pistaRojo[i] = 'T';
                numTreesR--;
            }

        }        
    }

    for(int i = 0; i <= longitud + 2; i++){

        cout << pistaAzul[i];
    }

    cout << endl;

    for(int i = 0; i <= longitud + 2; i++){

        cout << pistaRojo[i];
    }


    return 0;
}