/*
Flight Booking System - implement a flight booking system that allows users to search and book flights and enables admins to add flight details

A flight has uniq id, source, destination, number of seats (capacity) 

Admins -
createFlight(flight_id, source, destination, capacity) -> creates the flight
showBookings(flight_id) -> return all bookings for the given flight.

Users -
searchFlight(source, destination) -> shows all flights with available seats
bookFlight(flight_id, user_id) -> return booking_id
viewBooking(booking_id) -> show the booking details
createUser(email_id, first_name, last_name) -> creates the user and returns user_id - unique constraint on email_id
*/

#include <bits/stdc++.h>
using namespace std;

string gen() {
    static int I = 0;
    return to_string(I++);
}

class Flight{
    string id, source, destination;
    int capacity, current;
    vector < pair< string, string> > booking;
    
    public:
    Flight() {} ; 
    Flight (string _id, string _source, string _destination, int _cap) : id(_id), source(_source), destination(_destination), capacity(_cap), current(0) {}
    bool full() {
        return current >= capacity;
    }
    string book(string user_id) {
        string temp = gen();
        booking.push_back({user_id, temp});
        current++;
        return temp;
    }
};
map< pair< string, string> , vector< Flight* > > flig;
map< string, Flight* > flightIds;
map< string, pair< string, string> > bookings;

bool createFlight(string flight_id, string source, string destination, int capacity) {
    if (flightIds.count(flight_id)) {
        return false;
    }
    Flight *cur = new Flight;
    cur->Flight(flight_id, source, destination, capacity)
    flig[make_pair(source, destination)].push_back(cur);
    flightIds[flight_id] = cur;
    return true;
}

vector< string > searchFlight(string source, string destination) {
    vector< string > ret;
    for (auto flight : flig[make_pair(source, destination)]) {
        if (!flight->full()) {
            ret.push_back(flight->id);
        }
    }
    return ret;
}

string bookFlight(string flight_id, string user_id) {
    Flight *cur = flightIds[flight_id];
    if (cur->full()) {
        throw "FlightFull";
    }
    string temp = cur->book(user_id);
    bookings[temp] = make_pair(user_id, flight_id);
    return temp;
}
// viewBooking(booking_id) -> show the booking details
// createUser(email_id, first_name, last_name) -> creates the user and returns user_id - unique constraint on email_id



int main() {
  
  return 0;
}
