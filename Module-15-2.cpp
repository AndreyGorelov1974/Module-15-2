﻿/*Задача 2
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
const int firstNumber = 2;
//второе число
const int secondNumber = 7;
//первый индекс
const int firstIndex = 4;
//второй индекс
const int secondIndex = 8;
//
int main()
{
	int arr[sizeArray];
	//сумма
	int sum = firstNumber + secondNumber;
	//текущая сумма
	int currentSum = 0;
	//индексы элементов дающих максимальную сумму
	int iMax = 0;
	int jMax = 0;
	//два цикла для перебора всех возможных пар элементов
	for (int i = 0; i < sizeArray; ++i) {
		for (int j = i; j < sizeArray; ++j) {
			//подсчёт текущей суммы
			for (int k = i; k <= j; ++k) {
				currentSum += arr[k];
			}
			//если текущая сумма больше максимальной переписываем индексы  и максимальную сумму
			if (currentSum > maxSum) {
				iMax = i;
				jMax = j;
				maxSum = currentSum;
			}
			//сброс текущей суммы перед новой итерацией
			currentSum = 0;
		}
	}
	std::cout << "the array elements located between the index - " << iMax << " and the index - " << jMax << " give the maximum sum" << std::endl;
}