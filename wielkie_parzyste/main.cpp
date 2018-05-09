#include <iostream>

using namespace std;
#include <cctype>

string change (string tag);

int main() {
    string tag;
    cin >> tag;
    cout << change(tag) << endl;
    return 0;
}

string change (string tag){
    int i{0};
    for (auto & sign : tag){

            if(i % 2 == 0){
                sign = tolower(sign);
            }
            else{
                sign = toupper(sign);
            }
        i++;
    }
    return tag;
}