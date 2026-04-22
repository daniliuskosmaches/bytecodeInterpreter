#include <iostream>
#include <vector>
#include <stack>

enum CODE {
    iload,
    istore,
    iadd,
    isub,
    imul,
    idiv,
    iconst,
    print,
    halt


};

int main() {
    std::stack<int> operandStack;
    bool running = true;

    std ::vector<int> code = {
        iconst, 10,
        istore, 0,
        iconst, 20,
        istore, 1,
        iload, 0,
        iload, 1,
        iadd ,
        print,
        halt
    };
    std::vector<int> localvars(10, 0);
    int pc = 0;
    while (running) {
        int opcode = code[pc++];
        switch (opcode) {


        }
    }
}
