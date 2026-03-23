#include <random>
#include <chrono>
#include <cmath>
#include <cstdint>

class RandomGenerator
{
private:
    // Using high-quality random device + mt19937 (64-bit version)
    std::mt19937_64 rng;

    // For integer distributions
    std::uniform_int_distribution<int64_t> int_dist;

    // For floating point
    std::uniform_real_distribution<double> real_dist;

public:
    // ───────────────────────────────────────────────
    //  Constructors
    // ───────────────────────────────────────────────
    RandomGenerator()
    {
        // Seed with time + some thread/entropy mix
        auto seed = std::chrono::steady_clock::now().time_since_epoch().count();
        rng.seed(static_cast<uint64_t>(seed));
    }

    // Allow user to provide own seed (useful for reproducible tests)
    explicit RandomGenerator(uint64_t seed) : rng(seed) {}

    // ───────────────────────────────────────────────
    //  Integer random numbers
    // ───────────────────────────────────────────────

    // Random int in full int64_t range
    int64_t nextInt()
    {
        return rng();
    }

    // Random int in [min, max] inclusive
    int64_t nextInt(int64_t min, int64_t max)
    {
        if (min > max)
            std::swap(min, max);
        std::uniform_int_distribution<int64_t> dist(min, max);
        return dist(rng);
    }

    // Convenience: 32-bit version
    int32_t nextInt32(int32_t min = INT32_MIN, int32_t max = INT32_MAX)
    {
        std::uniform_int_distribution<int32_t> dist(min, max);
        return dist(rng);
    }

    // ───────────────────────────────────────────────
    //  Floating point random numbers
    // ───────────────────────────────────────────────

    // Random double in [0.0, 1.0)
    double nextDouble()
    {
        return std::uniform_real_distribution<double>(0.0, 1.0)(rng);
    }

    // Random double in [min, max]
    double nextDouble(double min, double max)
    {
        if (min > max)
            std::swap(min, max);
        return std::uniform_real_distribution<double>(min, max)(rng);
    }

    // Random float version
    float nextFloat(float min = 0.0f, float max = 1.0f)
    {
        if (min > max)
            std::swap(min, max);
        return std::uniform_real_distribution<float>(min, max)(rng);
    }

    // ───────────────────────────────────────────────
    //  Angles (very common in robotics / games)
    // ───────────────────────────────────────────────

    // Random angle in radians:  [-π, π]
    double nextAngleRad()
    {
        return nextDouble(-M_PI, M_PI);
    }

    // Random angle in radians in custom range
    double nextAngleRad(double min_rad, double max_rad)
    {
        return nextDouble(min_rad, max_rad);
    }

    // Random angle in degrees:  [-180, 180]
    double nextAngleDeg()
    {
        return nextDouble(-180.0, 180.0);
    }

    // Random angle in degrees [min_deg, max_deg]
    double nextAngleDeg(double min_deg, double max_deg)
    {
        return nextDouble(min_deg, max_deg);
    }

    // ───────────────────────────────────────────────
    //  Utility / common helpers
    // ───────────────────────────────────────────────

    // Coin flip (true/false)
    bool chance(double probability = 0.5)
    {
        return nextDouble() < probability;
    }

    // Random sign: -1 or +1
    int sign()
    {
        return nextDouble() < 0.5 ? -1 : 1;
    }

    // Random choice between two values
    template <typename T>
    T choose(const T &a, const T &b)
    {
        return nextDouble() < 0.5 ? a : b;
    }
};

/*
int main() {
    RandomGenerator rnd;

    std::cout << "Random int:          " << rnd.nextInt() << "\n";
    std::cout << "Random int [10,50]:  " << rnd.nextInt(10, 50) << "\n";
    std::cout << "Random float [0,10]: " << rnd.nextFloat(0.0f, 10.0f) << "\n";
    std::cout << "Random double:       " << rnd.nextDouble(-5.0, 5.0) << "\n";
    std::cout << "Random heading rad:  " << rnd.nextAngleRad() << "\n";
    std::cout << "Random heading deg:  " << rnd.nextAngleDeg() << "\n";
    std::cout << "Coin flip:           " << (rnd.chance(0.3) ? "YES" : "NO") << "\n";

    return 0;
}
*/