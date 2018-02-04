#include "Blockchain.h"

int main()
{
    Blockchain_cpp bChain = Blockchain_cpp();

    cout << "Mining block 1..." << endl;
    bChain.block_added(Block(1, "Block 1 hash"));

    cout << "Mining block 2..." << endl;
    bChain.block_added(Block(2, "Block 2 hash"));

    cout << "Mining block 3..." << endl;
    bChain.block_added(Block(3, "Block 3 hash"));
    
    cout << "Mining block 4..." << endl;
    bChain.block_added(Block(4, "Block 4 hash"));
    
    cout << "Mining block 5..." << endl;
    bChain.block_added(Block(5, "Block 5 hash"));
    
    return 0;
}

// 5 blocks mined
