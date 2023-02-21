#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#include <Windows.h>
#include "help_func.h"
#include "help_template.h"



using namespace std;

int main()
{
  
    //setlocale(LC_ALL, "rus");

    // ------------------------------------------------------------------------------------------------------------------------ //
    //  Задание 1: Напишите функцию, выводящую на экран прямоугольную рамку из символа.
    //  Функция принимает три параметра : размеры прямоугольника и символ.Значения по
    //  умолчанию : 5 на 5, символ* .Продемонстрируйте все варианты вызова функции.

    //show_rectangle();
    //show_rectangle(6);
    //show_rectangle(6,8);
    //show_rectangle(7,10,'$');


    // ------------------------------------------------------------------------------------------------------------------------ //
    //  Задание 2: Напишите перегруженные функции, которые определяют и возвращают
    //  минимальное значение из :
    //      − одномерного массива;
    //      − двумерного массива;
    //      − трех переменных дробного типа;
    //      − двух переменных целого типа.
    //  Продемонстрируйте работу программы с использованием пользовательского меню.
    //  Последний пункт меню - выход из программы

    //const int N = 5, ROW = 3;

    //float arrOne[N]{ 1.16, 1.9, 1.51, 1.19, 1.12 };
    //int arrTwo[N]{ 1, 5, 44, -1, 20 };

    //int arrThree[ROW][COL]
    //{ 
    //    { -366, 325, 435, 6458, 4547, 67 },
    //    { 45, 6, 345, 8, 34, 663 },
    //    { -289, 366, 356, 348, 634, 345 }
    //};    
    //
    //double arrFour[ROW][COL]
    //{ 
    //    { 366.1, 325.4, 435.5, 6458.7, 4547.8, 67.9 },
    //    { 45.9, 638.8, 345.87, 0.87, 34.78, 663.87 },
    //    { 289.7, 366.7, 356.9, 348.4, 634.456, 345.87 }
    //};

    //int num;

    //do
    //{
    //    cout << "\n\t Меню ";
    //    cout << "\n1. Минимальное значение arr[]";
    //    cout << "\n2. Минимальное значение arr[][]";
    //    cout << "\n3. Минимальное значение a, b ,c";
    //    cout << "\n4. Минимальное значение a, b";
    //    cout << "\n0. Выход из меню\n";

    //    cout << "\nВведите номер меню: ";
    //    cin >> num;

    //    switch (num)
    //    {
    //    case 1:
    //        system("CLS");
    //        cout << "\nМинимальное значение arr[] float: " << get_minimum<float>(arrOne, N);
    //        cout << "\nМинимальное значение arr[] int: " << get_minimum<int>(arrTwo, N);
    //        cout << endl << endl;
    //        break;
    //    case 2:
    //        system("CLS");
    //        cout << "\nМинимальное значение arr[][] int: " << get_minimum<int>(arrThree, ROW);
    //        cout << "\nМинимальное значение arr[][] double: " << get_minimum<double>(arrFour, ROW);
    //        cout << endl << endl;
    //        break;
    //    case 3:
    //        system("CLS");
    //        cout << "\nМинимальное значение a, b ,c  double: " << get_minimum<double>(4.8, -6.8, -8.8);
    //        cout << "\nМинимальное значение a, b ,c  int: " << get_minimum<int>(4.8, -6.8, -8.8);
    //        cout << endl << endl;
    //        break;
    //    case 4:
    //        system("CLS");
    //        cout << "\nМинимальное значение a, b  double: " << get_minimum<double>(4.8, 6.8);
    //        cout << "\nМинимальное значение a, b  int: " << get_minimum<int>(6, 4);
    //        cout << endl << endl;
    //        break;
    //    }
    //} while (num);
    

    // ------------------------------------------------------------------------------------------------------------------------ //
    //  Задание 3: Напишите перегруженные функции, которые определяют и возвращают, количество
    //  совершенных чисел в одномерном массиве и матрице.В коде функций использовать
    //  пользовательскую функцию, которая определяет, является ли число совершенным.

    //const int N = 5, ROW = 3;

    //int arr[N]{ 496, 10, 28, 8128, 9 };

    //int arrTwo[ROW][COP]
    //{ 
    //    { 6, 325, 435, 496, 4547, 67 },
    //    { 6, 0, 345, 8, 34, 663 },
    //    { -289, 366, 356, 348, 8128, 345 }
    //};  

    //cout << "\nКоличество совершенных чисел в arr[] = " << get_perfect_number_count(arr, N);
    //cout << "\nКоличество совершенных чисел в arr[][] = " << get_perfect_number_count(arrTwo, ROW);


    // ------------------------------------------------------------------------------------------------------------------------ //
    /*Задание 4: Напишите перегруженные функции, которые определяют и возвращают сумму цифр
    целого числа и сумма значений массива целого типа.*/
    
    //const int N = 5;
    //int num = 123;
    //int arr[N]{ 1, 2, 3, 0, 1 };
    //
    //cout << "\nCумма цифр целого числа = " << get_summa(num);
    //cout << "\nCумма цифр массива целого типа = " << get_summa(arr, N);


    // ------------------------------------------------------------------------------------------------------------------------ //
    /*Задание 5: Написать шаблон функции, которая разбрасывает элементы одномерного массива
    произвольным образом.*/                                                               //const int COD = 6;
    //int arr[COD]{ 6, 325, 435, 766, 8547, 55 };      //int t_arr[COD];      //int t_arr1[COD]{0,1,2,3,4,5};    //srand(time(0));    //cout << "\nМассив до разброса элементов\n";    //show_array(arr, COD);    //random_mixing(arr, t_arr, COD);    //cout << "\nМассив после первого разброса элементов\n";
    //show_array(arr, COD);
    //random_mixing(arr, t_arr, COD);
    //cout << "\nМассив после второго разброса элементов\n";
    //show_array(arr, COD);
    //random_mixing(arr, t_arr, COD);
    //cout << "\nМассив после третьего разброса элементов\n";
    //show_array(arr, COD);

    // ------------------------------------------------------------------------------------------------------------------------ //
    /*Задание 6: Напишите шаблон функции, которая сортирует каждую четную строку матрицы по
    возрастанию, каждую нечетную строку матрицы по убыванию значений.Метод сортировки
    выбрать по желанию.*/

    //const int ROW = 4;
    //int arr[ROW][COL]
    //{ 
    //    { 6, 325, 435, 496, 4547, 67 },
    //    { 6, 0, 345, 8, 34, 663 },
    //    { -289, 7060, 356, 348, 8128, 345 },
    //    { 89, 36, 3, 48, 28, 45 }
    //};  

    //show_array(arr, ROW);
    //sort_array(arr, ROW);
    //show_array(arr, ROW);
    

    _getch();
}