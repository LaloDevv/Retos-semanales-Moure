
#include <iostream>
#include <ctime>
#include <windows.h>

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

    cout << "El numero de arboles es: " << numTreesA << " para la pista A y " << numTreesR <<" para la pista B" << endl;

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

    int positionA = longitud + 2;
    int positionR = longitud + 2;

    Sleep(2000);
    system("cls");

    bool bandera = false;

    do
    {
        int moveA = 1 + rand()% (4 - 1);
        int moveR = 1 + rand()% (4 - 1);
        
        pistaAzul[positionA - moveA] = 'A';
        pistaRojo[positionR - moveR] = 'R';

        positionA = positionA - moveA;
        positionR = positionR - moveR;

        pistaAzul[positionA + moveA] = '_';
        pistaRojo[positionR + moveR] = '_';

        for(int i = 0; i <= longitud + 2; i++){

        cout << pistaAzul[i];
        }

        cout << endl;

        for(int i = 0; i <= longitud + 2; i++){

            cout << pistaRojo[i];
        }

        Sleep(500);
        system("cls");

        if(positionA <= 0){
            cout << "\tHA GANADO EL AZUL!!!";
            bandera = true;
        }else  if(positionR <= 0){
            cout << "\tHA GANADO EL ROJO!!!";
            bandera = true;
        }else{
            bandera = false;
        }

    } while (bandera == false);
    











    return 0;
}