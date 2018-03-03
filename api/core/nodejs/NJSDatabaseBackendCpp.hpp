// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from database.djinni

#ifndef DJINNI_GENERATED_NJSDATABASEBACKEND_HPP
#define DJINNI_GENERATED_NJSDATABASEBACKEND_HPP


#include <cstdint>
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../../../../core/src/api/DatabaseBackend.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSDatabaseBackend: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSDatabaseBackend() {};
    NJSDatabaseBackend(const std::shared_ptr<ledger::core::api::DatabaseBackend> &iDatabaseBackend):_DatabaseBackend(iDatabaseBackend){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::DatabaseBackend> &object);
    static Nan::Persistent<ObjectTemplate> DatabaseBackend_prototype;
    std::shared_ptr<ledger::core::api::DatabaseBackend> getCppImpl(){return _DatabaseBackend;};

private:
    static NAN_METHOD(setUsername);

    static NAN_METHOD(setPassword);

    static NAN_METHOD(setHost);

    static NAN_METHOD(setHostAddr);

    static NAN_METHOD(setPort);

    static NAN_METHOD(setOptions);

    static NAN_METHOD(setSslMode);

    static NAN_METHOD(setKerberosName);

    static NAN_METHOD(setService);

    static NAN_METHOD(setConnectionPoolSize);

    static NAN_METHOD(enableQueryLogging);

    static NAN_METHOD(getUsername);

    static NAN_METHOD(getPassword);

    static NAN_METHOD(getHost);

    static NAN_METHOD(getHostAddr);

    static NAN_METHOD(getPort);

    static NAN_METHOD(getOptions);

    static NAN_METHOD(getSslMode);

    static NAN_METHOD(getKerberosName);

    static NAN_METHOD(getService);

    static NAN_METHOD(getConnectionPoolSize);

    static NAN_METHOD(isLoggingEnabled);

    static NAN_METHOD(getSqlite3Backend);

    static NAN_METHOD(getPostgreSQLBackend);

    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::DatabaseBackend> _DatabaseBackend;
};
#endif //DJINNI_GENERATED_NJSDATABASEBACKEND_HPP
