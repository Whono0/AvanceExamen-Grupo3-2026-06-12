#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {

    string nombre, apellido;
    bool cumplimiento[7];

    string tareas[7] = {
        "Ordenar escritorio",
        "Guardar ropa en armario",
        "Tender la cama",
        "Limpiar piso",
        "Organizar libros/cuadernos",
        "Limpiar ventana",
        "Revision general de la habitacion"
    };

    // Agregado por Markoantonio Quinteros Serpa
    // Correo: [61654091@continental.edu.pe](61654091@continental.edu.pe)

    // En esta parte estoy creando la seccion de organizacion de la ropa
    // para complementar el sistema de organizacion personal
    bool cumplimientoRopa[4];

    // Aqui guardo la cantidad de actividades que tendra la nueva rama de ropa
    // Autor: Markoantonio Quinteros Serpa
    int totalRopa = 4;

    // Estoy creando un arreglo sencillo con las actividades de organizacion de ropa
    // Desarrollado por Markoantonio Quinteros Serpa
    string tareasRopa[4] = {
        "Doblar la ropa limpia",
        "Guardar la ropa en el armario",
        "Separar la ropa sucia",
        "Organizar los cajones de ropa"
    };

    cout << "=========================================\n";
    cout << " SISTEMA DE ORGANIZACION DE HABITACION\n";
    cout << "=========================================\n\n";

    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    cout << "Ingrese su apellido: ";
    getline(cin, apellido);

    cout << "\n=========================================\n";
    cout << "BIENVENIDO " << nombre << " " << apellido << endl;
    cout << "=========================================\n\n";

    string mensajes[5] = {
        "Cada pequeno esfuerzo te acerca a tus metas.",
        "Una habitacion ordenada refleja una mente organizada.",
        "La disciplina de hoy es el exito de manana.",
        "Tu puedes lograr grandes cambios con pequenos habitos.",
        "Mantente constante y veras resultados increibles."
    };

    srand(time(NULL));

    cout << "MENSAJE MOTIVACIONAL DEL DIA:\n";
    cout << mensajes[rand()%5] << endl;

    cout << "\n=========================================\n";
    cout << "CRONOGRAMA SEMANAL\n";
    cout << "=========================================\n";

    char respuesta;

    for(int i=0;i<7;i++)
    {
        cout << "\nDia " << i+1 << endl;
        cout << "Actividad: " << tareas[i] << endl;
        cout << "¿Cumplio la actividad? (S/N): ";
        cin >> respuesta;

        if(respuesta=='S' || respuesta=='s')
            cumplimiento[i]=true;
        else
            cumplimiento[i]=false;
    }

    cout << "\n=========================================\n";
    cout << "RAMA: ORGANIZACION DE LA ROPA\n";
    cout << "=========================================\n";

    // Aqui declaro una respuesta para registrar si se cumplio cada actividad de ropa
    // Autor: Markoantonio Quinteros Serpa
    char respuestaRopa;

    // En este ciclo estoy recorriendo las actividades de la rama ropa una por una
    // Agregado por Markoantonio Quinteros Serpa
    for(int i=0;i<totalRopa;i++)
    {
        cout << "\nActividad de ropa " << i+1 << endl;
        cout << "Actividad: " << tareasRopa[i] << endl;

        // Aqui pido al usuario que indique si realizo la actividad
        // Correo: [61654091@continental.edu.pe](61654091@continental.edu.pe)
        cout << "¿Cumplio la actividad? (S/N): ";
        cin >> respuestaRopa;

        // En esta validacion reviso si la respuesta fue S o s
        // Desarrollado por Markoantonio Quinteros Serpa
        if(respuestaRopa=='S' || respuestaRopa=='s')
            cumplimientoRopa[i]=true;
        else
            cumplimientoRopa[i]=false;
    }

    cout << "\n\n=========================================\n";
    cout << "REPORTE FINAL DE LA SEMANA\n";
    cout << "=========================================\n";

    int realizados = 0;

    cout << "\nGRAFICA DE CUMPLIMIENTO\n\n";

    for(int i=0;i<7;i++)
    {
        cout << "Dia " << setw(2) << i+1 << " | ";

        if(cumplimiento[i])
        {
            cout << "[✔]";
            realizados++;
        }
        else
        {
            cout << "[✘]";
        }

        cout << " - " << tareas[i] << endl;
    }

    // Aqui empiezo a contar las actividades completadas de la rama ropa
    // Autor: Markoantonio Quinteros Serpa
    int realizadosRopa = 0;

    cout << "\nGRAFICA DE CUMPLIMIENTO - ORGANIZACION DE LA ROPA\n\n";

    // Estoy mostrando los resultados de la rama ropa usando el mismo formato visual
    // Desarrollado por Markoantonio Quinteros Serpa
    for(int i=0;i<totalRopa;i++)
    {
        cout << "Ropa " << setw(2) << i+1 << " | ";

        // Aqui verifico si la actividad de ropa fue completada
        // Agregado por Markoantonio Quinteros Serpa
        if(cumplimientoRopa[i])
        {
            cout << "[✔]";
            realizadosRopa++;
        }
        else
        {
            cout << "[✘]";
        }

        cout << " - " << tareasRopa[i] << endl;
    }

    // En esta parte calculo el porcentaje de cumplimiento solo de la rama ropa
    // Autor: Markoantonio Quinteros Serpa
    float porcentajeRopa = (realizadosRopa / (float)totalRopa) * 100;

    cout << "\n-----------------------------------------\n";
    cout << "Actividades de ropa realizadas: " << realizadosRopa << " de " << totalRopa << "\n";

    // Aqui muestro el porcentaje final de la rama organizacion de la ropa
    // Correo: [61654091@continental.edu.pe](61654091@continental.edu.pe)
    cout << "Porcentaje de cumplimiento en ropa: "
         << fixed << setprecision(2)
         << porcentajeRopa << "%\n";
    cout << "-----------------------------------------\n";

    float porcentaje = (realizados / 7.0) * 100;

    cout << "\n-----------------------------------------\n";
    cout << "Tareas realizadas: " << realizados << " de 7\n";
    cout << "Porcentaje de cumplimiento: "
         << fixed << setprecision(2)
         << porcentaje << "%\n";
    cout << "-----------------------------------------\n";

    if(porcentaje >= 90)
    {
        cout << "\nEXCELENTE. Mantienes una habitacion muy organizada.\n";
    }
    else if(porcentaje >= 70)
    {
        cout << "\nMUY BIEN. Sigue mejorando tus habitos.\n";
    }
    else if(porcentaje >= 50)
    {
        cout << "\nREGULAR. Necesitas mayor constancia.\n";
    }
    else
    {
        cout << "\nDEBES MEJORAR. Intenta cumplir mas actividades la proxima semana.\n";
    }

    cout << "\nGracias por utilizar el sistema.\n";

    system("pause");
    return 0;
}