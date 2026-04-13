#include<iostream>
using namespace std;
class generator
{
        float v;
        double g1,g2,g3,g4,rsh,rse,il;
        double ra;
        public:
        generator()
        {
            v=220.0;
        }
        ~generator()
        {

        }
        void emf(int il,int rsh,float ra=1.2)
        {

                float ish=(v/rsh);
                float ia=il+ish;
                g1=v+(ia*ra);
                cout<<"shunt emf:"<<g1<<endl;
        }
        void emf(int rse,float ra=1.2,int il=10)
        {
                g2=(v+(il*(ra+rse)));
                cout<<"series emf:"<<g2<<endl;
        }
        void emf(double ra,int il,int rsh=75,int rse=6)
        {
                float ish=(v/rsh);
                g3=(v+((il+ish)*(ra+rse)));
                cout<<"long shunt emf:"<<g3<<endl;
                double ia;
                g4=(v+((il+ish)*ra)+(il*rse));
                cout<<"short shunt emf:"<<g4<<endl;
        }
};
int main()
{
        generator g;
        g.emf(10,75);
        g.emf(6);
        g.emf(1.2,5);
        return 0;
}
