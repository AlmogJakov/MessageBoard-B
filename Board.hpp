#pragma once
#include <vector>
#include <iostream>
#include "Direction.hpp"

const uint uint_max_lentgh = 4294967295;

namespace ariel {
    class Board {
        std::vector<std::string> my_board{};
        bool empty_board = true;
        uint lowest_filled_col = uint_max_lentgh;
        uint largest_filled_col = 0;
        uint lowest_filled_row = uint_max_lentgh;
        uint largest_filled_row = 0;
        void resize_board(uint row, uint column, uint max_row, uint max_column);
    public:
        Board() { }
        ~Board() {
            // my_board.clear();
            // my_board.shrink_to_fit();
        }
        void post(uint row, uint column, Direction direction, std::string message);
        std::string read(uint row, uint column, Direction direction, uint length);
        void show();
    };
}