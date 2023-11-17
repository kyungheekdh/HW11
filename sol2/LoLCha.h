#pragma once
#include <fstream>
using namespace std;
class LoL 
{
    int * _N1;
    int * _N2;
    float * _a;
    float * _b;
    float * _x0;
    float * _dx;
    int * _m;

    public:
    LoL(int N1, int N2, float a, float b, float x0, float dx, int m)
    {
        _N1 = new int;
        *_N1 = N1;
        _N2 = new int;
        *_N2 = N2;
        _a = new float;
        *_a = a;
        _b = new float;
        *_b = b;
        _x0 = new float;
        *_x0 = x0;
        _dx = new float;
        *_dx = dx;
        _m = new int;
        *_m = m;
    }
    ofstream dd;
    void f0(string);
    void f1();
    void f2();
    ~ LoL()
    {
        delete _N1;
        delete _N2;
        delete _a;
        delete _b;
        delete _x0;
        delete _dx;
        delete _m;
    }
};
