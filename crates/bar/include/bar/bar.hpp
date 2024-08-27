#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <ostream>
#include <new>

extern "C" {

uint64_t add_u64(uint64_t left, uint64_t right);

uint64_t sub_u64(uint64_t left, uint64_t right);

void hello();

} // extern "C"
