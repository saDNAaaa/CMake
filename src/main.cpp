#include "main.hpp"
#include "libdemo.hpp"
using namespace std;
int main(int argc, const char** argv)
{
	print_ok("Hello!");
	libdemo_output();
    return 0;
}
void print_ok(char *msg){
	cout << msg << endl;
}
