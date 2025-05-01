#include "functions.h"
#include <random>
#include <chrono>
#include <iostream>

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

void Game(int player1, int player2, int draw_number, int win_number)  
{
    int game_counter = 0;

    std::cout << "Player1 initial value: " << player1 << std::endl;
    std::cout << "Player2 initial value: " << player1 << std::endl;
    std::cout << "Initial Game counter: " << game_counter << "\n" << std::endl;

    for(int game_step = 0; game_step < win_number; ++game_step) 
    {
        player1 = Player();
        game_counter += player1;
        std::cout << "Player1 value: " << player1 << "; Game counter: " << game_counter << std::endl;
        if (game_counter == win_number) {
            std::cout << "Player 1 wins in " << game_step << " steps" << std::endl;
            break;
        }

        player2 = Player(); 
        game_counter += player2;
        std::cout << "Player2 value: " << player2 << "; Game counter: " << game_counter << std::endl;
        if (game_counter == win_number) {
            std::cout << "Player 2 wins in " << game_step << " steps" << std::endl;
            break;
        }
        std::cout << "\n";
    }

    if (game_counter != win_number)
    {
        std::cout << "Draw";
    }
}