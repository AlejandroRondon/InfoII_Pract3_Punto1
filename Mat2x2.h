#ifndef MAT2X2_H
#define MAT2X2_H
#include <iostream>
using namespace std;

class Mat2x2
{
    private:
        float mat2x2[2][2];


    public:
    Mat2x2();
    Mat2x2(float a);
    Mat2x2(float a,float b,float c,float d);
    //void operator =(Mat2x2);  //equal
    Mat2x2 operator +(Mat2x2);  //add
    Mat2x2 operator -(Mat2x2);  //subtraction
    bool operator ==(Mat2x2); //Comparative
    Mat2x2 operator *(Mat2x2);  //with Matrix
    Mat2x2 operator *(float);   //with Real
    Mat2x2 operator /(float);  //with Real
    friend ostream& operator <<(ostream &o,Mat2x2 myMat2x2);    //friend: With this WORD this method will can to access to the private attributes
    void operator /=(float);  //with Real
    void operator *=(float);  //with Real

    float getvalA();
    float getvalB();
    float getvalC();
    float getvalD();

    void setvalA(float);
    void setvalB(float);
    void setvalC(float);
    void setvalD(float);

    protected:

};


#endif // MAT2X2_H
