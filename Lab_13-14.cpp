// Створити лінійний двозв’язний список з дійсних чисел. 
// Вставити в список число 13.5 після першого елемента зі значенням більшим 2.
//

#include <iostream>
#include <list>
#include <iomanip> 
#include <windows.h> 
using namespace std;
int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    list<double> numberList = { 10.5, 4.3, 7.22, 1.6, 8.1, 4.9, 6.2 };
    cout << "Початковий список: ";
    list<double>::iterator it;
    for (it = numberList.begin(); it != numberList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    for (it = numberList.begin(); it != numberList.end(); ++it) {
        if (*it > 2) {  
            ++it; 
            numberList.insert(it, 13.5);  
            break;  
        }
        ++it;  
    }

    cout << "Змінений список:   ";
    for (it = numberList.begin(); it != numberList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}


