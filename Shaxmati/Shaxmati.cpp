#include <iostream>

using namespace std;

void a1()
{
    setlocale(LC_ALL, "ru");
    int a, b, n, c = 0;
    double sum = 0;
    cout << "Введите число: ";
    cin >> a;
    b = a;
    while (a != 0)
    {
        if (a % 10 == 0)
            c++;
        a /= 10;
    }
    for (n = 0; 0 < b; n++)
    {
        sum += b % 10;
        b /= 10;
    }
    cout << "\nКол-во нулей: " << c << "\nКол-во цифр = " << n << " \nСумма = " << sum << "\nAverage = " << sum / n << "\n";


}

void a2()
{
    setlocale(LC_ALL, "ru");
    int a, b, c;
    cout << "Введите высоту шахматной доски: ";
    cin >> a;
    cout << "Введите ширину шахматной доски: ";
    cin >> c;
    cout << "Введите величину ячейки шахматной доски: ";
    cin >> b;
    for (int i = 0; i < a; i++)
    {
        for (int jj = 0; jj < b; jj++)
        {
            for (int j = 0; j < c; j++)
            {
                for (int ii = 0; ii < b; ii++)
                {
                    if ((i + j) % 2)
                    {
                        cout << '-';
                    }
                    else cout << '*';
                }
            }
            cout << '\n';
        }
    }
}

void a3()
{                
    setlocale(LC_ALL, "ru");
    string a[10] = { "A","B","C","D","E","F","G","H","I","J" };

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout <<a[i] << i << " ";
        }
        cout << endl;
    }

}

void main()
{
    setlocale(LC_ALL, "ru");
    int a = 1;
    cout << "Чтобы закончить напишите 0\n\n";
    cout << "Hometask 07.02, не сделал 3 задачу, но сделаю позже и покажу на занятие, она большая поэтому пока пропущу её.";
    while (a != 0)
    {
        cout << "1 - 3 >>> "; cin >> a;
        switch (a)
        {
        case 1:
            a1();
            break;
        case 2:
            a2();
            break;
        case 3:
            a3();
            break;
        default:
            cout << "Вы ввели неправильный вариант, повторите попытку\n";
            break;
        }
        cout << endl << endl;
    }
}