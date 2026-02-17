#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint8_t S:1;       // Sign
    uint8_t Z:1;       // Zero
    uint8_t P:1;       // Parity
    uint8_t C:1;       // Carry
    uint8_t AC:1;      // Auxiliary Carry
    uint8_t padding:3; // Padding (to complete 8 bits)
} Flags;

typedef struct {
    uint16_t stack_pointer;
    uint16_t program_counter;
    uint8_t *memory[0x10000];

    // Registers
    uint8_t B; // Most significant
    uint8_t C; // Least significant
    uint8_t D; // Most significant
    uint8_t E; // Least significant
    uint8_t H; // Most significant
    uint8_t L; // Least significant
    Flags F;
    uint8_t A;
} cpu;


int main() {
    return 0;
}