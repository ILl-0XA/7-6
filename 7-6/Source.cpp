// C ++ ���������� �������
#include <string>
#include<iostream>
#include <conio.h>
using namespace std;
class isValid
{
public:

private:

};
// �������, ������� ���������� true ���� str
// ���������� �������������

bool isValid(string str, int n)

{
    setlocale(LC_ALL, "Russian");
    while (true)
    {
        int z;
        cout << "\n�������� ��������: 1-������, 0-�����" << endl;
        cin >> z;
        if (z == 0)
        {
            break;
        }
        else
        {
            cout << "������� ����� �������: " << endl;
            cin >> str;

            // ���� ������ ������ �������

            if (!((str[0] >= 'a' && str[0] <= 'z')

                || (str[0] >= 'A' && str[1] <= 'Z')

                || str[0] == '_'))

                return false;



            // ������� ������ ��� ��������� ��������

            for (int i = 1; i < str.length(); i++) {

                if (!((str[i] >= 'a' && str[i] <= 'z')

                    || (str[i] >= 'A' && str[i] <= 'Z')

                    || (str[i] >= '0' && str[i] <= '9')

                    || str[i] == '_'))
                    if (str.size() < 127)
                      cout << "�� �������� �� �������" << endl;
                    
                    

                    return false;
            }


            // ������ �������� ���������� ���������������

            return true;
        }
    }
}


// ��� ��������

int main()

{
    char check;
    string str;
    int n = str.length();



    if (isValid(str, n))

        cout << "�������� ��� �������" << endl;

    else

        cout << "�� �������� ��� ������� " << endl;

    cout << "������ ������ ������? - 1 || ������ ��������� ������ � �����? - 0" << endl;
    cin >> check;
    while (check == '1')main();
    return 0;
}
