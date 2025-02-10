#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// TODO: Add More ctime api later.
// Reference link:  https://www.w3schools.com/cpp/cpp_date.asp

int main() {
    // Get the timestamp for the current date and time.
    time_t timestamp;
    cout << &timestamp << "\n"; //0x7ff7b1f137c0
    time_t tp = time(&timestamp); //tp == 1733808470
    cout << "tp == " << tp << "\n";

    // display current timestamp;
    cout << ctime(&timestamp) << "\n"; //Tue Dec 10 13:27:50 2024
    cout << ctime(&tp) << "\n"; // Tue Dec 10 13:27:50 2024
    return 0;
}