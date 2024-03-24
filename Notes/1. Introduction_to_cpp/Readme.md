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


#### main function 
- The main function (main program) is where a program starts its execution. After processing all statements within the curly brackets, the program is terminated.

  ------------------------------------------------------------------------------------------------------------------------------------------------
- The curly brackets in the program are noticeable.  The brackets are used to mark the beginnings and the ends of code blocks of loops, functions, if statements, and so on
- In C++, whitespace characters are simply ignored


    int main() 
    { 
    cout << "Hello World!"; 
    } 
        equals to  
    int main(){cout<<"Hello World!";} 


-  system("pause");
  -  It is used to make the screen or console wait for a key press. After the keyboard input, the console window closes.
- The system("cls"); command fully deletes the screen output. The cursor is then located at the top left at the beginning of the command line. 







