#include "pch.h"
#include "CppUnitTest.h"
#include "../laba5.4/laba5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int i = 3;
			P0(i);
		}
	};
}
