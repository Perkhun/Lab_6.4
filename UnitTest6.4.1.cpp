#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.4.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest641
{
	TEST_CLASS(UnitTest641)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int a[4]{ -1, 2, 5, 8 };
			c = Sum(a, 4);
			Assert::AreEqual(c, 0);

		}
	};
}
