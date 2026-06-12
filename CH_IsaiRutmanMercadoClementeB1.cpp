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

    // Estoy creando una nueva rama para la organizacion de la cama
    // para complementar el cronograma semanal que ya existe.
    // Autor: Isai Rutman Mercado Clemente
    // Correo: 76505332@continental.edu.pe

    cout << "\n\n=========================================";
    cout << "\nRAMA: ORGANIZACION DE LA CAMA";
    cout << "\n=========================================";

    // Aqui guardo las actividades nuevas de esta rama
    // para que se vean como parte del reporte final.
    // Autor: Isai Rutman Mercado Clemente
    // Correo: 76505332@continental.edu.pe
    string tareasCama[4] = {
        "Tender la cama",
        "Doblar las sabanas",
        "Acomodar las almohadas",
        "Revisar el orden general de la cama"
    };

    // Creo un arreglo simple para guardar si cada actividad fue cumplida.
    // Autor: Isai Rutman Mercado Clemente
    // Correo: 76505332@continental.edu.pe
    bool cumplimientoCama[4];
    char respuestaCama;

    // Pido al estudiante que responda sobre cada actividad de la cama.
    // Autor: Isai Rutman Mercado Clemente
    // Correo: 76505332@continental.edu.pe
    for(int i=0;i<4;i++)
    {
        cout << "\nActividad: " << tareasCama[i] << endl;
        cout << "¿Cumplio la actividad? (S/N): ";
        cin >> respuestaCama;

        // Guardo la respuesta en el arreglo de cumplimiento.
        if(respuestaCama=='S' || respuestaCama=='s')
            cumplimientoCama[i]=true;
        else
            cumplimientoCama[i]=false;
    }

    // Muestro el resultado de esta rama con simbolos sencillos.
    // Autor: Isai Rutman Mercado Clemente
    // Correo: 76505332@continental.edu.pe
    cout << "\n-----------------------------------------\n";
    cout << "REPORTE DE LA RAMA DE LA CAMA\n";
    cout << "-----------------------------------------\n";

    // Aqui cuento cuantas actividades de la cama se completaron.
    // Autor: Isai Rutman Mercado Clemente
    // Correo: 76505332@continental.edu.pe
    int realizadasCama = 0;

    for(int i=0;i<4;i++)
    {
        cout << " - ";

        // Si la actividad fue cumplida, muestro un check verde.
        if(cumplimientoCama[i])
        {
            cout << "[✔]";
            realizadasCama++;
        }
        else
        {
            cout << "[✘]";
        }

        // Aqui termino de mostrar la actividad correspondiente.
        cout << " - " << tareasCama[i] << endl;
    }

    // Calculo el porcentaje de cumplimiento para esta rama nueva.
    // Autor: Isai Rutman Mercado Clemente
    // Correo: 76505332@continental.edu.pe
    float porcentajeCama = (realizadasCama / 4.0) * 100;

    // Presento el porcentaje de avance de la organizacion de la cama.
    // Autor: Isai Rutman Mercado Clemente
    // Correo: 76505332@continental.edu.pe
    cout << "\nTareas realizadas: " << realizadasCama << " de 4\n";
    cout << "Porcentaje de cumplimiento: "
         << fixed << setprecision(2)
         << porcentajeCama << "%\n";

    // Finalizo con un mensaje simple para esta rama nueva.
    // Autor: Isai Rutman Mercado Clemente
    // Correo: 76505332@continental.edu.pe
    if(porcentajeCama >= 75)
    {
        cout << "\nMuy bien. La cama esta bien organizada.\n";
    }
    else
    {
        cout << "\nTodavia falta mejorar el orden de la cama.\n";
    }

    // Agregado por Nelsi Ignacio Cabanilla
    // Correo: [76209832@continental.edu.pe](76209832@continental.edu.pe)
    // En esta parte estoy creando las actividades relacionadas
    // con el orden personal y el estudio del estudiante.
    string tareasPersonal[4] = {
        "Organizar el escritorio",
        "Ordenar cuadernos y libros",
        "Botar papeles innecesarios",
        "Lavar platos o utensilios utilizados durante el estudio"
    };

    // Creo un arreglo simple para guardar si cada actividad fue cumplida.
    // Autor: Nelsi Ignacio Cabanilla
    bool cumplimientoPersonal[4];
    char respuestaPersonal;

    // Pido al usuario que responda sobre cada actividad de esta rama.
    // Correo: [76209832@continental.edu.pe](76209832@continental.edu.pe)
    for(int i=0; i<4; i++)
    {
        cout << "\nActividad: " << tareasPersonal[i] << endl;
        cout << "¿Cumplio la actividad? (S/N): ";
        cin >> respuestaPersonal;

        // Aquí guardo la respuesta ingresada por el usuario
        // Autor: Nelsi Ignacio Cabanilla
        if(respuestaPersonal == 'S' || respuestaPersonal == 's')
            cumplimientoPersonal[i] = true;
        else
            cumplimientoPersonal[i] = false;
    }

    // Muestro el resultado final de la categoría
    // Desarrollado por Nelsi Ignacio Cabanilla
    cout << "\n-----------------------------------------\n";
    cout << "REPORTE DE LA RAMA: ORDEN PERSONAL Y ESTUDIO\n";
    cout << "-----------------------------------------\n";

    // Estoy contando cuántas actividades fueron completadas
    // para calcular el desempeño de esta rama.
    int realizadasPersonal = 0;

    for(int i=0; i<4; i++)
    {
        cout << " - ";
        if(cumplimientoPersonal[i])
        {
            cout << "[✔]";
            realizadasPersonal++;
        }
        else
        {
            cout << "[✘]";
        }
        cout << " - " << tareasPersonal[i] << endl;
    }

    // Calculo el porcentaje de cumplimiento de la nueva rama.
    // Autor: Nelsi Ignacio Cabanilla
    float porcentajePersonal = (realizadasPersonal / 4.0f) * 100;

    // Generación de reporte final para la rama de orden personal y estudio.
    cout << "\nTareas realizadas: " << realizadasPersonal << " de 4\n";
    cout << "Porcentaje de cumplimiento: "
         << fixed << setprecision(2)
         << porcentajePersonal << "%\n";

    if(porcentajePersonal >= 75)
    {
        cout << "\nBuen trabajo. Tu orden personal y estudio esta bastante bien.\n";
    }
    else
    {
        cout << "\nNecesitas mejorar un poco mas el orden personal y de estudio.\n";
    }

    system("pause");
    return 0;
}