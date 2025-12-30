#include "Vbreakout.h"
#include "verilated.h"

#include <iostream>
#include <thread>
#include <chrono>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>

// ---- Non-blocking keyboard input ----
int kbhit() {
    termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }
    return 0;
}

char getch() {
    return getchar();
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Vbreakout* top = new Vbreakout;

    top->reset = 1;
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    top->reset = 0;

    while (!Verilated::gotFinish()) {
        top->left  = 0;
        top->right = 0;

        if (kbhit()) {
            char c = getch();
            if (c == 'a') top->left  = 1;
            if (c == 'd') top->right = 1;
            if (c == 'q') break;
        }

        top->clk = 0; top->eval();
        top->clk = 1; top->eval();

        std::cout << "\033[2J\033[H";

        for (int y = 0; y < 20; y++) {
            for (int x = 0; x < 40; x++) {
                if (x == top->ball_x && y == top->ball_y)
                    std::cout << "O";
                else if (y == 19 &&
                         x >= top->paddle_x &&
                         x <  top->paddle_x + 6)
                    std::cout << "=";
                else
                    std::cout << " ";
            }
            std::cout << "\n";
        }

        std::cout << "\nControls: A = left, D = right, Q = quit\n";

        std::this_thread::sleep_for(std::chrono::milliseconds(80));
    }

    delete top;
    return 0;
}
