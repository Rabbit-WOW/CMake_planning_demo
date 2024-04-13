#include <iostream>
#include "process.h"
#include "pnc_map.h"

using namespace std;

int main()
{
    cout << "process start" << endl;
    Process myprocess;
    myprocess.planprocess();
    cout << "process end" << endl;
    system("pause");
    return 0;
}