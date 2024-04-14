#include <iostream>
#include "pnc_map.h"
using namespace std;

void test_map()
{
    cout << "this is a test for map!" << endl;
    PNC_Map map;
    map.mapinfo();
}

int main()
{
    test_map();
    return 0;
}