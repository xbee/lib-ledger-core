// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSBITCOINLIKEINPUT_HPP
#define DJINNI_GENERATED_NJSBITCOINLIKEINPUT_HPP


#include "../utils/optional.hpp"
#include "NJSAmountCpp.hpp"
#include <cstdint>
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../../../../core/src/api/BitcoinLikeInput.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSBitcoinLikeInput: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSBitcoinLikeInput() {};
    NJSBitcoinLikeInput(const std::shared_ptr<ledger::core::api::BitcoinLikeInput> &iBitcoinLikeInput):_BitcoinLikeInput(iBitcoinLikeInput){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeInput> &object);
    static Nan::Persistent<ObjectTemplate> BitcoinLikeInput_prototype;
    std::shared_ptr<ledger::core::api::BitcoinLikeInput> getCppImpl(){return _BitcoinLikeInput;};

private:
    static NAN_METHOD(getAddress);

    static NAN_METHOD(getValue);

    static NAN_METHOD(isCoinbase);

    static NAN_METHOD(getCoinbase);

    static NAN_METHOD(getPreviousTxHash);

    static NAN_METHOD(getPreviousOutputIndex);

    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::BitcoinLikeInput> _BitcoinLikeInput;
};
#endif //DJINNI_GENERATED_NJSBITCOINLIKEINPUT_HPP
