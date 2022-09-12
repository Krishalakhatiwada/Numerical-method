#include <iostream>

float xm;
float getFuncValue(float x)
{
    float y = x * x * x - 2 * x - 5;
    return y;
}

void HalfInterval(float xl, float xu)
{
    float err;
    do{
        int count =1;
        xm=(xl+xu)/2;
        float fxm=getFuncValue(xm);



    }while(err<0.005);
    
    float temp = getFuncValue(xl);
    if (temp > getFuncValue(xm) < 0)
    {
        xl = xm;
    }
    else
    {
        xu = xm;
    }
}
int main (){
float xl,xu;






}