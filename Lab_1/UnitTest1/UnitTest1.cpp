#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1/Lab_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(STest)
		{
			//Первый тест
			float x1[5] = { 3, 5, 12, 9, 5 }, y1[5] = { 4, 11, 8, 5, 6 };
			float expected = 30;
			float actual = S(x1, y1);
			Assert::AreEqual(expected, actual);
			
			//Второй тест
			float x2[5] = {-4, -2, 2, 5, 0}, y2[5] = {1, 4, 5, 2, -3};
			expected = 40;
			actual = S(x2, y2);
			Assert::AreEqual(expected, actual);

			//Третий тест
			float x3[5] = {-2, 1, 3, 0, -3}, y3[5] = {3, 3, -1, -3, -1};
			expected = 24;
			actual = S(x3, y3);
			Assert::AreEqual(expected, actual);
		}
	};
}
