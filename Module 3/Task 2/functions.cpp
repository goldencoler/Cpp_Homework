#include "functions.h"
#include <random>
#include <chrono>

const auto seed_time = std::chrono::steady_clock::now().time_since_epoch().count();
std::default_random_engine generator(seed_time);
std::uniform_int_distribution<int> distr(-5, 5);

int Player(bool is_started_game)
{
    int player_counter = 0;
    if (is_started_game)
    {
        player_counter = distr(generator);
    }
    return player_counter;
}