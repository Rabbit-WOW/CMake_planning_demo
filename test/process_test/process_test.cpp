#include <iostream>
#include "process.h"
#include <Eigen/Dense>
using namespace std;

void test_process()
{
    cout << "this is a test for process!" << endl;
    Process pro;
    pro.planprocess();
}

int main()
{
    test_process();
    system("pause");
    return 0;
}