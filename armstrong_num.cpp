#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n = 153, lstdig;
    //   cin>>n;
    int N = n;
    int sum = 0;

    while (n > 0)
    {
        lstdig = n % 10;
        sum += pow(lstdig, 3);
        n = n / 10;
    }

    if (sum == N)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Non armstrong" << endl;
    }

    return 0;
}
