#pragma once
#ifndef TIMMER_HPP
#define TIMMER_HPP

#include <iostream>
#include <chrono>

typedef std::chrono::high_resolution_clock Clock;

namespace cptl
{
    template <typename T, typename U> void speedTest(T(*func)(U), U x)
    {
        auto start_time = Clock::now();
        T ans = func(x);
        auto end_time = Clock::now();
        double runTime = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count() / 1000000;
        std::cout << "returns " << ans << " after " << runTime << " milliseconds" << std::endl;
    }

    template <typename T, typename U, typename O> void speedTest(T(*func)(U, O), U x, O y)
    {
        auto start_time = Clock::now();
        T ans = func(x, y);
        auto end_time = Clock::now();
        double runTime = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count() / 1000000;
        std::cout << "returns " << ans << " after " << runTime << " milliseconds" << std::endl;
    }

    template <typename T, typename U, typename O, typename S> void speedTest(T(*func)(U, O, S), U x, O y, S z)
    {
        auto start_time = Clock::now();
        T ans = func(x, y, z);
        auto end_time = Clock::now();
        double runTime = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count() / 1000000;
        std::cout << "returns " << ans << " after " << runTime << " milliseconds" << std::endl;
    }

    template <typename T, typename U, typename O, typename S, typename F> void speedTest(T(*func)(U, O, S, F), U x, O y, S z, F w)
    {
        auto start_time = Clock::now();
        T ans = func(x, y, z, w);
        auto end_time = Clock::now();
        double runTime = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count() / 1000000;
        std::cout << "returns " << ans << " after " << runTime << " milliseconds" << std::endl;
    }

    template <typename T, typename U, typename O, typename S, typename F, typename H> void speedTest(T(*func)(U, O, S, F, H), U x, O y, S z, F w, H r)
    {
        auto start_time = Clock::now();
        T ans = func(x, y, z, w, r);
        auto end_time = Clock::now();
        double runTime = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time).count() / 1000000;
        std::cout << "returns " << ans << " after " << runTime << " milliseconds" << std::endl;
    }
}

#endif // TIMMER_HPP