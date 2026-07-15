#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Passenger {
    string name, destination, departureTime, flightNumber, CNIC, contact;
};

void SearchFlight() {
    string type;
    cout << "Search for a Flight: \n";
    cout << "1: National \n";
    cout << "2: International \n";
    cin >> type;
    cin.ignore();

    if (type == "1" || type == "NATIONAL" || type == "national" || type == "National") {
        string nationalFlights[] = {"KHI-ISB", "ISB-LHR", "LHR-KHI", "KHI-SKD", "KHI-HYD"};
        string nationalDestinations[] = {"Islamabad", "Lahore", "Karachi", "Skardu", "Hyderabad"};
        string nationalDepartureTimes[] = {"07:00 and 09:00", "13:00 and 19:00", "07:00 and 19:00", "07:00 and 13:00", "15:00 and 19:00"};
        cout << "National Flights: \n";
        for (int i = 0; i < 5; i++) {
            cout << nationalFlights[i] << " - " << nationalDestinations[i] << " (" << nationalDepartureTimes[i] << ")\n";
        }
    }
    else if (type == "2" || type == "INTERNATIONAL" || type == "international" || type == "International") {
        string internationalFlights[] = {"KHI-DXB", "KHI-LND", "KHI-NYK", "KHI-BKK", "KHI-FRA"};
        string internationalDestinations[] = {"Dubai", "London", "New York", "Bangkok", "France"};
        string internationalDepartureTimes[] = {"12:00 and 20:00", "08:00 and 20:00", "16:00 and 22:00", "08:00 and 16:00", "12:00 and 22:00"};
        cout << "International Flights: \n";
        for (int i = 0; i < 5; i++) {
            cout << internationalFlights[i] << " - " << internationalDestinations[i] << " (" << internationalDepartureTimes[i] << ")\n";
        }
    }
    else {
        cout << "Invalid type \n";
    }
}

void BookFlight() {
    int numPassenger;
    vector<Passenger> passengers;
    cout << "Book a Flight \n";
    cout << "Enter number of passengers: ";
    cin >> numPassenger;
    cin.ignore();

    for (int i = 0; i < numPassenger; i++) {
        Passenger passenger;
        cout << "Passenger " << i + 1 << "\n";
        cout << "Enter Name: ";
        getline(cin, passenger.name);
        cout << "Enter CNIC: ";
        getline(cin, passenger.CNIC);
        cout << "Enter Contact NO: ";
        getline(cin, passenger.contact);
        cout << "Available Destinations:\n";
        cout << "National Flights:\n";
        cout << "Islamabad, Lahore, Karachi, Skardu, Hyderabad\n";
        cout << "International Flights:\n";
        cout << "Dubai, London, New York, Bangkok, France\n";
        cout << "Enter Destination: ";
        getline(cin, passenger.destination);

        if (passenger.destination == "Islamabad") {
            cout << "Available flights:\n";
            cout << "1. KHI-ISB (07:00)\n";
            cout << "2. KHI-ISB (09:00)\n";
        } else if (passenger.destination == "Lahore") {
            cout << "Available flights:\n";
            cout << "1. ISB-LHE (13:00)\n";
            cout << "2. ISB-LHE (19:00)\n";
        } else if (passenger.destination == "Karachi") {
            cout << "Available flights:\n";
            cout << "1. LHR-KHI (07:00)\n";
            cout << "2. LHR-KHI (19:00)\n";
        } else if (passenger.destination == "Skardu") {
            cout << "Available flights:\n";
            cout << "1. KHI-SKD (07:00)\n";
            cout << "2. KHI-SKD (13:00)\n";
        } else if (passenger.destination == "Hyderabad") {
            cout << "Available flights:\n";
            cout << "1. KHI-HYD (15:00)\n";
            cout << "2. KHI-HYD (19:00)\n";
        } else if (passenger.destination == "Dubai") {
            cout << "Available flights:\n";
            cout << "1. KHI-DXB (12:00)\n";
            cout << "2. KHI-DXB (20:00)\n";
        } else if (passenger.destination == "London") {
            cout << "Available flights:\n";
            cout << "1. KHI-LND (08:00)\n";
            cout << "2. KHI-LND (20:00)\n";
        } else if (passenger.destination == "New York") {
            cout << "Available flights:\n";
            cout << "1. KHI-NYK (16:00)\n";
            cout << "2. KHI-NYK (22:00)\n";
        } else if (passenger.destination == "Bangkok") {
            cout << "Available flights:\n";
            cout << "1. KHI-BKK (08:00)\n";
            cout << "2. KHI-BKK (16:00)\n";
        } else if (passenger.destination == "France") {
            cout << "Available flights:\n";
            cout << "1. KHI-FRA (12:00)\n";
            cout << "2. KHI-FRA (22:00)\n";
        } else {
            cout << "Invalid destination\n";
            continue;
        }

        cout << "Enter flight number: ";
        getline(cin, passenger.flightNumber);
        cout << "Enter departure time: ";
        getline(cin, passenger.departureTime);
        passengers.push_back(passenger);
    }

    for (int i = 0; i < passengers.size(); i++) {
        Passenger& passenger = passengers[i];
        string boardingPass = "Boarding Pass:\n";
        boardingPass += "Name: " + passenger.name + "\n";
        boardingPass += "Flight Number: " + passenger.flightNumber + "\n";
        boardingPass += "Departure Time: " + passenger.departureTime + "\n";
        boardingPass += "Seat Number: " + to_string(i + 1) + "\n";
        boardingPass += "Gate Number: A1\n";
        cout << "Flight booked successfully for Passenger " << i + 1 << "!\n\n";
        cout << "*****************************************\n";
        cout << "HERE IS YOUR BOARDING PASS\n";
        cout << "*****************************************\n\n";
        cout << boardingPass << "\n";
    }
}

void CancelFlight() {
    string cnic;
    cout << "Cancel a flight:\n";
    cout << "Enter your CNIC: ";
    cin.ignore();
    getline(cin, cnic);

    if (!cnic.empty()) {
        cout << "You have a booked flight. Do you want to cancel it? (y/n): ";
        char answer;
        cin >> answer;
        cin.ignore();
        if (answer == 'y' || answer == 'Y') {
            cout << "Flight cancelled successfully!\n";
        } else {
            cout << "Cancellation cancelled.\n";
        }
    } else {
        cout << "No booked flight found.\n";
    }
}

int main() {
    while (true) {
        int choice;
        cout << "WELCOME TO BAHRIA AIRLINES\n\n";
        cout << "*****************************************\n";
        cout << "WELCOME TO AIRLINE RESERVATION SYSTEM \n";
        cout << "*****************************************\n\n";
        cout << " ---------- MAIN MENU ---------- \n\n";
        cout << "1: SEARCH FOR A FLIGHT \n";
        cout << "2: BOOK A FLIGHT \n";
        cout << "3: CANCEL \n";
        cout << "4: EXIT \n\n\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: SearchFlight(); break;
            case 2: BookFlight(); break;
            case 3: CancelFlight(); break;
            case 4:
                cout << "Thank you for using the system. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid Choice\n";
                break;
        }
    }
}
