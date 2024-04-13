#include <iostream>
#include "process.h"
#include <Eigen/Dense>
using namespace std;
using Eigen::MatrixXd; 

void Process::planprocess()
{
    cout << "this is planning process!" << endl;
    cout << "matrix working!" << endl;
    MatrixXd m(2,2);
    m(0,0) = 1;
    m(0,1) = 2;
    m(1,0) = 3;
    m(1,1) = 4;
    cout << m << endl;
    cout << "working complete!" << endl;
    pnc_map.mapinfo();
    cout << "planning process!" << endl; 
}

