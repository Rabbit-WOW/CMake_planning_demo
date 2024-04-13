#include <iostream>
#include "process.h"
#include "pnc_map.h"
#include "show_result.h"
#include <graphics.h>

using namespace std;

int main()
{
    cout << "process starting!" << endl;
    Process myprocess;
    myprocess.planprocess();
    cout << "process ending!" << endl;
    cout << "show result" << endl;
    ShowResult show;
    show.draw_result();
    system("pause");
    return 0;
}