#include "commons.h"
#include "Utils.h"

int keylen(KeyType *keytype) {
    int len = 0;
    for (int i = 0; i < keytype->numAttrs; i++) {
        len += keytype->attrLen[i];
    }
    return len;
}

/*
 * Compare function. Takes care of composite keys
 */
//returns -1 if first value is smaller
int compare(char *_key1, char *_key2, KeyType keyType) {
    char *key1 = _key1, *key2 = _key2;
    for (int i = 0; i < keyType.numAttrs; i++) {
        switch (keyType.attrTypes[i]) {
            case intType:
                if (Utils::getIntForBytes(key1) > Utils::getIntForBytes(key2))
                    return 1;
                else if (Utils::getIntForBytes(key1) < Utils::getIntForBytes(key2))
                    return -1;
                break;

            case stringType:
                int result = strncmp(key1, key2, keyType.attrLen[i]);
                if (result != 0)
                    return result;
                break;
        }
        key1 = key1 + keyType.attrLen[i];
        key2 = key2 + keyType.attrLen[i];
    }
    return 0;
}
