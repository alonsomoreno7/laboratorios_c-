#include <iostream>

using namespace std;

int main(){
 
    //Guardamos una variable llamada opciones
    int opciones = 0;

    //Se le pide al usuario la opcion con la cual se siente identificado
cout<<"Ingrese la opcion con la que se siente indentificado 1) Malo  2) Animal  3) Persona : ";

    //Se guarda el ejectuable
    cin >> opciones;

    //Verifica si la opcion es uno
    if(opciones ==  1){

        // Es la opcion Malo, muestra el mensaje de que esta dentro de su lista
        cout << "Estas dentro de su lista de presa F, viejito fue un gusto conocerte xd" << endl;
    }
    // Verifica si la opcion es dos
    else if(opciones == 2){

        //Es la opcion de Animal, muestra el mensaje que te protegeria 
        cout << "Felicidades estas en la lista de proteccion de Kraven" << endl;
    }
       // Verifica si la opcion es tres
       else if(opciones == 3){
        //Es la opcion de Animal, muestra el mensaje que te protegeria 
        cout << "Felicidades. Recibiste un saludo de Kraven" << endl;
    }
    //Si no se cumple las condiciones anteriores 
    else{
        //muestra un mensaje de error
        cout <<"Lo siento no esta en la lista proposicionada por Kraven revise las opciones porfavor" << endl;
        } 

    return 0;
}