#include <iostream>
#include<conio.h>

using namespace std;

int main()
{



    int pod;
    int zam;
    int tab_size;

    cout << "How many number you want sort? [min 4]";
    cin >> tab_size;
    int * tab = new int[tab_size];

    for (int i = 0; i < tab_size; ++i)
    {
        cin >> tab[i];
    }



    while(true)
    {
        zam = 0;
        for( int i = 0; i < tab_size; i++)
            if(tab[i] > tab[i+1])
            {
                //cout << tab[i]<<" "<< tab[i+1]<<endl;
                pod = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = pod;
                zam++;
                //cout << pod<<endl;
            }
        if(zam == 0) break;
    }

    for( int i = 0; i < tab_size; i++)
    {
        cout << tab[i] << " ";
    }

    delete [] tab;
    return 0;
}
