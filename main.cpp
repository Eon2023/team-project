// Командный проект. Группа ПИ-51.
// Команда: Карелашвили (в. 56), (в. 63).
#include <iostream>
// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===
#include "techlid.h"
#include "dev.h"
// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===
using namespace std;

int main() {
    int choice;
    do {
        cout << "\n=== Командный проект: сборник расчётов ===\n";
        // === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===
        // === КОНЕЦ БЛОКА МЕНЮ ===
        cout << "1. Модуль числа\n";
        cout << "2. Знак числа\n";
        cout << "3. Ограничение в диапазоне\n";
        cout << "4. Километры в мили\n";
        cout << "5. Мили в километры\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice) {
        // === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
        // === КОНЕЦ БЛОКА ОБРАБОТКИ ===
        case 1: {
            double x;
            cout << "Введите x: ";
            cin >> x;
            cout << "|x| = " << absValue(x) << "\n";
            break;
        }
        case 2: {
            double x;
            cout << "Введите x: ";
            cin >> x;
            cout << "sign(x) = " << sign(x) << "\n";
            break;
        }
        case 3: {
            double x, lo, hi;
            cout << "Введите x, lo, hi: ";
            cin >> x >> lo >> hi;
            if (lo > hi) {
                cout << "Ошибка: lo не должно быть больше hi\n";
            break;
            }
            cout << "clamp(x) = " << clamp(x, lo, hi) << "\n";
            break;
        }
        case 4: {
            double km;
            cout << "Введите километры: ";
            cin >> km;
            cout << km << " км = " << kmToMiles(km) << " миль\n";
            break;
        }
        case 5: {
            double mi;
            cout << "Введите мили: ";
            cin >> mi;
            cout << mi << " миль = " << milesToKm(mi) << " км\n";
            break;
        }
        case 0:
            cout << "Работа завершена.\n";
            break;
        default:
            cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);
    return 0;
}