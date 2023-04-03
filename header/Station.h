//
// Created by nesma on 09/03/2023.
//

#ifndef DAGRUPO_STATION_H
#define DAGRUPO_STATION_H

#include <unordered_set>
#include<cmath>
#include <List>
#include <iostream>
#include <vector>
#include "Trip.h"

using namespace std;

class Station {
private:
    string name_;
    string district_;
    string mun_;
    string township_;
    string line_;
    vector<Trip> trips;
public:
    void setName(const string &name);

    void setDistrict(const string &district);

    void setMun(const string &mun);

    void setTownship(const string &township);

    void setLine(const string &line);

    const vector<Trip> &getTrips() const;

    void setTrips(const vector<Trip> &trips1);

    void addTrip(Trip &trip);

    Station();

    Station(string name, string district, string mun, string township, string line);

    string getName() const;

    string getDistrict() const;

    string getMun() const;

    string getTownship() const;

    string getLine() const;

    bool operator==(const Station &other) const;

    bool operator<(const Station &other) const;

    int minCost(Station* src, Station* dest);
};

//I don't know if it's needed
struct StationDistance {
    Station* station;
    int distance;

    StationDistance(Station* station, int distance) : station(station), distance(distance) {}

    bool operator<(const StationDistance& other) const {
        return distance > other.distance;
    }
};

#endif //DAGRUPO_STATION_H
