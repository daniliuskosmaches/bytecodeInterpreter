#include <iostream>
#include <vector>
#include <stack>
#include  <string>
using namespace std;




class LOADER {




public:
    enum INTOPCODE {
        iload,
        istore,
        iconst,
        iadd,
        isub,
        imultipl,
        idiv,
        iprint,
        ihalt,



    };
    enum LONGOPCOE {
        lload,
        lstore,
        lconst,
        ladd,
        lsub,
        lmultipl,
        ldiv,
        lprint,
        lhalt,


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
    int pc = 0;
    std::vector<int> intcode;






};
class HEAP {
    vector <int> heapMemory;


};








class STACK {
public:
    std::stack <int> operandStack;
    std::stack <int> callstack;

};

int main() {
    STACK stack;
    LOADER loader;





    std::vector<int> localvars(10, 0);

    while (loader.pc < loader.intcode.size()) {
        int opcode = loader.intcode[loader.pc++];
        //int
        switch (opcode) {
            case LOADER::iload: {
                int index = loader.intcode[loader.pc++];
                stack.operandStack.push(localvars[index]);
            }
            case LOADER::istore: {
                int index = loader.intcode[loader.pc++];
                localvars[index] = stack.operandStack.top();
                stack.operandStack.pop();
            }
            case LOADER :: iconst : {
                int value = loader.intcode[loader.pc++];
                stack.operandStack.push(value);
            }
            case LOADER:: iadd : {
                int a = stack.operandStack.top();
                int b = stack.operandStack.top();
                stack.operandStack.pop();
                stack.operandStack.pop();
                stack.operandStack.push(a + b);


            }
            case LOADER:: isub: {
                int a = stack.operandStack.top();
                int b = stack.operandStack.top();
                stack.operandStack.pop();
                stack.operandStack.pop();
                stack.operandStack.push(a - b);

            }
            case LOADER::imultipl: {
                int a = stack.operandStack.top();
                int b = stack.operandStack.top();
                stack.operandStack.pop();
                stack.operandStack.pop();
                stack.operandStack.push(a * b);
            }
            case LOADER::idiv: {
                int a = stack.operandStack.top();
                int b = stack.operandStack.top();
                stack.operandStack.pop();
                stack.operandStack.pop();
                if (b == 0) {
                    cerr << "Error: Division by zero" << endl;
                    return 1;
                }
                stack.operandStack.push(a/b );
            }
            case LOADER::iprint : {
                int value = stack.operandStack.top();
                stack.operandStack.pop();
                cout << value << endl;
            }







        }
    }




return 0;


}


