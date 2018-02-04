#include <cstdint>
#include <iostream>
#include <sstream>

using namespace std;

class Block {
public:
    string hash;
    string previous_hash;

    Block(uint32_t index_n, const string &in_data);

    void BlockMined(uint32_t difficulty_s);

private:
    uint32_t _nIndex;
    uint32_t nonce;
    string b_data;
    time_t between_time;

    string _CalculateHash() const;
};
