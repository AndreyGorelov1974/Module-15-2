/*Задача 2
Что нужно сделать
Вам даётся массив целых чисел и одно число — результат. 
Необходимо найти в массиве два числа, сумма которых будет давать результат, и вывести их на экран.
Гарантируется, что только одна пара чисел в массиве даёт в сумме результат.

Пример:

a = {2, 7, 11, 15}. Результат = 9

2 + 7 = 9, так что надо вывести числа 2 и 7

Советы и рекомендации
Как только найдена первая удовлетворяющая условиям пара, можно заканчивать поиск.*/

#include <iostream>
//размер массива
const int sizeArray = 10;
//первое число
const int firstNumber = 4;
//второе число
const int secondNumber = 3;
//первый индекс
const int firstIndex = 0;
//второй индекс
const int secondIndex = 5;
//
int main()
{
	int arr[sizeArray];
	//сумма
	int sum = firstNumber + secondNumber;
	//заполняем массив случайными числами
	srand(time(NULL));
	for (int i = 0; i < sizeArray; ++i) {
		arr[i] = rand() % 50 * 10;
	}
	//устанавливаем заданные два числа
	arr[firstIndex] = firstNumber;
	arr[secondIndex] = secondNumber;
	
	for (int i = 0; i < sizeArray; ++i) {
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;

	int number1 = 0;
	int number2 = 0;

	//два цикла для перебора всех возможных пар элементов
	for (int i = 0; i < sizeArray; ++i) {
		//если элемент массива меньше суммы пропускаем второй цикл
		if (arr[i] < sum) {
			for (int j = i+1; j < sizeArray; ++j) {
				//если сумма совпадает выходим из циклов
				if (arr[i] + arr[j] == sum) {
					number1 = arr[i];
					number2 = arr[j];
					break;
				}
			}
		}
	}
	std::cout << "First number - " << number1 << " and second number - " << number2 << std::endl;
}