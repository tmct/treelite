const char* header =
"#include <stdlib.h>\n"
"#include <string.h>\n"
"#include <math.h>\n"
"#include <stdint.h>\n"
"\n"
"#if defined(__clang__) || defined(__GNUC__)\n"
"#define LIKELY(x)   __builtin_expect(!!(x), 1)\n"
"#define UNLIKELY(x) __builtin_expect(!!(x), 0)\n"
"#else\n"
"#define LIKELY(x)   (x)\n"
"#define UNLIKELY(x) (x)\n"
"#endif\n"
"\n"
"union Entry {\n"
"  int missing;\n"
"  float fvalue;\n"
"  int qvalue;\n"
"};\n\n";