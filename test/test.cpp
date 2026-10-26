#include "pch.h"
#include "CppUnitTest.h"
#include "../ЛР 6.3 рек/ЛР 6.3 рек.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test63rec
{
	TEST_CLASS(test63rec)
	{
	public:

		TEST_METHOD(TestSort_Int)
		{
			int a[10] = { 5, -2, 9, 0, 7, 3, -8, 3, 6, 1 };
			int expected[10] = { -8, -2, 0, 1, 3, 3, 5, 6, 7, 9 };
			Sort(a, 10, 0);
			for (int i = 0; i < 10; i++)
				Assert::AreEqual(expected[i], a[i]);
		}

		TEST_METHOD(TestSort_TemplateInt)
		{
			int a[10] = { 5, -2, 9, 0, 7, 3, -8, 3, 6, 1 };
			int expected[10] = { -8, -2, 0, 1, 3, 3, 5, 6, 7, 9 };
			Sort<int>(a, 10, 0);
			for (int i = 0; i < 10; i++)
				Assert::AreEqual(expected[i], a[i]);
		}

		TEST_METHOD(TestSort_TemplateDouble)
		{
			double b[4] = { 4.4, 1.5, 9.9, 0.0 };
			double expected[4] = { 0.0, 1.5, 4.4, 9.9 };
			Sort<double>(b, 4, 0);
			for (int i = 0; i < 4; i++)
				Assert::AreEqual(expected[i], b[i], 1e-6);
		}

		TEST_METHOD(TestSort_TemplateString)
		{
			string c[4] = { "red", "green", "blue", "white" };
			string expected[4] = { "blue", "green", "red", "white" };
			Sort<string>(c, 4, 0);
			for (int i = 0; i < 4; i++)
				Assert::IsTrue(expected[i] == c[i]);
		}

		TEST_METHOD(TestBubblePass)
		{
			int a[4] = { 3, 1, 2, 0 };
			int expected[4] = { 1, 2, 0, 3 };
			BubblePass(a, 3, 0);
			for (int i = 0; i < 4; i++)
				Assert::AreEqual(expected[i], a[i]);
		}
	};
}