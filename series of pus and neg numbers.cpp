#include <iostream>
#include <math.h>
using namespace std;
float anwr(int num)
{ //s=1/2-2/3+3/4-4/5+...+(n-1)/n در اینجا مثبت و منفی را کی در نظر میگیریم(k)
    float s;
    int k=1;
    for (int i = 1; i <= num; i++)
    {
        s = s + (k * ((float)i / (i + 1)));
        k = -k;
    }
    return s;
}
int main()
{
    int num;
    float b1;

    do
    {
        cin >> num;
        b1 = num % 2;

    } while (b1 != 0); //اگر عدد وارد شده یه عدد زوج باشد اعشار نخواهد داشت و اگر اعشار داشته باشد یعنی عدد وارد شده فرد است
    float a = anwr(num);
    cout << a << endl;
}
