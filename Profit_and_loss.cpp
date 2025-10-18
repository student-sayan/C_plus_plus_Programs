#include <iostream>
using namespace std;
int main()
{
    float sp, cp;
    cout << "Enter the selling price(sp) = $ ";
    cin >> sp;
    cout << "Enter the cost price(cp) = $ ";
    cin >> cp;

    if (sp > cp)
    {
        cout << "Profit = $ " << (sp - cp);
        cout << "\n";
    }
    else if (sp < cp)
    {
        cout << "Loss = $ " << (cp - sp);
        cout << "\n";
    }
    else
    {
        cout << "No profit no loss\n";
    }
}