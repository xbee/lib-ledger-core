// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSWALLETCALLBACK_HPP
#define DJINNI_GENERATED_NJSWALLETCALLBACK_HPP


#include "../../../../core/src/api/Wallet.hpp"
#include "../utils/optional.hpp"
#include "NJSWalletCpp.hpp"
#include <memory>

#include "../../../../core/src/api/Error.hpp"

#include <nan.h>
#include <node.h>
#include "../../../../core/src/api/WalletCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

struct NJSError;

class NJSWalletCallback: public Nan::ObjectWrap, public ledger::core::api::WalletCallback {
public:

    static void Initialize(Local<Object> target);
    ~NJSWalletCallback() {njs_impl.Reset();};
    NJSWalletCallback(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    void onCallback(const std::shared_ptr<Wallet> & result, const std::experimental::optional<Error> & error);

private:
    static NAN_METHOD(New);

    static NAN_METHOD(addRef);
    static NAN_METHOD(removeRef);
    Nan::Persistent <Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSWALLETCALLBACK_HPP
