#pragma once

#include "Board.h"
#include "Shape.h"

class Player {
public:
    Board board;
    int scoreboard = 0;
    int poppedLines = 0;
    Shape currentShape;
    Shape nextShape;

    void updateScore(int linesCleared, bool hardDrop = false);
};