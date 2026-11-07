#include <iostream>

int main()
{
    int current_value;
    int largest_value;
    int smallest_value;
    bool has_data = false;

    std::cout << "Enter integers one at a time; enter -99 when done:\n";

    // The sentinel ends the loop before it can be processed as data.
    while (std::cin >> current_value && current_value != -99)
    {
        if (!has_data)
        {
            // The first number becomes both the largest and smallest so far.
            largest_value = current_value;
            smallest_value = current_value;
            has_data = true;
        }
        else
        {
            if (current_value > largest_value)
            {
                largest_value = current_value;
            }

            if (current_value < smallest_value)
            {
                smallest_value = current_value;
            }
        }
    }

    if (has_data)
    {
        std::cout << "Largest value: " << largest_value << '\n';
        std::cout << "Smallest value: " << smallest_value << '\n';
    }
    else
    {
        std::cout << "No data values were entered.\n";
    }

    return 0;
}
