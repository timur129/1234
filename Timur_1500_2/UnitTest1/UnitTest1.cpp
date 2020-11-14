#include "pch.h"
#include "CppUnitTest.h"
#include "../Timur_1500_2/OrderModule.h"
#include "../Timur_1500_2/OrderModule.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(BinarySearch_Test)
		{
			int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
			Assert::IsTrue(BinarySearch(arr, 10, 4) == 3);
		}

		TEST_METHOD(QuickSort_Test)
		{
			bool flag = true;
			int arr[10] = { 10, 9, 6, 2, 1, 3, 4, 8, 5, 7 };
			QuickSort(arr, 0, 9);
			for (int i = 0; i < 9; i++)
				if (arr[i] > arr[i + 1])
					flag = false;
			Assert::IsTrue(flag);
		}

		TEST_METHOD(BubbleSort_Test)
		{
			bool flag = true;
			int arr[10] = { 10, 9, 6, 2, 1, 3, 4, 8, 5, 7 };
			BubbleSort(arr, 10);
			for (int i = 0; i < 9; i++)
				if (arr[i] > arr[i + 1])
					flag = false;
			Assert::IsTrue(flag);
		}

		TEST_METHOD(BogoSort_Test)
		{
			bool flag = true;
			int arr[10] = { 10, 9, 6, 2, 1, 3, 4, 8, 5, 7 };
			BogoSort(arr, 10);
			for (int i = 0; i < 9; i++)
				if (arr[i] > arr[i + 1])
					flag = false;
			Assert::IsTrue(flag);
		}

		TEST_METHOD(CountingSort_Test)
		{
			bool flag = true;
			char arr[10] = { "gcdhabef" };
			char ans[10] = { "abcdefgh" };
			CountingSort(arr, 10);
			for (int i = 0; i < 8; i++)
				if (arr[i] != ans[i])
					flag = false;
			Assert::IsTrue(flag);
		}
	};
}
