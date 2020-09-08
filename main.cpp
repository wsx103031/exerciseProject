#include <iostream>
#include "header/a.h"
#include "header/b.h"

using std::cout;
using std::endl;

int main(int, char **)
{
    char a = test_a();
    char b = test_b();
    setlocale(LC_ALL, "");
    char c[] = "我";
    cout << "test result:" << a << " " << b << endl;
    cout << "test chinese word result:" << c;
    system("pause");
}
