#include "LookupIter.h"

LookupIter::LookupIter(char *_key, KeyType _keyType, TreeNode *_node, int _position, int _paylaodLen) {
    key = _key;
    keyType = _keyType;
    node = _node;
    position = _position;
    payloadlen = _paylaodLen;
    nullIter = false;
}

LookupIter::LookupIter() {
    nullIter = true;
}

bool LookupIter::isNull() {
    return nullIter;
}

bool isKeyEqual(int nextPos, TreeNode *node, KeyType keyType, char* key) {
    int isEqual;
    char * nextKey;
    nextKey = (char *) malloc(keylen(&keyType));
    node->getKey(keyType, nextKey, nextPos-1);
    isEqual = compare(nextKey, key, keyType);

    if(isEqual == 0){
        return true;
    }
    return false;
}

bool LookupIter::hasNext() {
    if(isNull() || (position >= node->numkeys)){
        return false;
    }
    else
        return isKeyEqual(position + 1, node, keyType, key);
}

int LookupIter::next() {
    if(hasNext()){
        position += 1;
        return 0;
    }
    return -1;
}


int LookupIter::get(char *payload) {
    strncpy(payload, &(node->data[DATA_SIZE - (position) * payloadlen]),payloadlen);
    return 0;
}