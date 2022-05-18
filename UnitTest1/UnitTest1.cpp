#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\PR 3.3A\PR 3.3A\Rational.cpp"
#include "C:\Users\vladt\source\repos\PR 3.3A\PR 3.3A\PUBrat.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			PUBrat p{ 1,2 };
			p--;
			Assert ::AreEqual(p.geta(),0);
		}
	};
}
