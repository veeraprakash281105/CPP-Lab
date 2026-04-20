#include <iostream>
using namespace std;

class DCGen {
protected:
    float v, ra;

public:
    DCGen(float v0, float Ra)
    {
        v = v0;
        ra = Ra;
    }
};
class ShuntGen : public DCGen
{
    int il, rsh;
public:
    ShuntGen(int a, int b, float v0, float Ra) : DCGen(v0, Ra) {
        il = a;
        rsh = b;
    }
    void calEMF() {
        float ish = v / rsh;
        float ia = il + ish;
        float emf = v + (ia * ra);
        cout << "Shunt Gen voltage is: " << emf << " V" << endl;
        cout << "The current in shunt: " << ia << " A" << endl;
    }
};
class SeriesGen : public DCGen
{
    int il, rse;
public:
    SeriesGen(int a, int b, float v0, float Ra) : DCGen(v0, Ra) {
        il = a;
        rse = b;
    }
    void calEMF() {
        float emf = v + (il * (ra + rse));
        cout << "Series Gen voltage: " << emf << " V" << endl;
    }
};
class CompoundGen : public DCGen {
    int il, rsh, rse;
public:
    CompoundGen(int a, int b, int c, float v0, float Ra) : DCGen(v0, Ra) {
        il = a;
        rsh = b;
        rse = c;
    }
    void calEMF() {
        float ish = v / rsh;
        float ia = il + ish;
        float Long = v + (ia * (ra + rse));
        float Short = v + (ia * ra) + (il * rse);
        cout << "Compound: Long Shunt voltage: " << Long << " V" << endl;
        cout << "Compound: Short Shunt voltage: " << Short << " V" << endl;
        cout << "The current in compound: " << ia << " A" << endl;
    }
};

int main() {
    ShuntGen g1(5,75,220.0,1.2);
    SeriesGen g2(8,6,220.0,1.2);
    CompoundGen g3(3,75,6,220.0,1.2);
    g1.calEMF();
    g2.calEMF();
    g3.calEMF();
    return 0;
}
