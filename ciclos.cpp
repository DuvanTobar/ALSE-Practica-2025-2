#include <iostream>
using namespace std;
int main()
{
    int opcion;
    char r;
    cout << "Desea ingresar alguna opcion?s/n:" << endl;
    cin >> r;
    while( r== 's' || r== 'S')
    {
        cout << "Por favor digite un numero entre 1 al 3 dependiendo de la opcion que desea: " << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "Usted ha seleccionado la opcion 1" << endl;
            printf("HOLA MUNDO!\n");
            break;
        case 2:
            cout << "Opcion 2 Seleccionada" << endl;
            printf("FELICIDADES!\n");
            break;
        case 3:
            cout << "Opcion 3 Seleccionada" << endl;
            printf("USTED ES UN GENIO!\n");
            break;

        }
        cout << "Desea ingresar otra opcion?s/n:" << endl;
        cin >> r;
    }
    if (r=!'s' || r!='S')
    {
        cout << "Gracias por su visita" << endl;
    }
    return 0;

}