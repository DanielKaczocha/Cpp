#include <iostream>




using namespace std;
void deck(string fig[13], string col[4]);
void print (string card[13*4]);




string fig[13] = {"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
string col[4] = {" Pik", " Karo", " Trefl", " Kier"};
string card[13*4] = {};

int main() {
    deck(fig, col);
    print(card);


    return 0;
}

void deck(string fig[13], string col[4])
{
    int element = 0;

    for( int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 13; j++)
        {
            card[element++] = fig[j] + col[i];
        }
    }
}


void print (string card[13*4])
{
    for(int i = 0; i <= (13*4); i++)
    {
        cout << card[i] << endl;
    }
}