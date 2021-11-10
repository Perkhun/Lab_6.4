#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.4.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest642
{
	TEST_CLASS(UnitTest642)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[4]{ -1, 2, 5, 8 };
			c = Sum(a, 4, 0);
			Assert::AreEqual(c, 14, 0);


		}
	};
}
