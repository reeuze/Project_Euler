#include <iostream>

using namespace std;

int main()
{
    int Number, Sum;
    for (int Number=0; Number<1000; Number++)
    {
        if (Number%3==0 || Number%5==0) Sum = Sum + Number;
    }
    cout << "Sum : " << Sum << endl;
    system("pause");
    return 0;
}