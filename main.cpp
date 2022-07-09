#include "BinPack.h"

int main(int argc, char* argv[]) {
    if (argc < 3) {
        fprintf(stderr, "Usage: pacextractor firmware.pac outdir\n");
        exit(EXIT_FAILURE);
    }

    CBinPack bp;
    BIN_PACKET_HEADER_T bph;
    FILE_T *paFile = NULL;

    BOOL bOK = bp.Unpacket(argv[1], argv[2], bph, &paFile);
    return bOK;
}
