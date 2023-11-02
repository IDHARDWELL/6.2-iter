#include "pch.h"
#include "CppUnitTest.h"
#include "../FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int a[n] = { -5, -2, 0, 3, 4 };
			int sum = Sum(a, n, n);
			Assert::AreEqual(sum, 2);
		}
	};
}
