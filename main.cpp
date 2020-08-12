/**
 * Here is an example that breaks as many clang-tidy-rules as possible and lacks all formatting.
 *
 * Run the following in the command line to get it fixed:
 *
 *   $ clang-tidy main.cpp -fix -p="./cmake-build-debug"
 *   $ clang-format main.cpp -i
 *
 * According to
 *  https://www.jetbrains.com/help/clion/clangformat-as-alternative-formatter.html
 * these two functions should also work directly from within the CLion editor.
 *
 * Indeed the clang-tidy fixes are nicely applied following the rules defined in ".clang-tidy".
 *
 * But code formatting seem NOT TO WORK as described.
 *
 * If we do "Code > Reformat Code Ctrl+Alt+L" CLion will completely ignore our settings we have
 * defined in file ".clang-format". For example in this file, we'll get an indent-width of 4 characters,
 * although in ".clang-format" we have "IndentWidth: 8"
 *
 */
#include <iostream>

class FooBar
{
public:
FooBar(int bar_val,int* ptr):Bar_bar(bar_val),Pointer(ptr){}
void do_bar_bar(int my_val){}

private:
int Bar_bar;
int* Pointer;
public:
int bar_bar(){return Bar_bar+*Pointer;}
};

static int SomeVar = 1;

int main()
{
std::cout << "Hello, World!" << std::endl;
return 0;
}
