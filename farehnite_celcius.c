#include <iostream>
using namespace std;

int main() {
    float sfahren,efahren,step_size,celsius;

    //cout << "Enter the temperature in fahrenheit\n";
    cin >> sfahren>>efahren>>step_size;

    // convert fahreneheit to celsius
    // Subtract 32, then multiply it by 5, then divide by 9
    while(sfahren<=efahren)
    {
    celsius = 5 * (sfahren - 32) / 9;
  	cout << sfahren <<" "<<celsius <<endl;
    sfahren+=step_size;
    }

    return 0;
}
