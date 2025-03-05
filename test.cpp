#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

// Function to simulate traffic signal timings
void trafficSignal(int vehicle_count) {
    const int fixed_green = 30;  // Fixed green light duration (seconds)
    const int yellow_time = 5;   // Yellow light duration (seconds)
    const int red_time = 30;     // Red light duration (seconds)
    const int clearance_time = 5;
    const int emr_vehicle_time=10; // Time to clear one vehicle (seconds)

    int green_time;
    if (vehicle_count > 5) {
        green_time = fixed_green; // High traffic
    } else if()else {
        green_time = max(10, clearance_time * vehicle_count); // Low traffic
    }

    // Simulate traffic signal
    cout << "Green Light ON for " << green_time << " seconds" << endl;
    this_thread::sleep_for(chrono::seconds(green_time));
    cout << "Yellow Light ON for " << yellow_time << " seconds" << endl;
    this_thread::sleep_for(chrono::seconds(yellow_time));
    cout << "Red Light ON for " << red_time << " seconds" << endl;
    this_thread::sleep_for(chrono::seconds(red_time));
}

int main() {
    while (true) {
        int vehicle_count;
        cout << "Enter number of vehicles detected: ";
        cin >> vehicle_count;

        if (cin.fail()) {
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Please enter a valid number." << endl;
            continue;
        }

        trafficSignal(vehicle_count);
    }
    return 0;
}
