#include "Emulator.h"
#include "block/transaction.h"

namespace emulator {
std::unique_ptr<block::Transaction> create_ordinary_transaction(td::Ref<vm::Cell> msg_root) {
  return std::move(std::make_unique<block::Transaction>(block::Account(), block::Transaction::tr_ord, 123, 123, msg_root));
}
td::Status emulate_transactions() {
  return td::Status::OK();
}
}  // namespace emulator
