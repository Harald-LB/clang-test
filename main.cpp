/**
 * An example that breaks as many clang-tidy-rules as possible.
 *
 * Run the following commands to get it fixed:
 *
 *   $ clang-tidy main.cpp -fix -p="./cmake-build-debug"
 *   $ clang-format main.cpp -i
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
