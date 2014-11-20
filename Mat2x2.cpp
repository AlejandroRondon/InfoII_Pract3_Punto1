#include "Mat2x2.h"



Mat2x2::Mat2x2()
{
    this->mat2x2[0][0]=0;
    this->mat2x2[0][1]=0;
    this->mat2x2[1][0]=0;
    this->mat2x2[1][1]=0;

}
Mat2x2::Mat2x2(float a)
{

    this->mat2x2[0][0]=a;
    this->mat2x2[0][1]=a;
    this->mat2x2[1][0]=a;
    this->mat2x2[1][1]=a;
}

Mat2x2::Mat2x2(float a,float b,float c,float d){
    this->mat2x2[0][0]=a;
    this->mat2x2[0][1]=b;
    this->mat2x2[1][0]=c;
    this->mat2x2[1][1]=d;
}

/*void Mat2x2::operator =(Mat2x2 argMat2x2){
    this->mat2x2[0][0]= argMat2x2.mat2x2[0][0];
    this->mat2x2[0][1]= argMat2x2.mat2x2[0][1];
    this->mat2x2[1][0]= argMat2x2.mat2x2[1][0];
    this->mat2x2[1][1]= argMat2x2.mat2x2[1][1];
}
*/
Mat2x2 Mat2x2::operator +(Mat2x2 argMat2x2){
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            argMat2x2.mat2x2[i][j] =  argMat2x2.mat2x2[i][j]+ this->mat2x2[i][j];
        }
    }
    return argMat2x2;
}
Mat2x2 Mat2x2::operator -(Mat2x2 argMat2x2){
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            argMat2x2.mat2x2[i][j] =  this->mat2x2[i][j]-argMat2x2.mat2x2[i][j];
        }
    }
    return argMat2x2;

}
bool Mat2x2::operator ==(Mat2x2 argMat2x2){
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(argMat2x2.mat2x2[i][j] !=  this->mat2x2[i][j]){
                return false;

            }
        }
    }
    return true;

}
Mat2x2 Mat2x2::operator *(Mat2x2 argMat2x2){
    return argMat2x2;
}

Mat2x2 Mat2x2::operator *(float A){
    return *(new Mat2x2((mat2x2[0][0]*A),(mat2x2[0][1]*A),(mat2x2[1][0]*A),(mat2x2[1][1]*A)));
}
Mat2x2 Mat2x2::operator /(float A){
    return *(new Mat2x2((mat2x2[0][0]/A),(mat2x2[0][1]/A),(mat2x2[1][0]/A),(mat2x2[1][1]/A)));
}
void Mat2x2::operator /=(float A){
    mat2x2[0][0]/=A;
    mat2x2[0][1]/=A;
    mat2x2[1][0]/=A;
    mat2x2[1][1]/=A;
}
void Mat2x2::operator *=(float A){
    mat2x2[0][0]*=A;
    mat2x2[0][1]*=A;
    mat2x2[1][0]*=A;
    mat2x2[1][1]*=A;

}

float Mat2x2::getvalA(){
    return mat2x2[0][0];
}
float Mat2x2::getvalB(){
    return mat2x2[0][1];
}
float Mat2x2::getvalC(){
    return mat2x2[1][0];
}
float Mat2x2::getvalD(){
    return mat2x2[1][1];
}

void Mat2x2::setvalA(float A){
   this->mat2x2[0][0]=A;
}
void Mat2x2::setvalB(float B){
    this->mat2x2[0][1]=B;
}
void Mat2x2::setvalC(float C){
    this->mat2x2[1][0]=C;
}
void Mat2x2::setvalD(float D){
    this->mat2x2[1][1]=D;
}


ostream& operator <<(ostream &o,Mat2x2 myMat2x2)
{
    o << "\n|\t" << myMat2x2.mat2x2[0][0] << "\t\t" << myMat2x2.mat2x2[0][1]  << "\t|\n" << "|\t" << myMat2x2.mat2x2[1][0] << "\t\t" << myMat2x2.mat2x2[1][1]  << "\t|\n";
    return o;
}
