#include "Blockchain.h"

Blockchain_cpp::Blockchain_cpp()
{
    b_chain.emplace_back(Block(0, "Genesis Block"));
    t_difficulty = 6;
}

void Blockchain_cpp::block_added(Block new_block)
{
    new_block.previous_hash = _GetLastBlock().hash;
    new_block.BlockMined(t_difficulty);
    b_chain.push_back(new_block);
}

Block Blockchain_cpp::_GetLastBlock() const
{
    return b_chain.back();
}
