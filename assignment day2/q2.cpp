// Question 2 : Enter cost of 3 items from the user (using float data type) - a pencil, a pen and an eraser. You have to output the total cost of the items back to the user as their bill.
// (Add on : You can also try adding 18% GST tax to the items in the bill as an advanced problem)

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float penCost, pencilCost, eraserCost;
    cin >> penCost;
    cin >> pencilCost;
    cin >> eraserCost;
    float totCost = penCost + pencilCost + eraserCost;
    cout << "total = " << totCost << endl;
    cout << "total with GST = " << (totCost + (0.18 * totCost)) << endl;
    return 0;
}
