#include "functions.h"
#include <random>
#include <chrono>
#include <iostream>

const auto seed_time = std::chrono::steady_clock::now().time_since_epoch().count();
std::default_random_engine generator(seed_time);
std::uniform_int_distribution<int> distr(-5, 5);

int PlayerCounter(bool is_started_game)
{
    int player_counter = 0;
    if (is_started_game)
    {
        player_counter = distr(generator);
    }
    return player_counter;
}

void Game_Initializer(int player1, int player2, int draw_count, int win_number)  
{
    int game_counter = 0; // счётчик игрового счёта

    std::cout << "Player1 initial value: " << player1 << std::endl;
    std::cout << "Player2 initial value: " << player1 << std::endl;
    std::cout << "Initial Game counter: " << game_counter << "\n" << std::endl;

    int game_steps = 0; // счётчик шагов
    //for(int game_step = 0; game_step < draw_number; ++game_step) 
    while(true)
    {
        player1 = PlayerCounter();
        game_counter += player1;
        std::cout << "Player1 value: " << player1 << "; Game counter: " << game_counter << std::endl;
        if (game_counter >= win_number) {
            std::cout << "\n" << "Player 1 wins in " << game_steps << " steps" << std::endl;
            break;
        }

        player2 = PlayerCounter(); 
        game_counter += player2;
        std::cout << "Player2 value: " << player2 << "; Game counter: " << game_counter << std::endl;
        if (game_counter >= win_number) {
            std::cout << "\n" << "Player 2 wins in " << game_steps << " steps" << std::endl;
            break;
        }

        ++game_steps;
        std::cout << "\n";
        
        if (game_steps == draw_count)
        {
            std::cout << "Draw. The maximum game iterations number reached " << draw_count << " steps";
            break;
        }
    }
}