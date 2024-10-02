#include <iostream>
using namespace std;

int main() {
    int startYear, endYear;
    setlocale(0, ".1251");
    while (true) {
        cout << "Введiть початковий рiк: ";
        cin >> startYear;
        cout << "Введiть кiнцевий рiк: ";
        cin >> endYear;

        if (startYear > endYear) {
            cout << "Помилка: початковий рiк не може бути бiльшим за кiнцевий. Спробуйте ще раз." << endl;
        }
        else if (startYear < 0 || endYear < 0) {
            cout << "Помилка: рiк не може бути вiд'ємним. Спробуйте ще раз." << endl;
        }
        else {
            break;
    }

    cout << "Початковий рiк: " << startYear << endl;
    cout << "Кiнцевий рiк: " << endYear << endl;


    int yearsPassed = endYear - startYear;
    cout << "Кiлькiсть рокiв мiж " << startYear << " та " << endYear << ": " << yearsPassed << " рокiв" << endl;

    if (yearsPassed > 100) {
        cout << "Кiлькiсть рокiв перевищує 100. Вихiд iз циклу." << endl;
        return 0; 
    }


    int tenthYearCount = 0;
    for (int year = startYear; year <= endYear; year++) {
        if ((year - startYear) % 10 == 0) {
            tenthYearCount++;
            cout << "Кожний десятий рiк: " << year << endl;
        }
    }

    cout << "Загальна кiлькiсть кожних десятих рокiв: " << tenthYearCount << endl;

    return 0;
}
