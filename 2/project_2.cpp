#include <iostream>

using namespace std;

int main()
{
    int Now = 1, Before = 0, After = 0, Sum = 0;
    while (Now < 4000000)
    {
        if (Now == 1) Before = 1;
        if (Now % 2 == 0) Sum = Sum + Now;
        After = Before + Now;
        // Shifting
        Before = Now;
        Now = After;
        // Check
        cout << "Fibonanci Currect : " << Now << " Sum Current : " << Sum << endl; 
    }
    cout << "Sum Even Number : " << Sum << endl;
    system("pause");
    return 0;
}