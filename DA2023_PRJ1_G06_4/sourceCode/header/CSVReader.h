//
// Created by nesma on 09/03/2023.
//

#ifndef DAGRUPO_CSVREADER_H
#define DAGRUPO_CSVREADER_H

#include <fstream>
#include <sstream>
#include <queue>
#include <string>
#include <list>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include "Network.h"

using namespace std;

class CSVReader {
private:
    void populate();


public:
    CSVReader();

    static void read_network(const string &file, Network *network);

    static void read_stations(const string &file, Network *network);
};

#endif //DAGRUPO_CSVREADER_H
