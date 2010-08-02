//'cobra' by multisn0w

//Commands.h is used to correctly pass arguments to your payloads main function.

enum {
    kCmdArgTypeString = 0,
    kCmdArgTypeInteger = 1
};

typedef struct CmdArg {
    signed int unk1;
    unsigned int uinteger;
    signed int integer;
    unsigned int type;
    unsigned char* string;
} CmdArg;
