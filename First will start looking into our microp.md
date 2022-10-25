#qemu
First will start looking into our microprocessor stm32f407 both on live hardware and a simulator named QEmu.
 Then we will continue with stm32f407 hardware and protheus simulation.
 For installation of qemu and stm32f407-disco board see: https://www.youtube.com/watch?v=CdH-cad8DSw&list=PLpCEOpUHGlQYcmeNmdJSVX17VdQHkRO-o&index=8. Despite the tutorial is on linux it does not matter since all the installation is done via npm. (hence install nmp on your os)
## How numbers are counted?

int main() {
    int counter = 0;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;

    return 0;
}

Views usefull are register, memory and dissassembly as well as variables views ( I use 4 row 1 column).
see the instructions in memory: most of the Arm cortex m instructions occupy two bytes (see thumb and thumb 2 instruction set.)
Step into the code and  check PC (program counter) and the value in it at each iteration.
In which register is the variable stored?
What is a register ?: Memory which the microprocessor can read, clear and set.
İn arm cortex m4 thera are sixteen registers (pc is R15)
Machine instructions can manupilate registers easily and fast typically in one cycle.
SEt count to 0x7fffffff and increase 1;

Oxffffffff=-1;
0x80000000=-2^31
0x7fffffff=2 ^31 -1
0x00000001=1
change variable to unsigned. and set to 0x7fffffff
## Flow of control

int main() {
    int counter = 0;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;
    ++counter;

    return 0;
}
Look at the instructtion adress and the value of pc Counter
! How does the pc increment
Change the code
int counter = 0;
	while (counter <21)
	{
		++counter;
	}

Flow of loop   first check the counter then increase counter. İs it the same in disassembly?
when in compare pay attention to cspr :https://developer.arm.com/documentation/ddi0406/b/System-Level-Architecture/The-System-Level-Programmers--Model/ARM-processor-modes-and-core-registers/Program-Status-Registers--PSRs-

The CMP instruction has a very interesting side effect of modifying the
APSR register, which stands for Application Program Status Register.
Specifically, the CMP instruction sets the N-bit (negative) in the APSR,
because the comparison is performed as a difference R0-21, which turns
out negative.

The BLT instruction is a variant of the Branch instruction you already
saw, but this one is conditional. Specifically, the the BLT instruction
modifies the PC only when the N-bit in the APSR is set. Otherwise the
BLT instruction simply falls through to the next instruction.

At this point a good question is this: "How does the Branch instruction
know where to jump?"

Well, it turns out that this information is encoded in the instruction.
f9dd is the opcode, indeed it is ddf9 ! look at a.6.7.12 at 
http://web.eecs.umich.edu/~prabal/teaching/eecs373-f10/readings/ARMv7-M_ARM.pdf
the real number is ddf9 by the way



branching causes stalls in the fetch decode execute pipeline
##Variables and pointers
int counter = 0;
int main() {
    
    while (counter < 21) {
     ++counter;
    }

    
    return 0;
}
Compare disassembly

int counter = 0;

int main() {
    int *p_int;
    p_int = &counter;
    while (*p_int < 21) {
        ++(*p_int);
    }

   

    return 0;
}
int counter = 0;

int main() {
    int *p_int;
    p_int = &counter;
    while (*p_int < 21) {
        ++(*p_int);
    }

    p_int = (int *)0x20000002U;
    *p_int = 0xDEADBEEF;

    return 0;
}
watch for disallignment and follow the value in registers




