#include <iostream>
#include <vector>
#include <stack>



class Loader {
    enum INTOPCODE {

    };
    enum FLOATOPCODE {

    };
    enum STRINGOPCODE {


    };
    enum CONTROLFLOW {
        jmp,
        jz,
        jnz,
        call,
        ret
    };
    enum IOOPCODE {

    };
    enum HALTOPCODE {
        halt
    };
    enum OP {
        INTOPCODE,
        FLOATOPCODE,
        STRINGOPCODE,
        CONTROLFLOW,
        IOOPCODE,
        HALTOPCODE
    };
    enum INSTRUCTION {
        opcode,
        operand1,
        operand2
    };

    enum DATA {
        intData,
        floatData,
        stringData
    };
    enum MEMORY {
        codeMemory,
        dataMemory,
        stackMemory
    };
    enum REGISTER {
        pc,
        sp,
        bp
    };
enum TYPE {
    INT,
    FLOAT,
    STRING
};
    enum ERROR {
        INVALID_OPCODE,
        STACK_OVERFLOW,
        STACK_UNDERFLOW,
        DIVISION_BY_ZERO,
        INVALID_MEMORY_ACCESS
    };

    enum DEBUG {
        PRINT_OPCODE,
        PRINT_STACK,
        PRINT_MEMORY
    };


    enum OPTIMIZATION {
        CONSTANT_FOLDING,
        DEAD_CODE_ELIMINATION,
        LOOP_UNROLLING
    };

    enum EXTENSION {
        EXTENSION1,
        EXTENSION2
    };
    enum SECURITY {
        BUFFER_OVERFLOW,
        CODE_INJECTION
    };


    enum PERFORMANCE {
        EXECUTION_TIME,
        MEMORY_USAGE
    };
    enum TESTING {
        UNIT_TEST,
        INTEGRATION_TEST
    };
    enum HEAP {
        OBJECT_ALLOCATION,
        GARBAGE_COLLECTION




    };




public:
    std::vector<int> code;






};



enum CODE {
    iload,
    istore,
    iadd,
    isub,
    imul,
    idiv,
    iconst,
    print,
    halt,


};

class STACK {
public:
    std::stack <int> operandStack;
    std::stack <int> callstack;

};

int main() {
    STACK stack;


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
            case iconst: {
                int value = code[pc++];
                stack.operandStack.push(value);
                break;
            }
            case istore: {
                int value = code[pc++];
                localvars [value] =stack.operandStack.top();
                stack.operandStack.pop();
                break;


                }
            case iload :{
                int value = code[pc++];
                stack.operandStack.push(localvars [value]);
                break;




            }
            case iadd : {
                int a = stack.operandStack.top();
                stack.operandStack.pop();
                int b = stack.operandStack.top();
                stack.operandStack.pop();
                stack.operandStack.push(a + b);
                break;



            }
            case print: {
                std::cout << stack.operandStack.top() << std::endl;
                stack.operandStack.pop();
                break;
            }
                case halt: {
                    running = false;
                    break;
                }






                





        }
    }
}
