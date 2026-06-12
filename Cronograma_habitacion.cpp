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