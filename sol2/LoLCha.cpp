void LoL::f0(string ss) 
{
    dd.open(ss, ios::binary | ios::out);
    dd.write((char*)&(*_N1), sizeof(int));
    dd.write((char*)&(*_N2), sizeof(int));
    dd.write((char*)&(*_a), sizeof(float));
    dd.write((char*)&(*_b), sizeof(float));
    dd.write((char*)&(*_x0), sizeof(float));
    dd.write((char*)&(*_dx), sizeof(float));
    dd.write((char*)&(*_m), sizeof(int));
}

void LoL::f1() 
{
    int* f1d;
    f1d = new int[*_N2 - *_N1 + 1];
    for (int i = *_N1; i <= *_N2; i++) 
    {
        f1d[i - *_N1] = i * (i + 1) / 2;
    }
    dd.write((char*)f1d, sizeof(int)*(*_N2 - *_N1+1));
    delete f1d;
}

void LoL::f2() 
{
    float *f2d, x;
    x = *_x0;
    f2d = new float[*_m];
    for (int i = 0; i < *_m; i++ ,x += *_dx) 
    {
        f2d[i] = (*_a) * x + (*_b);
    }
    dd.write((char*)f2d, sizeof(int) * (*_m));
    delete f2d;
    dd.close();
}
