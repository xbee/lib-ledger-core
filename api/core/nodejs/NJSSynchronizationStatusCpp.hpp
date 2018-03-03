// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_NJSSYNCHRONIZATIONSTATUS_HPP
#define DJINNI_GENERATED_NJSSYNCHRONIZATIONSTATUS_HPP


#include <nan.h>
#include <node.h>
#include "../../../../core/src/api/SynchronizationStatus.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSSynchronizationStatus: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSSynchronizationStatus() {};
    NJSSynchronizationStatus(const std::shared_ptr<ledger::core::api::SynchronizationStatus> &iSynchronizationStatus):_SynchronizationStatus(iSynchronizationStatus){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::SynchronizationStatus> &object);
    static Nan::Persistent<ObjectTemplate> SynchronizationStatus_prototype;
    std::shared_ptr<ledger::core::api::SynchronizationStatus> getCppImpl(){return _SynchronizationStatus;};

private:
    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::SynchronizationStatus> _SynchronizationStatus;
};
#endif //DJINNI_GENERATED_NJSSYNCHRONIZATIONSTATUS_HPP
