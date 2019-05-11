#include "main.hpp"
#include "libdemo.hpp"
using namespace std;
/**
 * [main description]
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
int main(int argc, const char** argv)
{
	print_ok("Hello!");
	libdemo_output();
    return 0;
}
/**
 * [print_ok description]
 * @param msg [description]
 */
void print_ok(const char *msg){
	cout << msg << endl;
}
