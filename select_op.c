#include "monty.h"

/**
 * select_opcode - selects coresponding instruction to an opcode
 * @op: opcode instruction
 * @arg: argument passed to opcode instruction
*/
void (*get_op_func(char *op_token))(stack_t **stack, unsigned int line_number)
{
    instruction_t op_func[] = {
        {"push", push},
        {NULL, NULL}
    };
    int i = 0;

    for (; op_func[i].opcode; i++)
    {
        if (!strcmp(op_token, op_func[i].opcode))
            return op_func[i].f;
    }
}