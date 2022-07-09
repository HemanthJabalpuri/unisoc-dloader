#ifndef TYPEDEF_H
#      define TYPEDEF_H

#      include <stdint.h>

typedef uint32_t DWORD;
typedef uint8_t *LPBYTE;
typedef uint32_t BOOL;
typedef const char *LPCTSTR;
typedef uint8_t BYTE;
typedef uint32_t UINT;
typedef uint16_t WORD;
typedef char _TCHAR;
typedef char TCHAR;
typedef int64_t __int64;
typedef uint64_t __uint64;

#      define MAX_PATH  260
#      define TRUE     1
#      define FALSE    0

#      define _T(x)     x


int delete_dir (const char *dirname);

#endif // TYPEDEF_H
