#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

double f(const double a) {
    return ((a * a + 1) / (pow(sin(a), 2) + 1));
}

namespace UnitTests
{
    TEST_CLASS(UnitTests)
    {
    public:

        TEST_METHOD(TestFunction)
        {
            double a = 3.0;
            double expected = (3.0 * 3.0 + 1.0) / (pow(sin(3.0), 2) + 1.0);
            double result = f(a);
            Assert::AreEqual(expected, result, 0.0001);
        }
    };
}