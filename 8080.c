#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint16_t *stack_pointer;
    uint16_t program_counter;

    // Registers
    uint8_t A;
    uint8_t B;
    uint8_t C;
    uint8_t D;
    uint8_t E;
    uint8_t H;
    uint8_t L;

    // Flags
    uint8_t S;  // Sign
    uint8_t Z;  // Zero
    uint8_t P;  // Parity
    uint8_t C;  // Carry
    uint8_t AC; // Auxiliary Carry
} cpu;


int main() {
    return 0;
}