#include "Player.h"

#include <stdexcept>

void Player::updateScore(int linesCleared, bool hardDrop) {
    if (linesCleared < 0 || linesCleared > 4) {
        throw std::invalid_argument("linesCleared must be between 0 and 4");
    }

    constexpr int linePoints[] = {0, 100, 300, 500, 800};
    scoreboard += linePoints[linesCleared] + (hardDrop ? 20 : 0);
    poppedLines += linesCleared;
}