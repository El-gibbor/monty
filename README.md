![monty](https://github.com/El-gibbor/monty/assets/107848793/7c767f98-5d48-447a-ba0c-e5d0ecb8d381)
# Monty💫 
## C - Stacks, Queues - LIFO, FIFO ⛓ 
__The Monty 0.98 Interpreter!__ This program is designed to interpret Monty ByteCodes files, allowing us to manipulate a unique stack using stacks and queues data structure operations. Below are some essential concepts and learning objectives covered.  
## Learning Objectives 📚  
- __LIFO and FIFO:__ "Last In, First Out," and "First In, First Out." - These terms refer to the order in which items are added to and removed from a data structure. LIFO implies that the last item added will be the first to be removed (like a stack), whereas FIFO implies that the first item added will be the first to be removed (like a queue).
- __Stacks and When to Use It:__ This is a linear data structure that follows the LIFO principle. It's used when you need to manage elements in a way that the most recently added element is the one accessed and removed first. Common use cases for stacks include managing function calls, tracking states for undo/redo functionality, web page traversal, etc.
- __Queue and When to Use It:__ This is another linear data structure, but it follows the FIFO principle. It's used when you need to maintain elements in a sequence, and the element that has been in the queue the longest is the first to be accessed and removed.
- __Implementations of Stacks and Queues:__ There are various ways to implement stacks and queues, with arrays and linked lists being the most common choices. Arrays offer simplicity but have fixed sizes, while linked lists are more flexible but come with slightly more complexity.
- __Common Use Cases:__ Stacks and queues have numerous applications. Stacks are used in programming language syntax parsing, expression evaluation, and managing data flow. Queues find their use in process scheduling, managing resources, and handling asynchronous tasks.
- __Proper Use of Global Variables:__ Global variables are accessible from any part of the program, but we are advised to use them judiciously. To maintain code clarity and avoid unintended side effects, the use of global variables should be limited to cases where a shared state is genuinely necessary. They can always be declared at the beginning of the code and heir purpose clearly documented.
## 💡Opcodes (operation code) Implemented 
Below are some examples of Monty ByteCodes instructions used in the input files:  
1. The `push` opcode: The push opcode pushes an element to the stack.  
2. The `pall` opcode: Prints all the values on the stack, starting from the top of the stack.  
3. The `pint` opcode: Prints the value at the top of the stack, followed by a new line.  
4. The `pop`: opcode removes the top element from the stack.  
5. The `swap` opcode: Swaps the top two elements of the stack.  
6. The `sub` opcode: sub subtracts the top element of the stack from the second top element of the stack.
7. The `add` opcode: adds the top two elements of the stack.  
8. The `div` opcode: divides the second top element of the stack by the top element of the stack.  
9. The `mul` opcode: multiplies the second top element of the stack with the top element of the stack.  
10. The `mod` opcode: computes the rest of the division of the second top element of the stack by the top element of the stack.  
## Usage💥
compile into an executable named `monty` and run:
```
./monty file
```
Replace "file" with the path to the file containing Monty byte code.  
If no file or more than one argument is provided, the program will display:
```
USAGE: monty file
```
If the specified file cannot be opened, the program will display: `Error: Can't open file <file>`  
Here, "file" represents the name of the file.  
If the file contains an invalid instruction, you'll see: `L<line_number>: unknown instruction <opcode>`.  
`line_number` is the line number where the invalid instruction appears. Line numbers start from 1.  
### 🚦The Monty program runs bytecodes line by line and stops if:  
- All lines are executed properly.
- An error is encountered.
- A runtime error occurs.
- If the program is unable to allocate more memory using malloc, it will print `Error: malloc failed`  
## Contributors 🧠  
Project was done in teams of 2 people:  
- __Destiny Saturday__ - [Github](www.github.com/DestinedCodes) | [Blog](https://blog.destinedcodes.me/series/c-programming) | [Twitter](https://twitter.com/DestinedCodes)  
- __Chiagoziem El-gibbor__ - [Twitter](https://twitter.com/Mr_Elgibbor) | [Blog](https://elgibbor.hashnode.dev/?source=top_nav_blog_home) | [Linkedin](https://www.linkedin.com/in/elgibbor/)  
