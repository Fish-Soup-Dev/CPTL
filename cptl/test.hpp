#pragma once
#ifndef TEST_HPP
#define TEST_HPP

namespace cptl
{
    template <typename T, typename U> void test(T(*func)(U), U x, T expectedValue)
    {
        T ans = func(x);
        if (ans != expectedValue)
            std::cout << "[FAILED] function returned " << ans << " not " << expectedValue << std::endl;
        else
            std::cout << "[PASSED] function returned " <<  expectedValue << std::endl;
    }
}

#endif // TEST_HPP