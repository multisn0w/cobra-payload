//'cobra' by multisn0w

#include "commands.h"

typedef unsigned short uint16_t;
typedef unsigned long uint32_t;

//Macros (used for writing to memory addresses)
#define SET_REG16(x, y) (*((volatile uint16_t*)(x)) = (y))
#define SET_REG32(x, y) (*((volatile uint32_t*)(x)) = (y))
//End of Macros

int main(int argc, CmdArg* argv) {


}
