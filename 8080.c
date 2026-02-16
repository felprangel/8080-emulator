#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint16_t *stack_pointer;
    uint16_t program_counter;
    uint8_t *memory;

    // Registers
    uint8_t A;
    uint8_t B;
    uint8_t C;
    uint8_t D;
    uint8_t E;
    uint8_t H;
    uint8_t L;

    // Flags
    uint8_t S:1;       // Sign
    uint8_t Z:1;       // Zero
    uint8_t P:1;       // Parity
    uint8_t CY:1;      // Carry
    uint8_t AC:1;      // Auxiliary Carry
    uint8_t padding:3; // Padding (to complete 8 bits)
} cpu;


int main() {
    return 0;
}