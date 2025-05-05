#include <iostream>
using namespace std;

int main()
{
    // Declaración de variables para almacenar los dos numeros y el resultado
    float num1,num2, resultado;
    int opcion;

    // Solicitar al usuario que ingrese el primer numero al usuario
    cout << "Ingrese el primer numero: ";
    cin >> num1;

     // Solicitar al usuario que ingrese el primer numero al usuario
     cout << "Ingrese el segundo numero: ";
     cin >> num2;
 

    // Muestra el menú de opciones para elegir al usuario 
    cout << "--------------------------------------" << endl;
    cout << "Menu" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "5. Salir" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    // Verificamos si la opción ingresada por el usuario es valida
    if (opcion < 1 || opcion > 5)
    {
        cout << "Opcion no válida. Por favor, elija una opción del 1 al 5." << endl;
        return 1; // Indica que no es una opcion valida en el menu
    }

    // Aqui se mostraran el resultado de cada opcion elegida por el usuario
    switch (opcion)
    {
    case 1: // Esta es la opcion que se mostrara en caso que sea una Suma
        resultado = num1 + num2;
        cout << "El resultado de la suma es: " << resultado << endl;
        break;
    case 2: //Esta es la opcion que se mostrara en caso que sea una Resta
        resultado = num1 - num2;
        cout << "El resultado de la resta es: " << resultado << endl;
        break;
    case 3: //Esta es la opcion que se mostrara en caso que sea una Multiplicación
        resultado = num1 * num2;
        cout << "El resultado de la multiplicacion es: " << resultado << endl;
        break;
    case 4: // Esta es la opcion que se mostrara en caso que sea una División
    // Verificamos si el segundo número es cero antes de realizar la división
        if (num2 != 0)
        {
            resultado = num1 / num2;
            cout << "El resultado de la division es: " << resultado << endl;
        }
        else
        {
            cout << "Division por cero no se puede segun la logica matematicas." << endl;
            return 1; // Este mensaje se muestra en caso que el usuario quiera dividir entre cero
        }
        break;
        case 5: // Este mensaje se muestra al momento que el usuario cierra el programa 
        cout << "Cerrando programando. Gracias tenga un buen dia" << endl;
        return 0;
        break;
    default:
        cout << "Opcion que escogida no es valida en el sistema. Por favor, elija una opción del 1 al 5." << endl;
        return 1; // Este mensaje se muestra en caso que se ingrese una opcion no valida
    }

        // Se verifica si el resultado es positivo, negativo o cero
        if (resultado > 0)
        {
            cout << "El resultado es positivo." << endl;
        }
        else if (resultado < 0)
        {
            cout << "El resultado es negativo." << endl;
        }
        else
        {
            cout << "El resultado es cero." << endl;
        }

    return 0; // Se cierra el programa al finalizar
}
