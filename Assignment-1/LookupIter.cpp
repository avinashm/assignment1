#include "LookupIter.h"

LookupIter::LookupIter(char *_key, KeyType _keyType, TreeNode *_node, int _position, int _payloadLen) {
    key = _key;
    keyType = _keyType;
    node = _node;
    position = _position;
    payloadlen = _payloadLen;
    nullIter = false;
}

LookupIter::LookupIter() {
    nullIter = true;
}

bool LookupIter::isNull() {
    return nullIter;
}

bool LookupIter::hasNext() {
    /*
     * TODO: Fill in code
     *
     * Hint: See usage in Index.cpp.main() to understand functionality
     * Also see LookupIter.h
     */
}

int LookupIter::next() {
    /*
     * TODO: Fill in code
     *
     * Hint: See usage in Index.cpp.main() to understand functionality
     * Also see LookupIter.h
     */
}


int LookupIter::get(char *payload) {
    /*
     * TODO: Fill in code
     */
}