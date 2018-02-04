#include <cstdint>
#include <vector>
#include "Block.h"

using namespace std;

class Blockchain_cpp {
public:
    Blockchain_cpp();

    void block_added(Block bNew);

private:
    uint32_t t_difficulty;
    vector<Block> b_chain;

    Block _GetLastBlock() const;
};


