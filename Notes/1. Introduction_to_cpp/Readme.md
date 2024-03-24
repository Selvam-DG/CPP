- C++ evolved from another programming language called C, a programming language often referred to as “C with classes”.
- To create and execute a C++ program, basically the same steps are necessary as in C:
  - The program is created using an editor.
  - The program is compiled, which means it is translated into the computer's machine language.
  - The linker finally creates the executable file.

#### Editor
- An editor is used to create the text files that contain the C++ code. There are two different types of files:
  - Source files
    - Source files contain definitions of global variables and functions. Each C++ program consists of at least one source file.
  - Header files
    - Header files, also called include files, provide the information needed in various source files.
    - This includes:
      - Type definitions, e.g. class definitions
      - Declarations of global variables and functions
      - Definitions of macros and inline functions
     
#### Compilers 
- A translation unit consists of a source file and the included header files. The compiler generates an object file (also called module) from each translation unit; the object file contains the machine-code.

#### Linker  
- The linker combines object files into an executable file. Besides the self-generated object files, it also contains the startup-code and the modules with the used functions and classes of the standard library.













