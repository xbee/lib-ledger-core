// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSBITCOINLIKEBLOCK_HPP
#define DJINNI_GENERATED_NJSBITCOINLIKEBLOCK_HPP


#include <chrono>
#include <cstdint>
#include <string>

#include <nan.h>
#include <node.h>
#include "../../../../core/src/api/BitcoinLikeBlock.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBitcoinLikeBlock: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSBitcoinLikeBlock() {};
    NJSBitcoinLikeBlock(const std::shared_ptr<ledger::core::api::BitcoinLikeBlock> &iBitcoinLikeBlock):_BitcoinLikeBlock(iBitcoinLikeBlock){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeBlock> &object);
    static Nan::Persistent<ObjectTemplate> BitcoinLikeBlock_prototype;
    std::shared_ptr<ledger::core::api::BitcoinLikeBlock> getCppImpl(){return _BitcoinLikeBlock;};

private:
    static NAN_METHOD(getHash);

    static NAN_METHOD(getHeight);

    static NAN_METHOD(getTime);

    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::BitcoinLikeBlock> _BitcoinLikeBlock;
};
#endif //DJINNI_GENERATED_NJSBITCOINLIKEBLOCK_HPP
