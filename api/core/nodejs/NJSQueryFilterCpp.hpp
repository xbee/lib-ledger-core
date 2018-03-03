// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_NJSQUERYFILTER_HPP
#define DJINNI_GENERATED_NJSQUERYFILTER_HPP


#include "NJSAmountCpp.hpp"
#include <chrono>
#include <cstdint>
#include <memory>
#include <string>

#include "../../../../core/src/api/OperationType.hpp"
#include "../../../../core/src/api/TrustLevel.hpp"

#include <nan.h>
#include <node.h>
#include "../../../../core/src/api/QueryFilter.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSQueryFilter: public Nan::ObjectWrap {
public:

    static void Initialize(Local<Object> target);
    virtual ~NJSQueryFilter() {};
    NJSQueryFilter(const std::shared_ptr<ledger::core::api::QueryFilter> &iQueryFilter):_QueryFilter(iQueryFilter){};

    static Handle<Object> wrap(const std::shared_ptr<ledger::core::api::QueryFilter> &object);
    static Nan::Persistent<ObjectTemplate> QueryFilter_prototype;
    std::shared_ptr<ledger::core::api::QueryFilter> getCppImpl(){return _QueryFilter;};

private:
    static NAN_METHOD(accountEq);

    static NAN_METHOD(accountNeq);

    static NAN_METHOD(dateLte);

    static NAN_METHOD(dateLt);

    static NAN_METHOD(dateGt);

    static NAN_METHOD(dateGte);

    static NAN_METHOD(dateEq);

    static NAN_METHOD(dateNeq);

    static NAN_METHOD(containsRecipient);

    static NAN_METHOD(containsSender);

    static NAN_METHOD(currencyEq);

    static NAN_METHOD(operationUidEq);

    static NAN_METHOD(operationUidNeq);

    static NAN_METHOD(trustEq);

    static NAN_METHOD(trustNeq);

    static NAN_METHOD(feesEq);

    static NAN_METHOD(feesNeq);

    static NAN_METHOD(feesGte);

    static NAN_METHOD(feesGt);

    static NAN_METHOD(feesLte);

    static NAN_METHOD(feesLt);

    static NAN_METHOD(amountEq);

    static NAN_METHOD(amountNeq);

    static NAN_METHOD(amountGte);

    static NAN_METHOD(amountGt);

    static NAN_METHOD(amountLte);

    static NAN_METHOD(amountLt);

    static NAN_METHOD(blockHeightEq);

    static NAN_METHOD(blockHeightNeq);

    static NAN_METHOD(blockHeightGte);

    static NAN_METHOD(blockHeightGt);

    static NAN_METHOD(blockHeightLte);

    static NAN_METHOD(blockHeightLt);

    static NAN_METHOD(blockHeightIsNull);

    static NAN_METHOD(operationTypeEq);

    static NAN_METHOD(operationTypeNeq);

    static NAN_METHOD(op_and);

    static NAN_METHOD(op_or);

    static NAN_METHOD(op_and_not);

    static NAN_METHOD(op_or_not);

    static NAN_METHOD(New);

    std::shared_ptr<ledger::core::api::QueryFilter> _QueryFilter;
};
#endif //DJINNI_GENERATED_NJSQUERYFILTER_HPP
