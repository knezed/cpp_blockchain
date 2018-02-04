#include "Block.h"
#include "sha256.h"

Block::Block(uint32_t index_block, const string &b_data_from) : _nIndex(index_block), b_data(b_data_from)
{
    nonce = 0;
    between_time = time(nullptr);

    hash = _CalculateHash();
}

void Block::BlockMined(uint32_t nDifficulty)
{
    char cstr[nDifficulty + 1];
    for (uint32_t i = 0; i < nDifficulty; ++i)
    {
        cstr[i] = '0';
    }
    cstr[nDifficulty] = '\0';

    string str(cstr);

    while (hash.substr(0, nDifficulty) != str)
    {
        nonce++;
        hash = _CalculateHash();
    }

    cout << "Block mined: " << hash << endl;
}

inline string Block::_CalculateHash() const
{
    stringstream ss;
    ss << _nIndex << previous_hash << between_time << b_data << nonce;

    return sha256(ss.str());
}
