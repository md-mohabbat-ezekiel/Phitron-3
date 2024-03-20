#include <iostream>
#include <string>
using namespace std;

class Cricketer {
public:
    int jersey_no;
    string country;
};

int main()
{
    // Create dynamic object dhoni
    Cricketer* dhoni = new Cricketer;
    dhoni->jersey_no = 7;
    dhoni->country = "India";

    // Create dynamic object kohli and copy data from dhoni
    Cricketer* kohli = new Cricketer;
    kohli->jersey_no = dhoni->jersey_no;
    kohli->country = dhoni->country;

    // Delete dhoni object
    delete dhoni;

    // Print the jersey_no and country of kohli
    cout << "Jersey No: " << kohli->jersey_no << endl;
    cout << "Country: " << kohli->country << endl;

    // Delete kohli object
    delete kohli;

    return 0;
}
