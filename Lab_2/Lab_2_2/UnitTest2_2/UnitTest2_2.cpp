#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_2_2/Lab_2_2.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest22
{
	TEST_CLASS(UnitTest22)
	{
	public:
		
		TEST_METHOD(IsValidTrue)
		{
			std::string number = "100100100", sum = "18";
			bool actual = IsValid(number, sum);
			Assert::AreEqual(true, actual);

			number = "123456789", sum = "64";
			actual = IsValid(number, sum);
			Assert::AreEqual(true, actual);

			number = "201511942", sum = "00";
			actual = IsValid(number, sum);
			Assert::AreEqual(true, actual);

			number = "201511941", sum = "00";
			actual = IsValid(number, sum);
			Assert::AreEqual(true, actual);
		}

		TEST_METHOD(NumberAdapterCorrect)
		{
			std::string number = "100-100-100";
			std::string expected = "100100100";
			std::string actual = NumberAdapter(number);
			Assert::AreEqual(expected, actual);

			number = "123-456-789";
			expected = "123456789";
			actual = NumberAdapter(number);
			Assert::AreEqual(expected, actual);

			number = "201-511-942";
			expected = "201511942";
			actual = NumberAdapter(number);
			Assert::AreEqual(expected, actual);

			number = "201-511-941";
			expected = "201511941";
			actual = NumberAdapter(number);
			Assert::AreEqual(expected, actual);
		}
	};
}
