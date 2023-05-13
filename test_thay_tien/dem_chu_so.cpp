#include <iostream>
#include <cstring>

using namespace std;

int countDigits(int n, int digit)
{
    int count = 0;
    while (n > 0)
    {
        if (n % 10 == digit)
        {
            count++;
        }
        n /= 10;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B;
        cin >> A >> B;

        int count[10];
        memset(count, 0, sizeof(count));

        for (int i = 0; i <= 9; i++)
        {
            for (int j = A; j <= B; j++)
            {
                count[i] += countDigits(j, i);
            }
        }

        for (int i = 0; i <= 9; i++)
        {
            cout << count[i] << " " << endl;
        }
    }

    system("pause");
    return 0;
}
