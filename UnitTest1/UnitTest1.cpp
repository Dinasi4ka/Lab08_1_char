#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab08_1_char/Lab08_1_char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char string[] = "'abc','+','-'";
			const char sc[] = "+-=";
			int count = 2;

			int t = Count(string, sc);
			Assert::AreEqual(count, t);

		}
	};
}
