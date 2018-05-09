#include <iostream>


using namespace std;

int A{};
int B{};
int count{};

int main()
{

    cout << "Give beginning number:  ";
    cin >> A;

    cout << "Give ending number:  ";
    cin >> B;

    for(int j = A; j <= B; j++)
    {
        for(int k = 1; k <= j; k++)
        {
            if((k == j) && (k != 1))
            {
                count++;
                break;

            }
            if((j % k == 0) && (k != 1)) break;

        }
    }
    cout << "Numbers of prime number: " << count << endl;


    return 0;
}