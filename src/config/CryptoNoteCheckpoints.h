// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2018-2020, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote
{
    struct CheckpointData
    {
        uint32_t index;
        const char *blockId;
    };

    const std::initializer_list<CheckpointData> CHECKPOINTS = {};
        //{0, "3c8b586d801b6b93c9aec5291175486550213f5a3dfed496eed659b4b550263f"},
       // {2, "e174721c3436103d3db6c990dca190ea9f1c2db549ae58fd1ce12f46cfc8775e"},
      //  {1000, "21dc4fd5b5d1e01aec99cf1fed40facbf61dbae31b949efbcce6a3b26ddffbd2"}};
   // };
} // namespace CryptoNote
