#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_5.2/lab_5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1LAB52
{
	TEST_CLASS(UnitTest1LAB52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int test;
			test = A(0, 1, 1);
			Assert::AreEqual(test, 0);
		}
	};
}
