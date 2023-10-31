#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.1/pr6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int size = 5;
			int r[size] = { 13, 3, 4, -2, 2 };
			int count = 0;
			int result = Sum(r, size, count);
			Assert::AreEqual(result, 3);

		}
	};
}
