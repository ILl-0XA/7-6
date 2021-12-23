// C ++ реализация подхода
#include <string>
#include<iostream>
#include <conio.h>
using namespace std;
class isValid
{
public:

private:

};
// Функция, которая возвращает true если str
// допустимый идентификатор

bool isValid(string str, int n)

{
    setlocale(LC_ALL, "Russian");
    while (true)
    {
        int z;
        cout << "\nВыберите действие: 1-Начать, 0-Выход" << endl;
        cin >> z;
        if (z == 0)
        {
            break;
        }
        else
        {
            cout << "Введите любые символы: " << endl;
            cin >> str;

            // Если первый символ неверен

            if (!((str[0] >= 'a' && str[0] <= 'z')

                || (str[0] >= 'A' && str[1] <= 'Z')

                || str[0] == '_'))

                return false;



            // Обходим строку для остальных символов

            for (int i = 1; i < str.length(); i++) {

                if (!((str[i] >= 'a' && str[i] <= 'z')

                    || (str[i] >= 'A' && str[i] <= 'Z')

                    || (str[i] >= '0' && str[i] <= '9')

                    || str[i] == '_'))
                    if (str.size() < 127)
                      cout << "Не подходит по условию" << endl;
                    
                    

                    return false;
            }


            // Строка является допустимым идентификатором

            return true;
        }
    }
}


// Код драйвера

int main()

{
    char check;
    string str;
    int n = str.length();



    if (isValid(str, n))

        cout << "Подходит под условие" << endl;

    else

        cout << "Не подходит под условие " << endl;

    cout << "Хотите начать занова? - 1 || Хотите завершить работу с кодом? - 0" << endl;
    cin >> check;
    while (check == '1')main();
    return 0;
}
