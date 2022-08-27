#pragma once
#include "ton/ton-types.h"
#include "crypto/vm/cells.h"

namespace emulator {
td::Status emulate_transactions();
}  // namespace emulator
