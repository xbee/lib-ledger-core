// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from secp256k1.djinni

#ifndef DJINNI_GENERATED_NJSSECP256K1_HPP
#define DJINNI_GENERATED_NJSSECP256K1_HPP


#include <cstdint>
#include <memory>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../../../../core/src/api/Secp256k1.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSSecp256k1: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSSecp256k1() {};
    NJSSecp256k1(const std::shared_ptr<ledger::core::api::Secp256k1> &iSecp256k1):_Secp256k1(iSecp256k1){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::Secp256k1> &object);
    static Nan::Persistent<ObjectTemplate> Secp256k1_prototype;
    std::shared_ptr<ledger::core::api::Secp256k1> getCppImpl(){return _Secp256k1;};

private:
    static NAN_METHOD(computePubKey);

    static NAN_METHOD(sign);

    static NAN_METHOD(verify);

    static NAN_METHOD(newInstance);

    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::Secp256k1> _Secp256k1;
};
#endif //DJINNI_GENERATED_NJSSECP256K1_HPP
