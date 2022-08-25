#include <iostream>
#include "Vehicles.h"
#include "AirVehicles.h"
#include "GroundVehicles.h"
#include "Camel.h"
#include "SpeedCamel.h"
#include "Centaur.h"
#include "AllTerrainBoots.h"
#include "MagicCarpet.h"
#include "Eagle.h"
#include "Broom.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    int TypeRace = 0;
    int lenght_distance = 0;
    int one=1;
    int CHoiceOfTransport = 0;
    cout << "Добро пожаловать в гоночный симулятор!" << endl;
    cout << "1. Гонка для наземного транспорта" << endl;
    cout << "2. Гонка для воздушного транспорта" << endl;
    cout << "3. Гонка для наземного и воздушного транспорта" << endl;
    cout << "Виберите тип гонки: ";
    cin >> TypeRace;
    cout << "Укажите длину дистанции (должна быть положительна): ";
    cin >> lenght_distance;
    cout << "Должно быть зарегистирировано хотя бы 2 ТС\n1. Зарегистирировать транспотр\nВыберите действие:";
    cin >> one;
    do {
        if (TypeRace == 1) { cout << "Гонка для наземного транспорта. Расстояние: " << lenght_distance << endl; }
        else if (TypeRace == 2) { cout << "Гонка для воздушного транспорта. Расстояние: " << lenght_distance << endl; }
        else if (TypeRace == 3) { cout << "Гонка для наземного и воздушного транспорта. Расстояние: " << lenght_distance << endl; }
        cout << "1. Ботинки-вездеходы\n";
        cout << "2. Метла\n";
        cout << "3. Верблюд \n";
        cout << "4. Кентавр \n";
        cout << "5. Орёл\n";
        cout << "6. Верблюд-быстроход\n";
        cout << "7. Ковер-самолет\n";
        cout << "0. Закончить регистрацию\nВыберите транспорт или 0 для окончания процесса регистрации:";
        cin >> CHoiceOfTransport;
        //cout<<
    } while (CHoiceOfTransport != 0);
    return 0;
}