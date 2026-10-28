---   CPP COMMANDS   ---
cmake -S . -B build        # once, or when CMakeLists.txt changes
cmake --build build        # every time you edit code
./build/pose2d_example     # run it


compile and link:  g++ file.cpp -o hello     does both in one step. CMake and make do build and link for many files and they only rebuild what is changed.

--- CMAKE ----
A seperate scripting language. It writes instructions for another tool make which calls the compiler. 
