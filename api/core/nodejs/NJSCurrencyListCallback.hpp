// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSCURRENCYLISTCALLBACK_HPP
#define DJINNI_GENERATED_NJSCURRENCYLISTCALLBACK_HPP


#include "../utils/optional.hpp"
#include <vector>

#include "../../../../core/src/api/Currency.hpp"
#include "../../../../core/src/api/Error.hpp"

#include <nan.h>
#include <node.h>
#include "../../../../core/src/api/CurrencyListCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

struct NJSCurrency;
struct NJSError;

class NJSCurrencyListCallback: public Nan::ObjectWrap, public ledger::core::api::CurrencyListCallback {
public:

    static void Initialize(Local<Object> target);
    ~NJSCurrencyListCallback() {njs_impl.Reset();};
    NJSCurrencyListCallback(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    void onCallback(const std::experimental::optional<std::vector<Currency>> & result, const std::experimental::optional<Error> & error);

private:
    static NAN_METHOD(New);

    static NAN_METHOD(addRef);
    static NAN_METHOD(removeRef);
    Nan::Persistent <Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSCURRENCYLISTCALLBACK_HPP
