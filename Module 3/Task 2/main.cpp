#include <iostream>
#include "functions.h"

// Написать игру, в которую играет 2 два игрока (функции). Каждая из них может выдавать произвольное число от -5 до 5, чередуя отрицательные и положительные. 
// У каждого игрока есть свой счетчик. На каждой итерации игры, к счетчику с начальным значением (0) добавляется значение игроков поочередно. Выигрывает тот игрок (функция), 
// после которого счетчик стал больше 50. В случае, если за 100 шагов победитель не выявился - считается ничья и игра заканчивается

int main()
{
    //Сделать, чтобы каждую игру начинал разный игрок
    int player1 = Player(false);
    int player2 = Player(false);
    int game_counter = 0;

    std::cout << "Player1 value: " << player1 << std::endl;
    std::cout << "Player2 value: " << player1 << std::endl;
    std::cout << "Game counter: " << game_counter << "\n" << std::endl;

    for(int game_step = 0; game_step < 100; ++game_step) 
    {
        player1 = Player();
        game_counter += player1;
        std::cout << "Player1 value: " << player1 << "; Game counter: " << game_counter << std::endl;
        if (game_counter == 50) {
            std::cout << "Player 1 wins" << std::endl;
            break;
        }

        player2 = Player(); 
        game_counter += player2;
        std::cout << "Player2 value: " << player2 << "; Game counter: " << game_counter << std::endl;
        if (game_counter == 50) {
            std::cout << "Player 2 wins" << std::endl;
            break;
        }
        std::cout << "\n";
    }

    if (game_counter != 50)
    {
        std::cout << "Draw";
    }

}